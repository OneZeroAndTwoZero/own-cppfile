#include<bits/stdc++.h>
using namespace std;

bool r_y(int n){
	if(n % 4 != 0 || n % 3200 == 0 || (n % 100 == 0 && n % 400 != 0)) return 0;
	return 1;
}

int main(){
	int Y,N;
	cin >> Y >> N;
	int i = 0;
	while(1){
		if(r_y(Y)) i ++;
		if(i == N){
		    cout << Y << endl;
			return 0;
		}
		Y ++;
	}

	return 0;
}

