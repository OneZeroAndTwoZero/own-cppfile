#include<bits/stdc++.h>
using namespace std;

int n,k,s,e;
int a[1005] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> k;
	s = pow(2,k - 1) - 1;
	e = min(n,s + s + 1);
	if(e <= s){
		cout << "EMPTY\n";
	}else{
		for(int i = s;i < e;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

