#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000006] = {0};
map<int,int> zhao;
int x,y;

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d %d",&x,&y);
		if(x == 1){
			a[zhao[y]] --;
			zhao[y] ++;
			a[zhao[y]] ++;
		}else if(x == 2){
			printf("%d\n",a[y]);
		}
	}

	return 0;
}

