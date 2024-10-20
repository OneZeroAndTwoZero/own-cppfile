#include<bits/stdc++.h>
using namespace std;

struct num{
	int z,id;
};

int n,max_;
num a[100005] = {0};
num cnt[100005] = {0};
int ans[100005] = {0};

void pai(int f,int l){
	if(f >= l) return;
	int mid = (f + l) / 2;
	pai(f,mid);
	pai(mid + 1,l);
	int t1 = f,t2 = mid + 1;
	int pos = 0;
	while(t1 <= mid || t2 <= l){
		if(t1 > mid || (t2 <= l && a[t2].z < a[t1].z)){
			ans[a[t2].id] += max((mid - t1 + 1),0);
			cnt[pos++].z = a[t2 ++].z;
			cnt[pos++].id = a[t2 ++].id;
		}else{
			cnt[pos++].z = a[t1 ++].z;
			cnt[pos++].id = a[t1 ++].id;
		}
	}
	for(int i = 0;i < pos;i++){
		a[f + i].z = cnt[i].z;
		a[f + i].id = cnt[i].id;
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].z);
		a[i].id = i;
	}
	pai(0,n - 1);
	max_ = -1;
	for(int i = 0;i < n;i++){
		cout << ans[i] << ";;;\n";
		max_ = max(max_,ans[i]);
	}
	printf("%d\n",max_);

	return 0;
}

