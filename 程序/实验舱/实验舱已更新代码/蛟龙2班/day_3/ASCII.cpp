#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	int a[T];
	char ch[T];
	for(int i = 0;i < T;i++){
		cin >> a[i];
		ch[i] = (char)a[i];
		cout << ch[i];
	}
	
	return 0;
}
