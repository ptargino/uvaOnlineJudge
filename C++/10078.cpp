#include "stdio.h"

using namespace std;

#define MAX 52

typedef struct {
   	int x;
   	int y;
} point;

int cross(point a, point b, point c) {
	return (b.x - a.x)*(c.y - b.y) - (b.y - a.y)*(c.x - b.x);
}

//Is Convex Implementation O(n)
int main(){
	int n;
	point p[MAX];
	while(scanf("%d", &n) && n) {
		
		for(int i = 0; i < n; i++)
		 	scanf("%d%d", &p[i].x, &p[i].y);
		
		p[n] = p[0];
		p[n+1] = p[1];
		
		int reference = cross(p[0], p[1], p[2]);
		bool isConvex = false;
		for(int i = 1; i < n; i++);
			//Verify if is either always positive or always negative
			if(cross(p[i], p[i+1], p[i+2]) * reference < 0){
				isConvex = true;
				break;
			}
		printf(isConvex?"Yes\n":"No\n");
	}
}
