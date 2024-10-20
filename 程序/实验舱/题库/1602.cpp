#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int jd = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(j < jd){
				cout << (char)(jd - j + 'A');
			}
			if(j == jd){
				cout << 'A';
			}
			if(j > jd){
				cout << (char)(j - jd + 'A');
			}
		}
		cout << endl;
		jd ++;
	}

	return 0;
}

