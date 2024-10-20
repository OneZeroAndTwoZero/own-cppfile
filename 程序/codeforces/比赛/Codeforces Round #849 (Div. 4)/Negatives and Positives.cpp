#include<bits/stdc++.h>
using namespace std;

int t,n,num,min_;
int a[300005] = {0};
bool z = 0;
long long sum = 0;

int main(){
	scanf("%d",&t);
	while(t --){
		sum = 0,num = 0,min_ = 100000000,z = 0;
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
			if(a[i] == 0){
				z = 1;
			}
		}
		for(int i = 0;i < n;i++){
			sum += abs(a[i]);
			if(a[i] < 0) num ++;
			if(abs(a[i]) < min_) min_ = abs(a[i]);
		}
		if(!z && (num & 1)){
			sum -= 2 * min_;
		}
		printf("%lld\n",sum);
	}

	return 0;
}

