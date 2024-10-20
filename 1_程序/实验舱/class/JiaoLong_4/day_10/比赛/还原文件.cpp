#include<bits/stdc++.h>
using namespace std;

int n,m,sum = 0,d = 0;
int a[100005] = {0};
bool ok[105] = {0};
int num[1000] = {0};
int k[105][100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i = 0;i < m;i++){
		scanf("%d",&num[i]);
		for(int j = 0;j < num[i];j ++){
			scanf("%d",&k[i][j]);
		}
	}
	while(sum < m){
		for(int i = 0;i < m;i++){
			if(ok[i] == 0){
				bool pd = 0;
				for(int j = 0;j < num[i];j++){
					if(k[i][j] != a[d + j]){
						pd = 1;
						break;
					}
				}
				if(!pd){
					printf("%d ",i + 1);
					ok[i] = 1;
					sum ++;
					d = d + num[i] - 1;
			    }
			}
		}
	}
	puts("");

	return 0;
}

