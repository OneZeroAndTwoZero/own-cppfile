#include<bits/stdc++.h>
using namespace std;

int v1,v2,t,s,l;
int st = 0,sr = 0,tt = 0,tr = 0;

int main(){
    scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
    while(st < l && sr < l){
    	st += v2,sr += v1;
    	tt ++,tr ++;
	}
	if(st == sr){
		printf("D\n");
	}else if(st < sr){
		printf("T\n");
	}else{
		printf("R\n");
	}
	printf("%d\n",tt);

	return 0;
}

