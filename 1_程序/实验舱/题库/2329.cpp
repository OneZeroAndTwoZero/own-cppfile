#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
	long long ans = 100000000000000000;
	long long tn = n;
	long long ta = a - tn;
	ta = max(ta,x);
	tn = tn - (a - ta);
	long long tb = b - tn;
	tb = max(tb,y);
	long long tem = ta * tb;
	ans = min(tem,ans);
	ta = a,tb = b;
	tn = n;
	tb = b - tn;
	tb = max(tb,y);
	tn -= b - tb;
	ta = a - tn;
	ta = max(ta,x);
	tem = ta * tb;
	ans = min(tem,ans);
	cout << ans << endl;

	return 0;
}

