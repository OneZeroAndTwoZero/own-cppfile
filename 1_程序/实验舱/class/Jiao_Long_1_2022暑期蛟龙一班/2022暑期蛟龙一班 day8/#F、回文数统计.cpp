#include<bits/stdc++.h>
using namespace std;

int n,m,g = 0;

int main(){
    cin >> n >> m;
    for(int i = n;i <= m;i++){
    	int p = i;
    	int s = 0;
    	while(p){
    		s = s * 10 + p % 10;
    		p /= 10;
		}
		if(s == i){
			g += 1;
		}
	}
	cout << g << endl;
    
	return 0;
}
