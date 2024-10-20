#include<bits/stdc++.h>
using namespace std;

int n,w,s,ans = 0,ans2 = 0;
int a[1005];
bool ok[1005];

bool cmp(int a,int b){
	return a > b;
}

int main(){
	scanf("%d %d",&n,&w);
	s = n;
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n,cmp);
	while(s){
		int now = 0;
		for(int i = 0;i < n;i++){
			if(!ok[i]){
				if(now + a[i] <= w){
					ok[i] = 1;
					now += a[i];
					s --;
				}
			}
		}
		ans ++;
	}
	sort(a,a + n);
	s = n;
	memset(ok,0,sizeof(ok));
	while(s){
		int now = 0;
		for(int i = 0;i < n;i++){
			if(!ok[i]){
				if(now + a[i] <= w){
					ok[i] = 1;
					now += a[i];
					s --;
				}
			}
		}
		ans2 ++;
	}
	printf("%d\n",min(ans,ans2));

	return 0;
}

