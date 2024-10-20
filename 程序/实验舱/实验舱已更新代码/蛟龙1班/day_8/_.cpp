#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,R,a,p;
    cin >> L >> R;
    bool r;
    for(int i = L;i <= R;i++){
    	r = 1;
    	p = i;
    	while(p){
    		a = p % 10;
    		if(i % a != 0 || a == 0){
    			r = 0;
    			break;
			}
			p /= 10;
			break;
		}
		if(r){
			cout << i << " ";
		}
	}
	
	return 0;
}
