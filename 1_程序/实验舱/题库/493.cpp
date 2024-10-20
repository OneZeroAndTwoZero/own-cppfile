#include<bits/stdc++.h>
using namespace std;

int main(){
	double c,sum = 0;
	cin >> c;
	int i = 2;
	while(1){
		double now = 1 / (double)i;
		sum += now;
		if(sum > c){
			cout << i - 1 << endl;
			return 0;
		}
		i++;
	}

	return 0;
}

