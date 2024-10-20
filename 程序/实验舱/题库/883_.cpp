#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

void re(int r,int c){
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j ++){
			cout << a[c * i + j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n,m,r,c;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j ++){
			cin >> a[m * i + j];
		}
	}
	cin >> r >> c;
	if(r * c != n * m){
		r = n,c = m;
	}
	re(r,c);

	return 0;
}

