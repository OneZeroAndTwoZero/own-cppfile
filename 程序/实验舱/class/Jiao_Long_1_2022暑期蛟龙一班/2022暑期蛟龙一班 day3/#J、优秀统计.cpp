#include<bits/stdc++.h>
using namespace std;

int a,b,c,y = 0;

int main(){
	cin >> a >> b >> c;
    if(a >= 90){
    	y = y + 1;
	}
	if(b >= 90){
		y = y + 1;
	}
	if(c >= 90){
		y = y + 1;
	}
	cout << y << endl;
	
	return 0;
} 
