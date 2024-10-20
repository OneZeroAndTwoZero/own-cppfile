#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x1,x2,y1,y2;
};

int n,x,y,ans = -1;
dian a[10005];

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d %d %d %d",&a[i].x1,&a[i].x2,&a[i].y1,&a[i].y2);
		a[i].y1 += a[i].x1,a[i].y2 += a[i].x2;
	}
	scanf("%d %d",&x,&y);
	for(int i = 0;i < n;i ++){
		if(a[i].x1 <= x && a[i].x2 <= y && a[i].y1 >= x && a[i].y2 >= y) ans = i + 1;
	}
	printf("%d\n",ans);

	return 0;
}

