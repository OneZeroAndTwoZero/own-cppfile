#include<bits/stdc++.h>
using namespace std;

int m;
string s;
int ans;

int main(){
	scanf("%d",&m);
	while(m --){
		cin >> s;
		ans = 0;
		for(int i = 0;i < s.size();i++){
			ans += (int)(s[i] ^ 48);
			ans %= 9;
		}
		printf("%d\n",ans);
	}

	return 0;
}

