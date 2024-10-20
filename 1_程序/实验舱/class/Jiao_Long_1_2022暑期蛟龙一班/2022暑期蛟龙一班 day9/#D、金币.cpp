#include<bits/stdc++.h>
using namespace std;

int k,n = 1,gei_le = 0,sum = 0;

int main(){
	cin >> k;
	for(int i = 1;i <= k;i++){
		sum += n;
		gei_le += 1;
		if(gei_le >= n){
			n += 1;
			gei_le = 0;
		}
	}
	cout << sum << endl;
	
	return 0;
} 
