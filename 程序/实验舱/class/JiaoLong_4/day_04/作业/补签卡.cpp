#include<bits/stdc++.h>
using namespace std;

struct card{
	int dayq,dayh,day,s;
	bool y;
};

int a[366] = {0};
int no[366] = {0};
card bqk[1002];
int t,pos,ans = 0;
int n,m;

bool cmp(card k,card b){
	return ((double)k.dayq + k.dayh) / k.day > ((double)b.dayq + b.dayh) / b.day;
}

int main(){
	scanf("%d",&t);
	while(t --){
		for(int i = 1;i < 366;i++){
			a[i] = i;
		}
		scanf("%d %d",&n,&m);
		for(int i = 0;i < n;i++){
			scanf("%d",&no[i]);
		}
		if(m >= n){
			printf("%d\n",365);
			continue;
		}
		for(int i = 0;i < n;i++){
			a[no[i]] = 0;
		}
		for(int i = 1;i <= 365;i++){
			if(a[i]){
				a[i] = a[i - 1] + 1;
			}
		}
		for(int i = 365;i > 0;i--){
			if(a[i] && i != 365){
				a[i] = a[i + 1];
			}
		}
		pos = -1;
		for(int i = 0;i < n;i++){
			if(i != 0 && no[i] == no[i - 1] + 1){
				bqk[pos].day ++;
				bqk[pos].dayh = no[i] == 365 ? 0 : a[no[i] + 1];
			}else{
				pos ++;
				bqk[pos].day = 1;
				bqk[pos].s = no[i];
				bqk[pos].dayq = no[i] == 1 ? 0 : a[no[i] - 1];
				bqk[pos].y = 1;
			}
		}
		sort(bqk,bqk + pos + 1,cmp);
		while(m > 0){
			for(int i = 0;i <= pos;i++){
				if(bqk[i].y && bqk[i].day <= m){
					m -= bqk[i].day;
					break;
				}
			}
			break;
		}
		for(int i = 0;i <= pos;i++){
			if(!bqk[i].y){
				for(int j = bqk[i].s;j - bqk[i].s < bqk[i].day;j++){
					a[j] = 0;
				}
			}
		}
		ans = 0;
		for(int i = 1;i < 366;i++){
			if(i != 1){
				if(a[i]){
					a[i] = a[i - 1] + 1;
					ans = max(ans,a[i]);
				}
			}else{
				ans = max(ans,a[1]);
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}

