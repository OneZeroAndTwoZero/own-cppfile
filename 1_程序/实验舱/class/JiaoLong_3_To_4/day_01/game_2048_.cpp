#include<bits/stdc++.h>
using namespace std;

int a[102] = {0};

int win(int n,int x){
	for(int i = 0;i < n;i++){
		if(a[i] == x) return i;
	}
	return -1;
}

bool ok(int n,int x){
	if(x == 0) return 0;
	if(win(n,x) >= 0){
		a[win(n,x)] = -1;
		return 1;
	}
	return ok(n,x / 2) && ok(n,x / 2);
}

int main(){
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int n;
		cin >> n;
		for(int j = 0;j < n;j++){
			cin >> a[j];
		}
		bool r = ok(n,2048);
		if(r){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	} 

	return 0;
}


