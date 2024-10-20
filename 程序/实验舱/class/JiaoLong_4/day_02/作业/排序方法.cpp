#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int check[1005] = {0};
int cnt[1005] = {0};
bool r;
int n;

bool dui(int n){
	for(int i = 0;i < n;i++){
		if(a[i] != check[i]) return 0;
	}
	return 1;
}

void pai(int f,int l,n){
	if(f >= l) return;
	int mid = (f + l) / 2;
	pai(f,mid,n);
	pai(mid + 1,l,n);
	int t1 = f,t2 = mid + 1;
	int pos = 0;
	while(t1 <= mid || t2 <= l){
		if(t1 > mid || (t2 <= l && a[t2] < a[t1])){
			cnt[pos++] = a[t2 ++];
		}else{
			cnt[pos++] = a[t1 ++];
		}
	}
	for(int i = 0;i < pos;i++){
		a[f + i] = cnt[i];
	}
	if(dui(n)) r = 1;
}

int main(){
	scanf("%d",&n);
	r = 0;
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&check[i]);
	}
	pai(0,n - 1,n);
	if(r)

	return 0;
}

