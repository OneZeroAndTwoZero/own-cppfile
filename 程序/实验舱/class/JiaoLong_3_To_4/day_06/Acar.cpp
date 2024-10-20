#include<bits/stdc++.h>
using namespace std;

int main(){
	int s,a,b;
	cin >> s >> a >> b;
	double x = (double)(2 * s * a) / (double)(b + 3 * a);
	double time_ = x / a + (s - x) / b;
	printf("%.5lf",time_);

	return 0;
}

