#include<bits/stdc++.h>
using namespace std;

int a[1001][1001] = {0};
int b[2000][10001] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n + m - 1;i++){
		for(int k = 0;k < n;k++){
			int j = i - k;
			if(j >= 0 && j < m){
				b[i][a[k][j]] ++;
			}
		}
	}
	for(int j = 0;j < n;j++){
		int sum = 0;
		for(int i = 0;i < 10001;i++){
			if(b[j][i]) sum ++;
			if(sum >= 2){
			    cout << 0 << endl;
				return 0;	
		    }
        }
    }
    cout << 1 << endl;

	return 0;
}

