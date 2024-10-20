#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

bool zhao(int f,int l,int x){
	for(int i = f;i <= l;i++){
		if(a[i] == x) return 1;
	}
	return 0;
}

int main(){
	int m,n;
	while(cin >> m >> n){
		int ans = 0;
		int f = 0,l = -1;
		for(int i = 0;i < n;i++){
			int t;
			cin >> t;
			if(!zhao(f,l,t)){
				l ++;
				a[l] = t;
				if(l - f + 1 > m){
					f ++;
				}
				ans ++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}

