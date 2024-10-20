#include<bits/stdc++.h>
using namespace std;

int a[10005] = {1};
int ans[10005] = {0};
int now[5] = {2};

void cz(){
	for(int i = 0;i < 10005;i++){
		a[i] = ans[i];
		ans[i] = 0;
	}
}

void jia(){
	now[0] ++;
	for(int i = 1;i < 4;i++){
		a[i] += a[i - 1] / 10;
		a[i - 1] %= 10;
	}
}

void out(){
	int ans_ = 0;
	for(int i = 10001;i >= 0;i--){
		ans_ += a[i];
	}
	cout << ans_ << endl;
}

void cheng(){
	for(int i = 0;i < 10005;i++){
		for(int j = 0;j < 5;j++){
			ans[i + j] += a[i] * now[j];
		}
	}
	for(int i = 1;i < 10005;i++){
		ans[i] += ans[i - 1] / 10;
		ans[i - 1] %= 10;
	}
	cz();
}

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	for(int i = 1;i < n;i++){
		cheng();
		jia();
	}
	out();

	return 0;
}

