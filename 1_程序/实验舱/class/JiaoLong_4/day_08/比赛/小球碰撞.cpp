#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[200005] = {0};
bool ok[200005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	ans = n;
	for(int i = 0;i < n;i ++){
		if(!ok[i]){
			if(a[i] > 0){
				for(int j = i;j < n;j++){
					if(!ok[j] && a[j] < n){
						if(abs(a[j]) < a[i]){
							ok[j] = 1;
							ans --;
						}else if(abs(a[j]) == a[i]){
							ok[i] = 1,ok[j] = 1;
							ans -= 2;
							break;
						}
					}
				}
			}else{
				for(int j = i - 1;j >= 0;j--){
					if(!ok[j] && a[j] < n){
						if(a[j] < abs(a[i])){
							ok[j] = 1;
							ans --;
						}else if(a[j] == abs(a[i])){
							ok[i] = 1,ok[j] = 1;
							ans -= 2;
							break;
						}
					}
				}
			}
		}
	}
	printf("%d\n",ans);
	for(int i = 0;i < n;i++){
		if(!ok[i]) printf("%d ",i + 1);
	}

	return 0;
}

