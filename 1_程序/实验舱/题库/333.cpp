#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin >> n;
	int max = -1,min = 101;
	for(int i = 1;i <= n;i++){
		cin >> a;
		if(a > max){
			max = a;
		}
		if(a < min){
			min = a;
		}
	}
	int cha = max - min;
	cout << cha << endl;

	return 0;
}

