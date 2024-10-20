#include<bits/stdc++.h>
using namespace std;

int m,n;

bool su(int a){
	if(a % 2 == 0 && a != 2){
		return 0;
	}
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int max_y(int a){
	int max = 1;
	for(int i = 1;i <= a;i++){
		if(su(i) && a % i == 0){
			max = i;
		}
	}
	return max;
} 

int main(){
	cin >> m >> n;
	for(int i = m;i <= n;i++){
		cout << max_y(i);
		if(i != n){
			cout << ",";
		}
	}

	return 0;
}

