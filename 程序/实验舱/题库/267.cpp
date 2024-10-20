#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,H;
	cin >> n >> H;
	long long sum = 0;
	int a;
	for(int i = 1;i <= n;i++){
		cin >> a;
		sum += a;
	}
	int zs = ceil((double)sum / (double)H);
	cout << zs << endl;

	return 0;
}

