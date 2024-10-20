#include<bits/stdc++.h>
using namespace std;

int h(int a){
	int ans = 0;
	while(a){
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	if(n % 3 == 0){
		cout << "y " << h(n) << endl;
	}else{
		cout << "n " << n % 3 << endl; 
	}

	return 0;
}

