#include<bits/stdc++.h>
using namespace std;

int a[101][101] = {0};
int dir[3][2] = {{-1,0},{-1,1},{0,1}};

long long qs(int x,int y){
	long long sum = a[x][y];
	for(int i = 0;i < 3;i++){
	    int dx = x + dir[i][0];
	    int dy = y + dir[i][1];
	    sum += a[dx][dy];
	}
	return sum;
}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cin >> a[i][j];
			}
		}
		long long max = -114514;
		int max_x,max_y;
		for(int i = 1;i < n;i++){
			for(int j = 0;j < n - 1;j++){
				long long tem = qs(i,j);
				if(tem > max){
					max = tem;
					max_x = i,max_y = j;
				}
			}
		}
		long long ans = qs(max_x,max_y);
		double ans_ = ans / 4.0;
		printf("%.2lf\n",ans_);
    }

	return 0;
}
