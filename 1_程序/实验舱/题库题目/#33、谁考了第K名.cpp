#include<bits/stdc++.h>
using namespace std;

struct stdu{
	int id,poi;
	bool operator < (const stdu &a)const{
		if(poi != a.poi)
			return poi > a.poi;
		return id < a.id;
	}
};

stdu a[1005];
int n,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d %d",&n,&k);
	k --;
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].id,&a[i].poi);
	}
	sort(a,a + n);
	printf("%d %d\n",a[k].id,a[k].poi);

	return 0;
}


