#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[101][101] = {0};

bool su(int a){
	if(a < 2) return 0;
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(su(a[i][j])){
				int sum = 0;
				for(int k = 0;k < n;k++){
			        for(int k2 = 0;k2 < m;k2++){
				        if(i == k || j == k2 || i - j == k - k2 || i + j == k + k2){
				        	if(su(a[k][k2])) sum ++;
		            	}
			        }
		        }
		        cout << sum << endl;
		        return 0;
			}
		}
	}

	return 0;
}

