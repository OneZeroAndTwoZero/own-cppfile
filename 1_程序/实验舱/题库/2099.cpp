#include<bits/stdc++.h>
using namespace std;

int one(int a){
	int gs = 0;
	while(a){
		if(a % 2 == 1) gs ++;
		a /= 2;
	}
	return gs;
}

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cout << one(i) << " ";
	}
	cout << endl;

	return 0;
}

