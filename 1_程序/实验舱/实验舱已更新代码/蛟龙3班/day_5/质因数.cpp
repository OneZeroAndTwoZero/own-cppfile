#include<bits/stdc++.h>
using namespace std;

void qu(int n,int i){
	if(n == 1 || i > n) return;
	if(n % i == 0){
		cout << i << " ";
		qu(n / i,i);
	}else{
		qu(n,i + 1);
	}
}

int main(){
	int n;
	cin >> n;
	qu(n,2);

	return 0;
}

