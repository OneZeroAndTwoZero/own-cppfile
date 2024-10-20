#include<bits/stdc++.h>
using namespace std;

int n,h,sum = 0;

int main(){
	cin >> n >> h;
	for(int i = 0;i < n;i++){
	    int high,weight;
	    cin >> high >> weight;
		if(high <= h){
			sum += weight;
		}
	}
	cout << sum << endl;
	
	return 0;
}
