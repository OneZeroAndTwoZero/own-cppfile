#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1;i <= 9;i++){
    	for(int j = 1;j <= i;j++){
    		printf("%-3d*%-3d=%-3d",i,j,i*j);
		}
		cout << "\n";
	}
	
	return 0;
}
