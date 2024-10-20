#include<bits/stdc++.h>
using namespace std;

int jg[1005] = {0};

int main(){
	int w,n;
	cin >> w >> n;
	for(int i = 0;i < n;i++){
		cin >> jg[i];
	}
	sort (jg,jg + n);
	int f = 0,l = n - 1;
	int sum = 0;
	while(f <= l){
		int max_ = jg[l],min_ = jg[f];
		int he = max_ + min_;
		if(he > w){
			l --,sum ++;
		}else{
			l --,f ++,sum ++;
		}
	}
	cout << sum << endl;

	return 0;
}

