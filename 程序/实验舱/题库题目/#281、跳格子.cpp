#include<bits/stdc++.h>
using namespace std;

int n;
int a[105] = {0};
int check[105] = {0};

bool ok(int u){
	if(u + a[u] >= n){
		check[u] = 1;
		return 1;
	}
	for(int i = 1;i <= a[u];i++){
		if(check[u + i] == 1) return 1;
		if(check[u + i] == -1){
			if(ok(u + i)) return 1;
		}
	}
	return 0;
}

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		check[i] = -1;
	}
	if(ok(1)){
		cout << "Perfect\n";
	}else{
		cout << "Oh, No\n";
	}

	return 0;
}

