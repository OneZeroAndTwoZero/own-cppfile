#include<bits/stdc++.h>
using namespace std;

int L,R,g = 0,s;

int main(){
    cin >> L >> R;
    for(int i = L;i <= R;i++){
    	int p = i;
    	while(p){
    		s = p % 10;
    		if(s == 2){
    			g += 1;
			}
			p /= 10;
		}
	}
	cout << g << endl;
    
	return 0;
}
