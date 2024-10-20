#include<bits/stdc++.h>
using namespace std;

int T;
int t,sx,sy,ex,ey,l;

int main(){
	scanf("%d",&T);
	while(T --){
		scanf("%d %d %d %d %d",&sx,&sy,&ex,&ey,&t);
		l = abs(sx - ex) + abs(sy - ey);
		if(l <= t && (t - l) % 2 == 0){
			puts("Y");
		}else{
			puts("N");
		}
	}

	return 0;
}

