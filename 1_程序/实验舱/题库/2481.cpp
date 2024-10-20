#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int m,n;
	cin >> m >> n;
	int f = 0,l = m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int max = -1;
	for(int i = 0;i < n;i++){
		int op;
		cin >> op;
		int cha;
		if(op){
			cha = a[i];
		}else{
			cha = m - a[i];
		}
		if(cha > max) max = cha;
	}
	cout << max << endl;

	return 0;
}

