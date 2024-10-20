#include<bits/stdc++.h>
using namespace std;

int t,n,m;
string s[1005];
bool check[1005] = {0},ans[1005] = {0},ans2[1005] = {0};

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i < m;i++){
			cin >> s[i] >> check[i];
			memset(ans,0,sizeof(ans));
			memset(ans2,0,sizeof(ans2));
		}
		bool ok = 0;
		for(int j = 0;j < n * n && !ok;j++){
			int now = j % n;
			if(!ans2[now]){
				int r1 = 0,r2 = 0,r3 = 0,r4 = 0;
				for(int k = 0;k < m;k++){
					if(!ans[k]){
						if(s[k][now] == '1'){
							if(check[k] == 1) r1 ++;
							else r2 ++;
						}else{
							if(check[k] == 1) r3 ++;
							else r4 ++;
						}
				    }
				}
				if(r1 * r2 == 0 && r3 * r4 == 0){
					ok = 1;
					break;
				}else if(r1 * r2 == 0){
					for(int i = 0;i < m;i++){
						if(s[i][now] == '1') ans[i] = 1;
					}
					ans2[now] = 1;
				}else if(r3 * r4 == 0){
					for(int i = 0;i < m;i++){
						if(s[i][now] == '0') ans[i] = 1;
					}
					ans2[now] = 1;
				}
			}
		}
		if(ok){
			puts("OK");
		}else{
			puts("LIE");
		}
	}

	return 0;
}

