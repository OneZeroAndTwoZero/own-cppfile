#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	cin >> N;
	int j = N % 5;
	if(j == 4 || j == 0){
		cout << "Drying";
	}else{
		cout << "Fishing";
	}
	cout << " in day " << N;

	return 0;
}

