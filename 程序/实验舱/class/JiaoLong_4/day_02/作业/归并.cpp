#include<bits/stdc++.h>
using namespace std;

struct peo{
	int tall,b;
};

int n,max_,max_n,s;
peo a[4][1000005];
int now[4] = {0};
int r[4] = {0};

int main(){
	scanf("%d",&n);
	s = n;
	for(int i = 0;i < n;i++){
		scanf("%d",&r[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < r[i];j ++){
			scanf("%d",&a[i][j].tall);
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < r[i];j ++){
			scanf("%d",&a[i][j].b);
		}
	}
	while(s){
		max_ = 1000000;
		for(int i = 0;i < n;i++){
			if(now[i] < r[i]){
				if(a[i][now[i]].tall < max_){
				    max_ = a[i][now[i]].tall;
				    max_n = i;
				}
			}
		}
		printf("%d ",a[max_n][now[max_n] ++].b);
		if(now[max_n] >= r[max_n]) s--;
	}

	return 0;
}

