#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n,m,r,c;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[m * i + j];
		}
	}
	cin >> r >> c;
	if(r * c != n * m){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cout << a[m * i + j] << " ";
			}
			cout << endl;
		}
		return 0;
	}else{
		for(int i = 0;i < r;i++){
			for(int j = 0;j < c;j++){
				cout << a[c * i + j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}

