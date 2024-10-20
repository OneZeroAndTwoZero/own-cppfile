#include<bits/stdc++.h>
using namespace std;

int n,s;
string ch;
int a[105][105] = {0};

int zhuan(){
	int re = 0;
	for(int i = 0;i < ch.size();i++){
		re = re * 10 + (ch[i] - '0');
	}
	return re;
}

int main(){
	cin >> n >> s;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> ch;
			if(ch == "-"){
				a[i][j] = -1;
			}else{
				a[i][j] = zhuan();
			}
		}
	}
	for(int k = 1;k <= n;k++){
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(a[i][k] != -1 && a[k][j] != -1){
					if(a[i][j] != -1) a[i][j] = min(a[i][j],a[i][k] + a[k][j]);
					else a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
	}
	for(int i = 1;i <= n;i++){
		if(i != s) cout << "(" << s << " -> " << i << ") = " << a[s][i] << "\n";
	}

	return 0;
}

