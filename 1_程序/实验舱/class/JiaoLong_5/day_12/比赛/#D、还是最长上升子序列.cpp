#include<bits/stdc++.h>
using namespace std;

vector<int> out,dian,zhao;
int n,cnt = 0,ans1 = 0,ans2 = 0;
long long a[200005] = {0},tem[200005] = {0};
int xb[200005] = {0};
bool ok[200005] = {0};

bool check(int i,int k){
	if(k != 0 && a[i] < tem[k - 1]) return 0;
	if(k != cnt && a[i] > tem[k + 1]) return 0;
	return 1;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%lld",&a[i]);
	}
	for(int i = 0;i < n;i ++){
		int pos = lower_bound(tem,tem + cnt,a[i]) - tem;
		if(pos == cnt){
			tem[pos] = a[i];
			cnt ++;
		}else{
			dian.push_back(pos);
			out.push_back(cnt);
			zhao.push_back(xb[pos]);
			tem[pos] = a[i];
			xb[pos] = i;
		}
	}
	ans1 = cnt;
	for(int i = 0;i < out.size();i ++){
		if(out[i] == cnt || check(zhao[i],dian[i])){
			ans1 ++;
			ok[dian[i]] = 1;
		}
	}
	for(int i = 0;i < cnt;i++){
		if(!ok[i]) ans2 ++;
	}
	printf("%d %d %d\n",cnt,ans1,ans2);

	return 0;
}

