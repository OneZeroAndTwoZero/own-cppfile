#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		int sum = 0;
		int x,y;
		cin >> x >> y;
		for(int j = x;j <= y;j++){
			bool p1 = 0;
			bool p2 = 1;
    	    int p = j;
    	    int s = 0;
    	    while(p){
    		    s = s*10 + p % 10;
    		    p /= 10;
		    }
		    if(s == j){
			    p1 = 1;
		    }
		    if(j < 2){
		    	p2 = 0;
			}
		    for(int k = 2;k*k <= j;k++){
		    	if(j % k == 0){
		    		p2 = 0;
		    		break;
				}
			}
			if(p1 && p2){
				sum += 1;
			}
	    }
	    cout << sum << endl;
	} 
	
	return 0;
} 
