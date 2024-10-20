#include<bits/stdc++.h>
using namespace std;

int n;
string a,b,c,d;

string ok(){
	if(a[0] != b[0] || a[0] != 'y') return "No";
	if(c != "ding") return "No";
	if(d != "zhen") return "No";
	return "Yes";
} 

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	cin >> n;
	for(int i = 0;i < n;i ++){
		cin >> a >> b >> c >> d;
		cout << ok() << endl;
	}

	return 0;
}

