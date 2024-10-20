#include<bits/stdc++.h>
using namespace std;

int main(){
	int j;
	cin >> j;
	if(j % 2 == 1 || j < 0){
		cout << "0 0" << endl;
		return 0;
	}
	int min = 0;
	min += (j - j % 4) / 4;
	if(min * 4 != j) min ++;
	cout << min << " ";
	int max = 0;
	max += j / 2;
	cout << max << endl;

	return 0;
}

