#include<bits/stdc++.h>
using namespace std;

int t,n,ans = 0;
string s;

int main(){
	scanf("%d",&t);
	while(t --){
		ans = 0;
		scanf("%d",&n);
		if(!n){
			puts("0");
			continue;
		}
		cin >> s;
		int l = 0,r = n - 1;
		while(l < r){
			if(s[l] == s[r]) break;
			l ++,r --;
			ans ++;
		}
		ans = n - ans * 2;
		printf("%d\n",ans);
	}

	return 0;
}

