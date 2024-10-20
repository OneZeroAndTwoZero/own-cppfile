#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		bool p = 0;
		int max_n = 100000;
		for(int i = 1;i * i < n;i++){
			for(int j = i;;j++){
				if(i * i + j * j + i * j == n){
					if(!p){
						p = 1;
						cout << "YES" << endl;
					}
					cout << i << " " << j << endl;
					break;
				}else if(i * i + j * j + i * j > n){
					max_n = min(max_n,(i * i + j * j + i * j));
					break;
				}
			}
		}
		if(!p){
			cout << "NO " << max_n << endl;
			n = max_n;
			for(int i = 1;i * i <= n;i++){
				for(int j = i;;j++){
					if(i * i + j * j + i * j == n){
						cout << i << " " << j << endl;
						break;
					}else if(i * i + j * j + i * j > n){
						break;
					}
				}
			}
		}
	}

	return 0;
}

