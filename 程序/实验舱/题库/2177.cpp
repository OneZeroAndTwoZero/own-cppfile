#include<bits/stdc++.h>
using namespace std;

int main(){
	int n[4];
	for(int i = 0;i < 4;i++){
		n[i] = (int)(getchar() - '0');
		n[i] = (n[i] + 9) % 10;
	}
	cout << "The encrypted number is ";
	swap(n[0],n[2]);
	swap(n[1],n[3]);
	for(int i = 0;i < 4;i++){
		cout << n[i];
	}

	return 0;
}

