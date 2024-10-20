#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,h;
	cin >> m >> n >> h;
	int high = 0;
	int day = 0;
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
