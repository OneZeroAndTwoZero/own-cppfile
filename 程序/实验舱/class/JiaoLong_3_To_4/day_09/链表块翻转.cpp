#include<bits/stdc++.h>
using namespace std;

struct lb{
	int dat,nxt;
}a[100005];

vector<int> lianb;
vector<int> ans;

void cz_t(int k,int n){
	for(int i = 0;i < k;i++){
		ans.push_back(lianb[i + n]);
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
	int xuyao = n / k;
	int js = xuyao * k;
	int tem_js = js;
	for(js = xuyao * k;js < n;js++){
		ans.push_back(lianb[js]);
	}
	for(int i = 0;i < xuyao;i++){
		js = tem_js;
		js -= k;
		tem_js = js;
		cz_t(k,js);
	}
	for(int i = 0;i < n - 1;i++){
		printf("%05d %d %05d\n",ans[i],a[ans[i]],ans[i + 1]);
	}
	printf("%05d %d -1\n",ans[n - 1],a[ans[n - 1]]);

	return 0;
}

