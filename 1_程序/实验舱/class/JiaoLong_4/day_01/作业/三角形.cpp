#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x,y;
};

dian a[1005];
double d[3] = {0};
int n,ans,check1,check2;

bool ok(int i,int j,int k){
	double s;
	d[0] = sqrt(pow(abs((double)a[i].x - a[j].x),2) + pow(abs((double)a[i].y - a[j].y),2));
	d[1] = sqrt(pow(abs((double)a[j].x - a[k].x),2) + pow(abs((double)a[j].y - a[k].y),2));
	d[2] = sqrt(pow(abs((double)a[k].x - a[i].x),2) + pow(abs((double)a[k].y - a[i].y),2));
	double p = (d[0] + d[1] + d[2]) / 2.0;
	if(abs(p - max({d[0],d[1],d[2]})) <= 1e-7) return 0;
	s = sqrt(p * (p - d[0]) * (p - d[1]) * (p - d[2]));
	if(s > 1e-7) return 1;
	return 0;
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

