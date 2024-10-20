#include<bits/stdc++.h>
using namespace std;

vector<int> lianb;
vector<int> ans;

struct lian{
	int dat,nxt;
}a[100005];

void cz_huan(int k,int n){
	for(int i = 0;i < k;i++){
		ans.push_back(lianb[n + k - i - 1]);
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
	int gs = n / k;
	int tem_t = t;
	for(int i = 0;i < n;i++){
		lianb.push_back(tem_t);
		tem_t = a[tem_t].nxt;
	}
	for(int i = 0;i < gs;i++){
		cz_huan(k,k * i);
	}
	for(int i = gs * k;i < n;i++){
		ans.push_back(lianb[i]);
	}
	for(int i = 0;i < n - 1;i++){
		printf("%05d %d %05d\n",ans[i],a[ans[i]].dat,ans[i + 1]);
	}
	printf("%05d %d -1",ans[n - 1],a[ans[n - 1]].dat);

	return 0;
}

