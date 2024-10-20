#include<bits/stdc++.h>
using namespace std;

struct node{
	int x, y;
};

int dir[8][2] = {{2, 1}, {-2, 1}, {2, -1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};
node pos[2];

int getd(int x1, int y1, int x2, int y2){
	return ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	for (int i = 0; i < 2; i ++){
		scanf("%d %d", &pos[i].x, &pos[i].y);
	}
	for (int i = 0; i < 8; i ++){
		int tx = pos[0].x + dir[i][0], ty = pos[0].y + dir[i][1];
		if (getd(tx, ty, pos[1].x, pos[1].y) == 5){
			printf("%d %d\n", tx, ty);
			return 0;
		}
	}
	printf("-1\n");
		
	return 0;
}
