#include<bits/stdc++.h>
using namespace std;

int L,R,p,a;
bool t;

int main(){
    cin >> L >> R;
    for(int i = L;i <= R;i++){
    	p = i;
    	t = 1;
    	while(p){
    		a = p % 10;
    		if(a == 0){
    			t = 0;
    			break;
			}
			p /= 10;
		}
		p = i;
		while(p && t){
    		int a = p % 10;
    		if(i % a != 0){
    			t = 0;
    			break;
			}
			p /= 10;
		}
		if(t) cout << i << " ";
	}
	
	return 0;
}
