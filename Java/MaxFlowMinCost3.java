import static java.lang.Math.min;

import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.Scanner;

public class MaxFlowMinCost3 {

	/*
	 * MaxFlowMinCost runtime O(nlog(n)mF) where F is the max flow Start is start index End is end index mf = the max flow you want (give Int.max
	 * otherwise) ca is the capacity matrix co is the cost matrix (this will be changed by the algorithm) Can deal with initial negative weight edges.
	 * Can deal with an edge between i,j and j,i.
	 * 
	 * Bipartite graph of 450 verticies total in 1s Complete graph of 150 verticis total in 1s
	 * 
	 * returns {flow,cost}
	 */
	static int[][] cap, flow;
	static int[][] cost;
	static double[] pot;
	static int curf, maxf;

	public static int[] maxFlowMinCost(int start, int end, int mf, int[][] ca, int[][] co) {
		maxf = mf;
		curf = 0;
		cost = co;
		cap = ca;
		flow = new int[ca.length][ca[0].length];
		pot = new double[ca.length];
		pot = bellmanford(start);
		if (pot[end] == Double.MAX_VALUE)
			return new int[] { 0, 0 };

		while (true) {
			double[][] data = dijkstra(start, end);
			if (data == null)
				break;
			for (int i = 0; i < pot.length; i++)
				pot[i] += data[1][i];

			curf += update(start, end, data[0], Integer.MAX_VALUE);
		}
		int c = 0;
		for (int i = 0; i < flow.length; i++)
			for (int j = 0; j < flow.length; j++)
				c += flow[i][j] * cost[i][j];
		return new int[] { curf, c };
	}

	static int flow(int i, int j) {
		int f1 = cap[i][j] - flow[i][j];
		int f2 = flow[j][i];
		if (f1 != 0 && (f2 == 0 || cost[i][j] < -cost[j][i])) {
			return f1;
		} else if (f2 != 0) {
			return f2;
		} else
			return 0;
	}

	static double cost(int i, int j) {
		int f1 = cap[i][j] - flow[i][j];
		int f2 = flow[j][i];
		if (f1 != 0 && (f2 == 0 || cost[i][j] < -cost[j][i])) {
			return cost[i][j] + pot[i] - pot[j];
		} else if (f2 != 0) {
			return -cost[j][i] + pot[i] - pot[j];
		} else
			return Double.MAX_VALUE;
	}

	static void addFlow(int i, int j, int amount) {
		int f1 = cap[i][j] - flow[i][j];
		int f2 = flow[j][i];
		if (f1 != 0 && (f2 == 0 || cost[i][j] < -cost[j][i])) {
			flow[i][j] += amount;
		} else {
			flow[j][i] -= amount;
		}
	}

	private static int update(int start, int at, double[] path, int flow) {
		if (start == at)
			return flow;
		flow = update(start, (int) path[at], path, min(flow, flow((int) path[at], at)));
		addFlow((int) path[at], at, (int) flow);
		return flow;
	}

	private static double[] bellmanford(int start) {
		double[] dist = new double[cap.length];
		int[] pred = new int[cap.length];
		Arrays.fill(dist, Double.MAX_VALUE);
		Arrays.fill(pred, -1);
		dist[start] = 0;

		for (int i = 0; i < cap.length; i++) {
			for (int j = 0; j < cap.length; j++) {
				for (int m = 0; m < cap.length; m++) {
					if (dist[m] > dist[j] + cost(j, m)) {
						dist[m] = dist[j] + cost(j, m);
						pred[m] = j;
					}
				}
			}
		}
		return dist;
	}

	private static double[][] dijkstra(int start, int end) {
		double[] dist = new double[cap.length];
		double[] pred = new double[cap.length];
		Arrays.fill(dist, Double.MAX_VALUE);
		Arrays.fill(pred, -1);
		PriorityQueue<Node2> pq = new PriorityQueue<Node2>();
		pq.add(new Node2(0, start));
		dist[start] = 0;
		while (pq.size() > 0) {
			Node2 n = pq.poll();
			if (dist[n.at] < n.c)
				continue;
			for (int i = 0; i < cap.length; i++) {
				if (flow(n.at, i) > 0) {
					if (cost(n.at, i) < 0) {
						System.out.println("ERROR: " + cost(n.at, i) + " " + pot[n.at] + " " + pot[i] + " " + cost[n.at][i] + " " + (-cost[i][n.at]));
						System.exit(0);
					}
					double c = n.c + cost(n.at, i);
					if (c < dist[i]) {
						pq.add(new Node2(c, i));
						dist[i] = c;
						pred[i] = n.at;
					}
				}
			}
		}
		if (dist[end] == Double.MAX_VALUE)
			return null;
		else
			return new double[][] { pred, dist };
	}

	private static class Node2 implements Comparable<Node2> {
		double c;
		int at;

		public Node2(double cost, int a) {
			c = cost;
			at = a;
		}

		public int compareTo(Node2 n) {
			int a = Double.valueOf(c).compareTo(n.c);
			if (a != 0)
				return a;
			return Integer.valueOf(at).compareTo(n.at);
		}
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		while ((n = in.nextInt()) != 0) {
			char[][] map = new char[5][];
			for (int i = 0; i < map.length; i++) {
				map[i] = in.next().toCharArray();
			}
			int[][] cost = new int[5 * (2 + n)][5 * (2 + n)];
			int[][] cap = new int[5 * (2 + n)][5 * (2 + n)];
			for (int i = 0; i < map.length; i++) {
				cap[5 * n + i][5 * (n + 1)] = 1;
				cost[5 * n + i][5 * (n + 1)] = 0;
				if (map[i][0] == '@') {
					cap[0][5 + i] = 1;
					cost[0][5 + i] = 0;
				}
				cap[5 + i][5 * 2 + i] = 1;
				cost[5 + i][5 * 2 + i] = map[i][1] - '0';
				if (i > 0) {
					cap[5 + i][4 + i] = 1;
					cost[5 + i][4 + i] = map[i - 1][0] - '0';
				}
				if (i < 4) {
					cap[5 + i][6 + i] = 1;
					cost[5 + i][6 + i] = map[i + 1][0] - '0';
				}
				for (int j = 2; j < map[i].length; j++) {
					cap[5 * j + i][5 * (j + 1) + i] = 1;
					cost[5 * j + i][5 * (j + 1) + i] = map[i][j] - '0';
					if (i > 0) {
						cap[5 * j + i][5 * j + i - 1] = 1;
						cost[5 * j + i][5 * j + i - 1] = map[i - 1][j - 1] - '0';
					}
					if (i < 4) {
						cap[5 * j + i][5 * j + i + 1] = 1;
						cost[5 * j + i][5 * j + i + 1] = map[i + 1][j - 1] - '0';
					}
				}
			}
			System.out.println(maxFlowMinCost(0, 5 * (n + 1), 3, cap, cost)[1]);
		}
	}
}