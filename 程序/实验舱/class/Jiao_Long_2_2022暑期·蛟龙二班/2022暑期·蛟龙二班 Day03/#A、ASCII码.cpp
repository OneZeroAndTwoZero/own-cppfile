#include<bits/stdc++.h>
using namespace std;

int T;
int a[10005];
char ch[10005];

int main(){
	cin >> T;
	for(int i = 0;i < T;i++){
		cin >> a[i];
		ch[i] = (char)a[i];
		cout << ch[i];
	}
	
	return 0;
}
