#include<bits/stdc++.h>
using namespace std;

int N;
int a[3];

int main(){
	cin >> N;
	for(int i =1;i <= N;i++){
		cin >> a[0] >> a[1] >> a[2];
		if((a[0] + a[1] <= a[2]) || (a[0] + a[2] <= a[1]) || (a[1] + a[2] <= a[0])){
			cout << "no" << endl;
			continue;
		}else{
			double p = (double)(a[0] + a[1] + a[2]) / 2;
			double S = sqrt(p * (double)(p - a[0]) * (double)(p - a[1]) * (p - a[2]));
            printf("%.2lf\n",S);
		}
	}
	
	return 0;
}
