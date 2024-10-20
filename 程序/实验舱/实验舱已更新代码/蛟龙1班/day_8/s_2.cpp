#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,R;
    cin >> L >> R;
    int g = 0;
    int s;
    for(int i = L;i <= R;i++){
    	int p = i;
    	while(p){
    		s = p%10;
    		if(s == 2){
    			g += 1;
			}
			p /= 10;
		}
	}
	cout << g << endl;
    
	return 0;
}
