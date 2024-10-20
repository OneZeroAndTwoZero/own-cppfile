#include<bits/stdc++.h>
using namespace std;

bool n[10] = {1,1,1,1,1,1,1,1,1,1};

int main(){
	string a,b;
	cin >> a >> b;
	for(int i = 0;i < b.size();i++){
		n[b[i] - '0'] = 0;
	}
	for(int i = 0;i < a.size();i++){
		if(n[a[i] - '0']){
			cout << a[i];
		}
	}
	cout << endl;

	return 0;
}

