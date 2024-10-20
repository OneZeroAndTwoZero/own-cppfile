#include<bits/stdc++.h>
using namespace std;

long long n;
int pos;

string check(long long a){
	if(a == 2) return "TRUE\n";
	if(a < 2 || !(a & 1)) return "FALSE\n";
	pos = sqrt(a);
	for(int i = 3;i <= pos;i += 2){
		if(!(a % i))
			return "FALSE\n";
	}
	return "TRUE\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	cin >> n;
	cout << check(n);

	return 0;
}
