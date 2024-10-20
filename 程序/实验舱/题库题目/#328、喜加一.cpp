#include<bits/stdc++.h>
using namespace std;

string s;
int a[100005] = {0},k = 100003;

int main(){
	cin >> s;
	for(int i = s.size() - 1;i >= 0;i--){
		a[s.size() - i - 1] = s[i] - '0';
	}
	a[0] ++;
	for(int i = 0;i <= s.size();i++){
		a[i + 1] += a[i] / 10;
		a[i] %= 10; 
	}
	while(!a[k]){
		k --;
	}
	for(int i = k;i >= 0;i--){
		cout << a[i];
	}
	cout << endl;

	return 0;
}

