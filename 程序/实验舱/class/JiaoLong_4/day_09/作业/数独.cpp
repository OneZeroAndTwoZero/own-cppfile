#include<bits/stdc++.h>
using namespace std;

string ans[9] = {"         "};
bool a[100][100],a2[100][100],a3[100][100];

int g(int x,int y){
	return x / 3 * 3 + y / 3;
}

void dfs(int x,int y){
	if(x == 9){
		for(int i = 0;i < 9;i++){
			cout << ans[i] << endl;
		}
		return;
	}
	if(y == 9){
		dfs(x + 1,0);
		return;
	}
	if(ans[x][y] != '?'){
		dfs(x,y + 1);
	}else{
		for(int i = 1;i <= 9;i++){
			if(!a[g(x,y)][i] && !a2[x][i] && !a3[y][i]){
				ans[x][y] = i + '0';
				a[g(x,y)][i] = a2[x][i] = a3[y][i] = 1;
				dfs(x,y + 1);
				a[g(x,y)][i] = a2[x][i] = a3[y][i] = 0;
				ans[x][y] = '?';
			}
		}
	}
}

int main(){
	for(int i = 0;i < 9;i++){
	    cin >> ans[i];
		for(int j = 0;j < 9;j++){
			if(ans[i][j] != '?'){
				a[g(i,j)][ans[i][j] - '0'] = a2[i][ans[i][j] - '0'] = a3[j][ans[i][j] - '0'] = 1;
			}
		}
	}
	dfs(0,0);

	return 0;
}

