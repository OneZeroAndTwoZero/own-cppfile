#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int n1,n2;
		char ys;
		cin >> n1 >> ys >> n2;
		if(ys == '+'){
			cout << n1 + n2 << endl;
		}else if(ys == '-'){
			cout << n1 - n2 << endl;
		}else if(ys == '*'){
			cout << n1 * n2 << endl;
		}else if(ys == '/'){
			cout << n1 / n2 << endl;
		}else{
			cout << n1 % n2 << endl;
		}
	}

	return 0;
}

