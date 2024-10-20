#include<bits/stdc++.h>
using namespace std;

int n,ans = 0,now = 0;
int a[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			int x1 = a[i],x2 = a[j],now = 2;
			for(int k = j + 1;k < n;k++){
				if(a[k] == x1 + x2){
					now ++,x1 = x2,x2 = a[k];
				}
			}
			ans = max(ans,now);
			now = 0;
		}
	}
	printf("%d\n",ans);

	return 0;
}

