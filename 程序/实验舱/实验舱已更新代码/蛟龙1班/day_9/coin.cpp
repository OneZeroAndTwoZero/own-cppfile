#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	int n =1;
	int gei_le = 0;
	int sum = 0;
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
