#include<bits/stdc++.h>
using namespace std;

int t;
string a,b;
int ans = 0;
int c[128];
int n[128];
map<int,int> zhao;

void cz(){
	ans = 0;
	for(int i = 0;i < 128;i++) c[i] = 0,n[i] = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] != b[i]){
			n[a[i]] ++;
		}
		if(c[a[i]] != b[i] && c[a[i]] != 0){
			ans = -1;
			return;
		}
		c[a[i]] = b[i];
		zhao[b[i]]++;
	}
	for(int i = 0;i < 128;i ++){
		if(n[i]){
			if(n[c[i]] && zhao[c[i]] >= 2) ans ++;
			ans ++;
		}
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		cin >> a >> b;
		cz();
		printf("%d\n",ans);
	}

	return 0;
}

