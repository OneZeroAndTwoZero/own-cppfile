#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};
int cnt[1000005] = {0};
long long ans = 0;

void pai(int f,int l){
	if(f >= l) return;
	int mid = (f + l) / 2;
	pai(f,mid);
	pai(mid + 1,l);
	int t1 = f,t2 = mid + 1;
	int pos = 0;
	while(t1 <= mid || t2 <= l){
		if(t1 > mid || (t2 <= l && a[t2] < a[t1])){
			ans += max((mid - t1 + 1),0);
			cnt[pos++] = a[t2 ++];
		}else{
			cnt[pos++] = a[t1 ++];
		}
	}
	for(int i = 0;i < pos;i++){
		a[f + i] = cnt[i];
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	pai(0,n - 1);
	cout << ans << endl;

	return 0;
}

