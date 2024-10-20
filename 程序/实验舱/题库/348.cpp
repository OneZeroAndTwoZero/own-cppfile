#include<bits/stdc++.h>
using namespace std;

int c[3] = {0};

int main(){
	cin >> c[0] >> c[1] >> c[2];
	sort(c,c + 3);
	int cha = c[2] - c[1] - c[0] + 1;
	cha = max(cha,0);
	cout << cha << endl;

	return 0;
}

