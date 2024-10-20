#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0},c[100005] = {0},d[100005] = {0},sum[100005] = {0};
int n,l,r;
long long ans = 0;

long long qu(){
	long long num1 = sum[r] - sum[l - 1];
	long long num2 = sum[l] - sum[0] + sum[n] - sum[r - 1];
	return min(num1,num2);
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		d[i] = a[i] - a[i - 1];
	}
	for(int i = 1;i <= n;i++){
		scanf("%d",&c[i]);
		sum[i] = c[i] + sum[i - 1];
	}
	l = 2,r = n;
	while(l < r){
		while(d[l] == 0){
			l ++;
		}
		while(d[r] == 0){
			r --;
		}
		
	}

	return 0;
}

