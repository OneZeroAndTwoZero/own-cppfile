#include<bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin >> s;
	int n = 1;
	double pd_num1 = 1,pd_num2 = 0;
	while(1){
		pd_num1 += 1.0 / (n+1);
		pd_num2 += 1.0 / n;
		if(pd_num1 > s && pd_num2 <= s){
			cout << n << endl;
			return 0;
		}
		n++;
	}
	
	return 0;
}
