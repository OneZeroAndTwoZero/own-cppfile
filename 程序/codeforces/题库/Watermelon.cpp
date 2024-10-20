#include<bits/stdc++.h>
using namespace std;

int w;

int main(){
	scanf("%d",&w);
	if(w > 2 && !(w & 1)){
		puts("YES");
	}else{
		puts("NO");
	}

	return 0;
}

