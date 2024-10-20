#include<bits/stdc++.h>
using namespace std;

int main(){
	double m;
	cin >> m;
	m /= 100.0;
	double foot = m / 0.3048;
	double inch = (foot - floor(foot)) * 12;
    foot = floor(foot);
    cout << foot << " " << floor(inch) << endl;

	return 0;
}

