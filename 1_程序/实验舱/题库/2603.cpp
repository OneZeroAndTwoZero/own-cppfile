#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		long long check;
		cin >> check;
		for(int i = 0;i < 501;i ++){
			if(check % 2 == 0) check /= 2;
			if(check % 3 == 0) check /= 3;
			if(check % 5 == 0) check /= 5;
		}
		if(check == 1){
			cout << "Regular Number" << endl;
		}else{
			cout << "Irregular Number" << endl;
		}
	}

	return 0;
}

