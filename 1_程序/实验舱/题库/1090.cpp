#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n,sum;
	cin >> n >> sum;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int f = 0,l = n - 1;
	while(f < l){
		if(a[f] + a[l] == sum){
			cout << f << " " <<l << endl;
			return 0;
		}else if(a[f] + a[l] < sum){
			f ++;
		}else{
			l --;
		}
	}
	cout << "ERROR" << endl;

	return 0;
}

