#include<bits/stdc++.h>
using namespace std;

bool hui(int a){
	int tem = a,s = 0;
	while(tem){
		s = s * 10 + (tem % 10);
		tem /= 10;
	}
	if(s == a) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i <= n;i++){
		if(pow(ceil(sqrt(i)),2) == i && hui(i)){
			cout << i << endl;
		}
	}

	return 0;
}

