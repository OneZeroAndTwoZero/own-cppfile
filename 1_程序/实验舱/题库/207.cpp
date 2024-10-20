#include<bits/stdc++.h>
using namespace std;

int main(){
	int K,M;
	cin >> M >> K;
	int now_q = 0;
	int day = 0;
	while(M){
		day ++;
		M -= 1;
		now_q ++;
		if(now_q == K) now_q = 0,M ++;
	}
	cout << day << endl;

	return 0;
}

