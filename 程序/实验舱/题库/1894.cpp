#include<bits/stdc++.h>
using namespace std;

char a[105][105] = {0};

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			a[i][j] = '.';
		}
	}
	for(int i = 0;i < k;i++){
		int si,sj;
		char co,d;
		cin >> si >> sj >> co >> d;
		si --,sj --;
		int di = 0,dj = 0;
		if(d == 'L') dj = -1;
		if(d == 'R') dj = 1;
		if(d == 'U') di = -1;
		if(d == 'D') di = 1;
		while(si >= 0 && si < n && sj >= 0 && sj < m){
			a[si][sj] = co;
			si += di,sj += dj;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

