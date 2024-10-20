#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int b[100005] = {0};
int cnt[1000005] = {0};
long long ans = 0;
map<int,int> x;

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
	// x是个map，存储在a数组中某个数的下标 
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&b[i]);
		x[b[i]] = i + 1;
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		a[i] = x[a[i]];
	}
	pai(0,n - 1); //  归并排序找逆序对 
	cout << ans<< endl;

	return 0;
}

