#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0},p[100005] = {0};
int pos = 0,n,s,t;

void shai(int f){
	for(int i = 2;i <= f;i++){
		if(!a[i]){
		    p[pos ++] = i;
			for(int j = i * i;j <= f;j += i){
				a[j] = 1;
			}	
		}
	}
}

int main(){
	shai(10005);
	scanf("%d",&n);
	for(int i = 0;i < pos;i++){
		s = n - p[i];
		for(int j = i;j < pos;j++){
			t = s - p[j];
			for(int k = j;k < pos;k++){
				if(p[k] == t){
					printf("%d %d %d\n",p[i],p[j],p[k]);
					return 0;
				}
			}
		}
	}

	return 0;
}

