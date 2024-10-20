#include<bits/stdc++.h>
using namespace std;

void out(){
	cout << " /\\ " << endl;
	cout << "/__\\"; 
}

void san(int n,int k){
	if(n == 1){
	    out();
	}
	for(int i = 0;i < k;i++){
		cout << " ";
	}
	san(n - 1,k - 2);
	cout << endl;
	san(n - 1,k - 2);
	for(int i = 0;i < k;i++){
		cout << " ";
	}
	san(n - 1,k - 2);
} 

int main(){
	int n;
	cin >> n;
	san(n,2 * (n - 1));

	return 0;
}

