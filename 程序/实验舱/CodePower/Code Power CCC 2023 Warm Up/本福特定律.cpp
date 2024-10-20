#include<bits/stdc++.h>
using namespace std;

double a[10] = {0,30.1,17.6,12.5,9.7,7.9,6.7,5.8,5.1,4.6};
double ans = 0.0,check[10] = {0.0};
int n,num[10] = {0};
string t;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> t;
	    num[t[0] - '0'] ++;
	}
	for(int i = 1;i <= 9;i ++) check[i] = (double)num[i] / n;
	for(int i = 1;i <= 9;i++){
		ans += (check[i] - (a[i] / 100.0)) * (check[i] - (a[i] / 100.0));
	}
	ans = sqrt(ans / 9);
	ans *= 100.0;
	printf("%.3lf\n",ans);
	if(ans < 0.8){
		puts("Yes");
	}else{
		puts("No");
	}

	return 0;
}

