#include<bits/stdc++.h>
using namespace std;

int a,b;
bool r = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d %d",&a,&b);
	if(a == 0 && b == 0){
		r = 1;
	}else if(abs(a) == abs(b) && a != b){
		r = 1;
	}
	if(r) puts("yes");
	else printf("%d %d\n",a,b);
	
	return 0;
}
