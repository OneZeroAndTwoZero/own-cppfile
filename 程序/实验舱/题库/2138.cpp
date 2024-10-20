#include<bits/stdc++.h>
using namespace std;

int a[9] = {0};
map<string,int> c;

int main(){
	c["XXXS"] = 0,c["XXS"] = 1,c["XS"] = 2,c["S"] = 3,c["M"] = 4,c["L"] = 5,c["XL"] = 6,c["XXL"] = 7,c["XXXL"] = 8;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		a[c[s]] ++;
	}
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		a[c[s]] --;
	}
	int cha = 0;
	for(int i = 0;i < 9;i++){
		cha += abs(a[i]);
	}
	cout << cha / 2 << endl;

	return 0;
}

