#include<bits/stdc++.h>
using namespace std;

int n;
int a[105] = {0};
int check[105] = {0};

int main(){
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = n;i >= 1;i--){
		if(i + a[i] >= n){
			check[i] = 1;
		}else{
			for(int j = i + 1;j - i <= a[i] && j <= n;j++){
				if(check[j] == 1){
					check[i] = 1;
					break;
				}
			}
		}
	}
	if(check[1]){
		cout << "Perfect\n";
	}else{
		cout << "Oh, No\n";
	}

	return 0;
}

