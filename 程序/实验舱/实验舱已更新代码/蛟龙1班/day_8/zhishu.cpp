#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    for(int i = n;i <= m;i++){
    	bool y = 0;
        for(int j = 2;j <= sqrt(i);j++){
    	    if(i % j == 0){
    		    y = 1;
		    }
	    }
	    if(i == 1){
			y = 1;
		}
		if(y == 0){
			cout << i << " ";
		}
	}
	
	return 0;
}
