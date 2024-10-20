#include<bits/stdc++.h>
using namespace std;

int n;
char a[1005][2005];

void in(int x,int y){
	a[x][y] = a[x + 1][y - 1] = '/';
	a[x][y + 1] = a[x + 1][y + 2] = '\\';
	a[x + 1][y] = a[x + 1][y + 1] = '_';
}

void cz(int t,int x,int y){
	if(t == 1){
		in(x,y);
		return;
	}
	cz(t - 1,x,y);
	cz(t - 1,x + pow(2,t - 1),y - pow(2,t - 1));
	cz(t - 1,x + pow(2,t - 1),y + pow(2,t - 1));
}

int main(){
	scanf("%d",&n);
	cz(n,0,pow(2,n) - 1);
	for(int i = 0;i < pow(2,n);i ++){
		for(int j = 0;j < pow(2,n + 1);j ++){
			if(a[i][j] != '_' && a[i][j] != '\\' && a[i][j] != '/') cout << ' ';
			else cout << a[i][j];
		}
		puts("");
	}

	return 0;
}

