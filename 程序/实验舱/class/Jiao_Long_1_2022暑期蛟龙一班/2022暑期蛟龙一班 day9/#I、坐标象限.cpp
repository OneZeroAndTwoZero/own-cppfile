#include<bits/stdc++.h>
using namespace std;

int n,x,y;

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> x >> y;
		if(x > 0 && y > 0){
			cout << 1 << endl;
		}else if(x < 0 && y > 0){
			cout << 2 << endl;
		}else if(x < 0 && y < 0){
			cout << 3 << endl;
		}else{
			cout << 4 << endl;
		}
	}
	
	return 0;
} 
