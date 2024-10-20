#include<bits/stdc++.h>
using namespace std;

int main(){
	double N;
	double hui[12];
	cin >> N;
	double max = -1;
	for(int i = 0;i < 12;i++){
		cin >> hui[i];
		if(max < hui[i]) max = hui[i];
	}
	double q = N * max;
	printf("%.2lf",q);
	

	return 0;
}

