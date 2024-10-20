#include<bits/stdc++.h>
using namespace std;

int main(){
	double n;
	cin >> n;
	int j1,j2,j3,s1,s2,s3;
	cin >> s1 >> j1 >> s2 >> j2 >> s3 >> j3;
	int q1,q2,q3;
	q1 = (ceil)(n / s1) * j1;
	q2 = (ceil)(n / s2) * j2;
	q3 = (ceil)(n / s3) * j3;
	cout << min({q1,q2,q3}) << endl;

	return 0;
}

