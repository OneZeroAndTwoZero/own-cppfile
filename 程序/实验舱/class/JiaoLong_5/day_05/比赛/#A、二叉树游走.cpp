#include<bits/stdc++.h>
using namespace std;

int n,pos = 0;
long long x;
string s;
char a[1000005];

int main(){
	cin >> n >> x;
	cin >> s;
	for(int i = 0;i < n;i++){
		if(s[i] == 'U'){
			if(pos > 0 && a[pos - 1] != 'U'){
				a[-- pos] = ' ';
			}else{
				a[pos ++] = 'U';
			}
		}else if(s[i] == 'L'){
			a[pos ++] = 'L';
		}else if(s[i] == 'R'){
			a[pos ++] = 'R';
		}
	}
	for(int i = 0;i < pos;i++){
		if(a[i] == 'U'){
			x /= 2;
		}else if(a[i] == 'L'){
			x *= 2;
		}else if(a[i] == 'R'){
			x = x * 2 + 1;
		}
	}
	cout << x << endl;

	return 0;
}

