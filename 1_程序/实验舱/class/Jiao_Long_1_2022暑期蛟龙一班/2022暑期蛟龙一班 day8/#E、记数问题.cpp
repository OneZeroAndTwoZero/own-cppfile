#include<bits/stdc++.h>
using namespace std;

int n,x,g = 0,w,p;

int main(){
    cin >> n >> x;
    for(int i = 1;i <= n;i++){
    	p = i;
    	while(p){
    		w = p%10;
    		if(w == x){
    			g += 1;
			}
			p /= 10;
		}
	}
	cout << g << endl;
    
	return 0;
}
