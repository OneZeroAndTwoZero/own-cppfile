#include<bits/stdc++.h>
using namespace std;

struct lian{
	int adr,dat,nxt;
};

lian a[100005];
vector<int> lianb;
vector<int> ans;

void cz_fu(int n){
	int num = 0;
	for(int i = 0;i < n;i++){
		if(a[lianb[i]].dat < 0){
			num ++;
			ans.push_back(lianb[i]);
		}
	}
}

void cz_k(int n,int k){
	for(int i = 0;i < n;i++){
		if(a[lianb[i]].dat >= 0 && a[lianb[i]].dat <= k){
			ans.push_back(lianb[i]);
		}
	}
	for(int i = 0;i < n;i++){
		if(a[lianb[i]].dat > k){
			ans.push_back(lianb[i]);
		}
	}
}

int main(){
	int t,n,k;
	cin >> t >> n >> k;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		cin >> a[tem].dat >> a[tem].nxt;
	}
	int tem_t = t;
	for(int i = 0;i < n;i++){
		lianb.push_back(tem_t);
		tem_t = a[tem_t].nxt;
	}
	cz_fu(n);
	cz_k(n,k);
	for(int i = 0;i < n - 1;i++){
		printf("%05d %d %05d\n",ans[i],a[ans[i]].dat,ans[i + 1]);
	}
	printf("%05d %d -1",ans[n - 1],a[ans[n - 1]].dat);

	return 0;
}

