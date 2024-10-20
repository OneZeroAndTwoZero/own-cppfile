#include<bits/stdc++.h>
using namespace std;

int t;
char a[1005],b[1005];
bool p = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&t);
	while(t --){
		scanf("%s %s",&a,&b);
		p = 0;
		if(strlen(a) < strlen(b)) swap(a,b);
		for(int i = strlen(b) - 1;i >= 0;i --){
			int c1 = a[i + strlen(a) - strlen(b)] - '0',c2 = b[i] - '0';
			if(c1 + c2 >= 10){
				printf("Hard\n");
				p = 1;
				break;
			}
		}
		if(!p) printf("Easy\n");
	}

	return 0;
}

