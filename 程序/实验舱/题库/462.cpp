#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long tem,max = -1145141;
	cin >> n;
	while(n --){
		cin >> tem;
		if(tem >= max){
			max = tem;
		}
	}
	cout << max << endl;

	return 0;
}

