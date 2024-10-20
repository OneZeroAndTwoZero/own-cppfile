#include<bits/stdc++.h>
using namespace std;

int n,now = 0,ans = 1;
int a[1000005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i < n;i ++){
		if(a[i] > a[i - 1]){
			now ++;
			ans = max(ans,now + 1);
		}else{
			now = 0;
		}
	}
	printf("%d\n",ans);

	return 0;
}

