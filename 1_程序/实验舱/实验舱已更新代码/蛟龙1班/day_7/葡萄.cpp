#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin >> n >> h;
	int sum = 0;
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
