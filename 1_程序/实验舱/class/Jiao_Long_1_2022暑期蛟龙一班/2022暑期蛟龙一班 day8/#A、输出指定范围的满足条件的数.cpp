#include<bits/stdc++.h>
using namespace std;

int m,n,gs = 0;

int main(){
    cin >> m >> n;
    for(int i = m;i < n;i++){
    	if(i % 2 == 0 && i % 5 == 0){
    		printf("%-5ld",i);
    		gs += 1;
		}
		if(gs % 5 == 0 && gs != 0){
			cout << "\n";
			gs = 0;
		}
	}
	
	return 0;
}
