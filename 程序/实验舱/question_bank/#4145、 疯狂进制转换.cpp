#include<bits/stdc++.h>
#define turnint(x) ((x >= '0' && x <= '9') ? (x - '0') : (x - 'A' + 10))
#define turnchar(x) ((x < 10) ? (x + '0') : (x - 10 + 'A'))
using namespace std;

int T;
int a, c, e;
string b, d;

long long turnten(int x, string &s){
	long long res = 0;
	for (auto && i : s){
		res = res * x + turnint(i);
	}
	return res;
}

string turnother(int x, long long val){
	string res = "";
	while (val){
		res.push_back(turnchar(val % x));
		val /= x;
	}
	if (res == "") res = "0";
	reverse(res.begin(), res.end());
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	while (T --){
		cin >> a >> b >> c >> d >> e;
		cout << turnother(e, turnten(a, b) + turnten(c, d)) << "\n";
	}
	
	return 0;
}
