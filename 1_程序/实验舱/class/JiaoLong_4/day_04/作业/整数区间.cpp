#include<bits/stdc++.h>
using namespace std;

struct qj{
	int s,e;
};

int n,ans;
int de;
qj a[100005];

bool cmp(qj k,qj b){
	return k.e < b.e;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].s,&a[i].e);
	}
	sort(a,a + n,cmp);
	ans = 1;
	de = a[0].e;
	for(int i = 1;i < n;i++){
		if(!(a[i].s <= de)){
			de = a[i].e;
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

