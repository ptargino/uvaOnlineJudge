#include <iostream>
#include <cstring>

using namespace std;

const int MAXBLOCK = 100;
int table[MAXBLOCK][MAXBLOCK];

struct Stack {
        int x,y;
} block[MAXBLOCK];

void move_onto(int a,int b) {
        int a_x,a_y,b_x,b_y;
        a_x=block[a].x;
        a_y=block[a].y;
        b_x=block[b].x;
        b_y=block[b].y;
        while (table[a_x][a_y+1]!=-1)
        {
                block[table[a_x][a_y+1]].x=table[a_x][a_y+1];
                block[table[a_x][a_y+1]].y=0;
                table[table[a_x][a_y+1]][0]=table[a_x][a_y+1];
                table[a_x][a_y+1]=-1;
                a_y++;
        }
        while (table[b_x][b_y+1]!=-1)
        {
                block[table[b_x][b_y+1]].x=table[b_x][b_y+1];
                block[table[b_x][b_y+1]].y=0;
                table[table[b_x][b_y+1]][0]=table[b_x][b_y+1];
                table[b_x][b_y+1]=-1;
                b_y++;
        }
        table[block[b].x][block[b].y+1]=a;
        table[block[a].x][block[a].y]=-1;
        block[a].x=block[b].x;
        block[a].y=block[b].y+1;
}

void move_over(int a,int b)
{
        int a_x,a_y,b_x,b_y,top;
        a_x=block[a].x;
        a_y=block[a].y;
        while (table[a_x][a_y+1]!=-1)
        {
                block[table[a_x][a_y+1]].x=table[a_x][a_y+1];
                block[table[a_x][a_y+1]].y=0;
                table[table[a_x][a_y+1]][0]=table[a_x][a_y+1];
                table[a_x][a_y+1]=-1;
                a_y++;
        }
        b_x=block[b].x;
        top=b_y=block[b].y;
        while (table[b_x][top]!=-1)
                top++;
        table[block[b].x][top]=a;
        table[block[a].x][block[a].y]=-1;
        block[a].x=block[b].x;
        block[a].y=top;
}

void pile_onto(int a,int b) {
        int a_x,a_y,b_x,b_y,top;
        b_x=block[b].x;
        b_y=block[b].y;
        while (table[b_x][b_y+1]!=-1)
        {
                block[table[b_x][b_y+1]].x=table[b_x][b_y+1];
                block[table[b_x][b_y+1]].y=0;
                table[table[b_x][b_y+1]][0]=table[b_x][b_y+1];
                table[b_x][b_y+1]=-1;
                b_y++;
        }
        top=block[b].y+1;
        a_x=block[a].x;
        a_y=block[a].y;
        while (table[a_x][a_y]!=-1) {
                table[block[b].x][top]=table[a_x][a_y];
                block[table[a_x][a_y]].x=block[b].x;
                block[table[a_x][a_y]].y=top;
                table[a_x][a_y]=-1;
                top++;a_y++;
        }
}

void pile_over(int a,int b) {
        int a_top,b_top,a_x,a_y,b_x,b_y;
        a_x=block[a].x;
        a_top=a_y=block[a].y;
        b_x=block[b].x;
        b_top=b_y=block[b].y;
        if (a_x==b_x) return;
        while (table[b_x][b_top]!=-1)
                b_top++;
        while (table[a_x][a_y]!=-1) {
                table[block[b].x][b_top]=table[a_x][a_y];
                block[table[a_x][a_y]].x=block[b].x;
                block[table[a_x][a_y]].y=b_top;
                table[a_x][a_y]=-1;
                b_top++;a_y++;
        }
}


int main() {
        int N,a,b;
        char cmd1[10], cmd2[10];

        cin >> N;
//initilize block
        for (int i = 0;i<MAXBLOCK;i++)
                for (int j = 0;j<MAXBLOCK;j++)
                        table[i][j] = -1;
        for (int j = 0;j<N;j++)
                table[j][0]=j;
        for (int i = 0;i<N;i++)
                block[i].x=i, block[i].y=0;

//end initilization
        while (cin >> cmd1 >> a >> cmd2 >> b) {
                if (strcmp(cmd1,"quit")==0) break;
                if (a == b || block[a].x == block[b].x) continue;
                if (strcmp(cmd1,"move")==0 && strcmp(cmd2,"onto")==0) move_onto(a,b);
                if (strcmp(cmd1,"move")==0 && strcmp(cmd2,"over")==0) move_over(a,b);
                if (strcmp(cmd1,"pile")==0 && strcmp(cmd2,"onto")==0) pile_onto(a,b);
                if (strcmp(cmd1,"pile")==0 && strcmp(cmd2,"over")==0) pile_over(a,b);
        }
//print result;
        for(int i = 0;i<N;i++) {
                cout << i << ":";
                for(int j = 0;j<N;j++)
                        if(table[i][j]!=-1) 
							cout<<" "<<table[i][j];
                cout << '\n'; 
    	}
}