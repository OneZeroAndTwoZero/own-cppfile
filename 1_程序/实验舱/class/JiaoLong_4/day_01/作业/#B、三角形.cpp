#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x,y;
};

dian a[1005];
int n,ans,check1,check2;

bool ok(int i,int j,int k){
	if(!(a[i].y - a[j].y) || !(a[k].y - a[j].y)){
		if(!(a[i].y - a[j].y) && !(a[k].y - a[j].y)) return 0;
		return 1;
	}
	double x1,x2;
	x1 = (a[i].x - a[j].x) / (a[i].y - a[j].y);
	x2 = (a[k].x - a[j].x) / (a[k].y - a[j].y);
	return fabs(x1 - x2);
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			for(int k = j + 1;k < n;k++){
				if(ok(i,j,k)) ans ++;
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

