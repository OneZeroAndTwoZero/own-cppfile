#include<bits/stdc++.h>
using namespace std;

int main(){
	double z[7] = {479,379,461,393,284,328,508};
	int s,d;
	cin >> s >> d;
	double sum = 0;
	if(s < 1 || s > 7){
		cout << "error" << endl;
		return 0;
	}
	if(s == 7) s = 0;
	for(int i = 0;i < d;i++){
		double d_q = 0.5;
		if(s == 6 || s == 0) d_q *= 3;
		sum += d_q * z[s];
		s = (s + 1) % 7; 
	}
	printf("%.2lf",sum);

	return 0;
}

