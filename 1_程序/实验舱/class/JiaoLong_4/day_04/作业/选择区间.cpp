#include<bits/stdc++.h>
using namespace std;

struct qj{
	int x,y;
};

int m,ans;
int de;
qj a[100005];

bool cmp(qj k,qj b){
	return k.y < b.y;
}

int main(){
	scanf("%d",&m);
	for(int i = 0;i < m;i++){
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	sort(a,a + m,cmp);
	ans = 1;
	de = a[0].y;
	for(int i = 1;i < m;i++){
		if(a[i].x > de){
			ans ++;
			de = a[i].y;
		}
	}
	printf("%d\n",ans);

	return 0;
}

