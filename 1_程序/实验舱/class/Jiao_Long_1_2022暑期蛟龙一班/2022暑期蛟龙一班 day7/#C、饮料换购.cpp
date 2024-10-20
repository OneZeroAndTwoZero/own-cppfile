#include<bits/stdc++.h>
using namespace std;
int n,g,d;
int main(){
    cin >> n;
    g = n;
    while(1){
    	d = n / 3;
    	n += d;
    	g += d;
    	n = n - d * 3;
    	if(n / 3 == 0){
    		break;
		}
	}
	cout << g << endl;
	
	return 0;
}
