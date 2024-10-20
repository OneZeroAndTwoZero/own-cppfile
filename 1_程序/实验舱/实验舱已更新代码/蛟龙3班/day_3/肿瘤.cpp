#include<bits/stdc++.h>
using namespace std;

int n,f1,f2,e1,e2;
int a[1001][1001] = {0};

int main(){
	cin >> n;
	bool o = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
			if(a[i][j] == 0 && o){
				f1 = i,f2 = j;
				e1 = f1,e2 = f2;
				o = 0;
			}else if(a[i][j] == 0){
				e1 = i,e2 = j;
			}
		}
	}
	int sum = 0;
	for(int i = f1 + 1;i < e1;i++){
		for(int j = f2 + 1;j < e2;j++){
			if(a[i][j] == 255) sum ++;
		}
	}
	cout << sum << endl;

	return 0;
}

