#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0,t;
int c1 = 0,c2 = 0,t1,t2;

int main(){
	scanf("%d %d",&n,&m);
	for(int i = n;i <= m;i++){
		t = i,t1 = 0,t2 = 0;
		while(t){
			t1 += (t & 1);
			t2 += !(t & 1);
			t >>= 1;
		}
		if(t1 > t2) c1 ++;
		else c2 ++;
	}
	printf("%d %d\n",c1,c2);

	return 0;
}

