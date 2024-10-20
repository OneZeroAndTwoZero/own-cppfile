#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	bool t = 0;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < m;i++){
		int op,k,x;
		cin >> op;
		if(op != 3) cin >> k,k --;
		else t = !t;
		if(op == 2) cin >> x;
		if(op == 1){
			if(t) cout << a[n - k - 1] << endl;
			else cout << a[k] << endl;
		}else if(op == 2){
			if(t) a[n - k - 1] = x;
			else a[k] = x;
		}
	}

	return 0;
}

