#include<bits/stdc++.h>
using namespace std;

bool sxh(int i){
	int j = i;
	int a[3];
	int x = 0; 
	while(j){
		a[x] = j % 10;
		j /= 10;
		x++;
    } 
	int ans = pow(a[0],3) + pow(a[1],3) + pow(a[2],3);
	if(ans == i){
		return 1;
	}
	return 0;
}

int main(){
	for(int i = 100;i < 1000;i++){
		if(sxh(i)){
			cout << i << endl;
		}
	}
	
	return 0;
}
