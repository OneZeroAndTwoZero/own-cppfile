#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1;i*5 < n;i++){
		for(int j = 1;j*3 < n;j++){
			for(int k = 3;k < n*3;k+=3){
				if(i + j + k == n && 5 * i + 3 * j + k / 3.0 == n){
				    cout << i << " " << j << " " << k << endl;
			    }
			}
		}
	}
} 
