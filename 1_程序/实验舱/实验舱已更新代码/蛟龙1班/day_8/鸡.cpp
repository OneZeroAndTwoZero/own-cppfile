#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p = n;
    int c1 = ceil(n/5.0);
    int c2 = ceil(n/3.0);
    int jw = 0,jm = 0,jc = 0;
    for(int i = 1;i <= c1;i++){
    	n = p;
    	jw = i;
    	n -= 5*i;
    	for(int j = 1;j <= c2;j++){
    		n = p - 5*i;
    		jm = j;
    		n -= 3*j;
    		jc = n * 3;
    		if(jc > 0 && jw+jm+jc == p){
    			cout << jw << " " << jm << " " << jc << endl;
			}
		}
	}
    
	return 0;
}
