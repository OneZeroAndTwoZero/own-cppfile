#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	a = a + a;
	if(a.find(b,0) != a.npos){
		cout << a.find(b,0) << endl;
	}else{
		cout << "-1" << endl;
	}

	return 0;
}

