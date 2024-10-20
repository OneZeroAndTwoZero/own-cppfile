#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	long long min_g;
	cin >> n >> m;
	for(int i = n;;i += n){
		if(i % m == 0){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

