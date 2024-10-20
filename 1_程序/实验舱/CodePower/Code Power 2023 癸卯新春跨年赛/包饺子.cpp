#include<bits/stdc++.h>
using namespace std;

int n;
int x,y;
int max_,max_n;

int main(){
	scanf("%d",&n);
	max_ = -1,max_n = -1;
	while(n --){
		scanf("%d %d",&y,&x);
		if(y < 82){
			y = y + 2000;
		}else{
			y = y + 1900;
		}
		if(x > max_ || x == max_ && y > max_n){
			max_ = x;
			max_n = y;
			
		}
	}
	printf("%d\n%d\n",max_n,max_);

	return 0;
}

