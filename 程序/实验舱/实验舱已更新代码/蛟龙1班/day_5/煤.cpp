#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,day = 0;
    cin >> a >> b >> c >> d;
    while(a != b){
    	a -= c;
    	b += d;
    	day += 1;
	}
	cout << day << endl;
	
	return 0;
}
