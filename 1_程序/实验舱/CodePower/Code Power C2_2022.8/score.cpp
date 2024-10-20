#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int s[n],sum = 0;
	for(int i = 0;i < n;i++){
		cin >> s[i];
		sum += s[i];
	}
	double avg = (double)sum / n;
	printf("%.1lf\n",avg);
	for(int i = 0;i < n;i++){
		if(s[i] < avg){
			cout << i + 1 << " ";
		}
	}
	

	return 0;
}

