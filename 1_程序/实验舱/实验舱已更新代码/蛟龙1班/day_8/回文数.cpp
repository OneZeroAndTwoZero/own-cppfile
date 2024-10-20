#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int g = 0;
    for(int i = n;i <= m;i++){
    	int p = i;
    	int s = 0;
    	while(p){
    		s = s*10 + p % 10;
    		p /= 10;
		}
		if(s == i){
			g += 1;
		}
	}
	cout << g << endl;
    
	return 0;
}
