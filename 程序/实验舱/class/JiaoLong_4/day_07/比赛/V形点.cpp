#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};

int n;
long long ans = 0;
dian a[10005];

int d(int i,int j){
	return pow((a[i].x - a[j].x),2) + pow((a[i].y - a[j].y),2);
}

bool r(int i,int j,int k){
	int c1 = d(i,j);
	int c2 = d(j,k);
	int c3 = d(i,k);
	if(c1 == c2 || c1 == c3 || c2 == c3) return 1;
	return 0;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].x);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].y);
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			for(int k = j + 1;k < n;k++){
				if(r(i,j,k)) ans ++;
			}
		}
	}
	printf("%lld\n",ans);

	return 0;
}

