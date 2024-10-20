#include<bits/stdc++.h>
using namespace std;

int a[128][128];
int n;
string s[1005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i];
		if(i != 0){
			int k = 0;
			while(s[i - 1][k] != s[i][k]){
				if(a[s[i - 1][k]][s[i][k]] == 1 || a[s[i][k]][s[i - 1][k]] == -1){
					cout << "Oh No" << endl;
					return 0;
				}else{
					a[s[i - 1][k]][s[i][k]] == -1;
					a[s[i][k]][s[i - 1][k]] == 1;
				}
				k ++;
			}
		}
	}
	cout << "Perfect" << endl;

	return 0;
}

