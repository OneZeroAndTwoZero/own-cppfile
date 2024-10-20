#include<bits/stdc++.h>
using namespace std;

int s[100001] = {0};

bool sushu(int a){
	if(a <= 1 || a % 2 == 0 && a != 2) return 0;
	int j = 0;
	while(s[j] != 0){
		if(a % s[j] == 0) return 0;
		j++;
	}
	s[j] = a;
	return 1;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i <= n;i++){
		if(sushu(i)) cout << i << " ";
	}

	return 0;
}


