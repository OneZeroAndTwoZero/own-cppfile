#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};
bool o1[1005] = {0},o2[1005] = {0};
	
int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(a[i][j] == 0){
				o1[i] = 1;
				o2[j] = 1;
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(o1[i] || o2[j]){
				cout << "0 ";
			}else{
			    cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

