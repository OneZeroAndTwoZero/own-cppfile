#include<bits/stdc++.h>
using namespace std;

bool a[10005] = {0};

int main(){
	string k,m = "",c;
	cin >> k >> c;
	for(int i = 0;i < c.size();i++){
		if(c[i] >= 'a' && c[i] <= 'z'){
			a[i] = 1;
			c[i] = (char)(c[i] - 32);
		}
	}
	for(int i = 0;i < k.size();i++){
		if(k[i] >= 'a' && k[i] <= 'z'){
			k[i] = (char)(k[i] - 32);
		}
	}
	for(int i = 0;i < c.size();i++){
		int now = c[i] - k[i % k.size()];
		if(now < 0){
			now += 26;
		}
		m = m + (char)(now + 'A');
	}
	for(int i = 0;i < m.size();i++){
		if(a[i]){
			m[i] = (char)(m[i] + 32);
		}
	}
	cout << m << endl;

	return 0;
}

