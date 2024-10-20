#include<bits/stdc++.h>
using namespace std;

int main(){
    int w1,w2,w3;
    for(int i = 100;i <= 999;i++){
    	w1 = i%10;
    	w2 = i/10%10;
    	w3 = i/100%10;
    	if(pow(w1,3)+pow(w2,3)+pow(w3,3) == i){
    		cout << i << endl;
		}
	}
	
	return 0;
}
