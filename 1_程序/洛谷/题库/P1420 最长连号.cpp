#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005] = {0};
int now = 0,ans = 0;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		if(i != 0 && a[i] == a[i - 1] + 1){
			now ++;
			ans = max(ans,now + 1);
		}else{
			now = 0;
		}
	}
	printf("%d\n",ans);

	return 0;
}

