#include<bits/stdc++.h>
using namespace std;

int m,n,h,high = 0,day = 0;

int main(){
	cin >> m >> n >> h;
	while(1){
		high += m;
		day += 1;
		if(high >= h){
			break;
		}
		high -= n;
	}
	cout << day << endl;
	
	return 0;
}
