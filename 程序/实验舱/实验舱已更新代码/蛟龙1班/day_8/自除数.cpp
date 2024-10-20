#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,R;
    cin >> L >> R;
    for(int i = L;i <= R;i++){
    	int p = i;
    	while(p){
    		int a = p % 10;
    		if(a == 0){
    			break;
			}
			p /= 10;
		}
		p = i;
		while(p){
    		int a = p % 10;
    		if(i % a != 0){
    			break;
			}
			p /= 10;
		}
		cout << i << " ";
	}
	
	return 0;
}
