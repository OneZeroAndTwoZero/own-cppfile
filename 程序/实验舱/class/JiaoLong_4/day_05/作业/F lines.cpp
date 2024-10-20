#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	while(cin >> n){
		if(n % 8 == 2 || n % 8 == 6){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}

	return 0;
}

