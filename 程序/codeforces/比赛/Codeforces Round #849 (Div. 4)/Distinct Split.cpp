#include<bits/stdc++.h>
using namespace std;

int t,n,ans = 0;
string s;
int ans1[300005] = {0},ans2[300005] = {0};
int ok[128] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		cin >> s;
		for(int i = 0;i < 128;i++) ok[i] = 0;
		ans1[0] = 0;
		for(int i = 0;i < n;i++){
			ans1[i] = i == 0 ? 0 : ans1[i - 1];
			if(!ok[s[i]]){
				ok[s[i]] = 1;
				ans1[i] ++;
			}
		}
		for(int i = 0;i < 128;i++) ok[i] = 0;
		ans2[n - 1] = 0;
		for(int i = n - 1;i >= 0;i--){
			ans2[i] = i == n - 1 ? 0 : ans2[i + 1];
			if(!ok[s[i]]){
				ok[s[i]] = 1;
				ans2[i] ++;
			}
		}
		ans = 0;
		for(int i = 0;i < n - 1;i++){
			ans = max(ans,ans1[i] + ans2[i + 1]);
		}
		printf("%d\n",ans);
	}

	return 0;
}

