#include<bits/stdc++.h>
using namespace std;

struct node{
	int id,t;
	bool operator < (const node &a) const{
		return t < a.t;
	}
};

int n;
node a[100005];
double ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i].t);
		a[i].id = i + 1;
	}
	sort(a,a + n);
	for(int i = 0;i < n;i ++){
		printf("%d ",a[i].id);
		ans += a[i].t * (n - i - 1);
	}
	ans /= n;
	printf("\n%.2lf\n",ans);

	return 0;
}

