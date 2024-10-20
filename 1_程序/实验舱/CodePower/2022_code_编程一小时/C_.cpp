#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};

int jiay(){
	int ws = 1;
	a[0] += 1;
	for(int i = 1;i < 15;i++){
		a[i] += a[i - 1] / 16;
		if(a[i]) ws = i + 1;
		a[i - 1] %= 16;
	}
	return ws;
}

bool ok(int ws){
	map<int,bool> t;
	for(int i = 0;i < ws;i++){
		if(!t[a[i]]){
			t[a[i]] = 1;
		}else{
			return 0;
		}
	}
	return 1;
}

int main(){
	long long k;
	cin >> k;
	if(k > 10000000) return 0;
	int ws = 1;
	for(long long i = 0;i < k;i++){
		ws = jiay();
		while(!ok(ws)){
			ws = jiay();
		}
	}
	bool f = 1;
	for(int i = 99;i >= 0;i--){
		if(a[i] != 0 || a[i] == 0 && !f){
			if(f){
				f = 0;
			}
			if(a[i] < 10) cout << a[i];
			else cout << (char)(a[i] - 10 + 'A');
		}
	}

	return 0;
}

