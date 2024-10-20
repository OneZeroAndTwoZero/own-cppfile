#include<bits/stdc++.h>
using namespace std;

int c[100005] = {0};
int n,m,now;
int s;
long long ans;

int main(){
	scanf("%d %d",&n,&m);
	ans = 0;
	now = 0;
	for(int i = 0;i < n;i++){
		scanf("%d %d",&c[i],&s);
		while(1){
			if(s < c[now]){
				c[now] -= s;
				ans += s;
				break;
			}else{
				s -= c[now];
				ans += c[now];
				c[now] = 0;
				if(now < i) now ++;
				else break;
			}	
		}
		now = max(now,i - m + 1);
	}
	cout << ans << endl;

	return 0;
}

