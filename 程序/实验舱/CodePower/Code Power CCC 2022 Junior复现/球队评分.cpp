#include<bits/stdc++.h>
using namespace std;

int n,ans,t,c1,c2;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&c1,&c2);
		if(c1 * 5 - c2 * 3 > 40){
			ans ++;
		}
	}
	printf("%d%c\n",ans," +"[ans == n]);

	return 0;
}

