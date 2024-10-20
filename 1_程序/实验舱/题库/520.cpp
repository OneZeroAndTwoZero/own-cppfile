#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a < 2 || (a % 2 == 0 && a != 2)) return 0;
	int n = sqrt(a);
	for(int i = 2;i <= n;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int N;
	cin >> N;
	for(int i = 1;i <= N;i++){
		if(N % i == 0 && su(i)){
			cout << i << " ";
		}
	}

	return 0;
}

