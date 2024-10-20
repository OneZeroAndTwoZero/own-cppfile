#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int g = 0;
    int w;
    int p;
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
