#include<bits/stdc++.h>
using namespace std;

int h1,h2,m1,m2,s1,s2;
int cha_h,cha_m,cha_s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	
	scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
	cha_h = (h1 - h2 + 12) % 12;
	cha_m = ((m1 - m2) + 60 * cha_h + 12 * 60) % (12 * 60);
	cha_s = ((s1 - s2) + 60 * cha_m + 12 * 60 * 60) % (12 * 60 * 60);
	printf("%d\n",cha_s);

	return 0;
}
