#include<bits/stdc++.h>
using namespace std;

int n,m;
bool y;

int main(){
    cin >> n >> m;
    for(int i = n;i <= m;i++){
    	y = 0;
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
