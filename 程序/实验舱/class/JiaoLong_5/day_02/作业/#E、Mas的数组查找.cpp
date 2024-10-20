#include<bits/stdc++.h>
using namespace std;

struct dian{
	int data,past;
};

dian a[600005],ans[600005];
int pos = 0;
int n,m,t,d;

int find(int x){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(ans[mid].data == x) return ans[mid].past;
		if(ans[mid].data > x){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return -1;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].data);
		a[i].past = i + 1;
		if(i != 0 && a[i].data < a[i - 1].data){
			d = i;
		}
	}
	for(int i = d;i - d < n;i++){
		ans[pos ++] = a[i % n];
	}
	while(m --){
		scanf("%d",&t);
		printf("%d\n",find(t));
	}

	return 0;
}

