#include<bits/stdc++.h>
using namespace std;

void cz(int num,int k){
	if(!num){
		return;
	}
	int w = num % k;
	cz(num / k,k);
	if(w < 10) cout << w;
	else cout << (char)(97 + w - 10);
}

int main(){
	char k;
	int num;
	cin >> k >> num;
	if(k != 'O' && k != 'D' && k != 'X'){
		cout << "MAS" << endl;
		return 0;
	}
	if(k == 'O'){
		cz(num,8);
	}else if(k == 'X'){
		cz(num,16);
	}else{
		cout << num << endl;
	}

	return 0;
}

