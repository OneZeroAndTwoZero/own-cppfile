#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

int main(){
	int n,w;
	cin >> n >> w;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int x = 0,num_x_n = 0,num_x = 0,now = 0;
	for(int i = 0;i < n;i++){
		if(a[i] + now == w){
			now = 0;
			x ++,num_x += num_x_n + 1;
			num_x_n = 0;
		}else if(a[i] + now < w){
			now += a[i];
			num_x_n ++;
		}
	}
	cout << x << " " << num_x << endl;

	return 0;
}

