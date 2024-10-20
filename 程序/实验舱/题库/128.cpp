#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double max = -1,min = 100;
	cin >> n;
	double f[n];
	for(int i = 0;i < n;i++){
		cin >> f[i];
		if(f[i] > max) max = f[i];
		if(f[i] < min) min = f[i];
	}
	double sum = 0;
	bool max_o = 1,min_o = 1;
	for(int i = 0;i < n;i++){
		if(f[i] == max && max_o){
			max_o = 0;
			continue;
		}
		if(f[i] == min && min_o){
			min_o = 0;
			continue;
		}
		sum += f[i];
	}
	sum /= (n - 2);
	printf("%.2lf",sum);

	return 0;
}

