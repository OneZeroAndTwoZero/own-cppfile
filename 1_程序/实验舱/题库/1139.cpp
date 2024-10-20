#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	while(cin >> a >> b){
		if(a == 0 &&b == 0) return 0;
		if(b > a) swap(a,b);
		int check = a / b;
		if(check >= 2){
			cout << "win" <<endl;
		}else{
			cout << "lose" << endl;
		}
	}

	return 0;
}

