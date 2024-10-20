#include<bits/stdc++.h>
using namespace std;

int ans[10005] = {0};
int a[10005] = {2};

void cz(){
	for(int i = 0;i < 10005;i++){
		a[i] = ans[i];
		ans[i] = 0;
	}
}

void cheng(){
	for(int i = 0;i < 5005;i++){
		for(int j = 0;j < 5005;j++){
			ans[i + j] += a[i] * a[j];
		}
	}
	for(int i = 0;i < 10002;i++){
		a[i + 1] += a[i] / 10;
		a[i] %= 10;
	}
	cz();
}

void out(){
	int k = 10003;
	while(a[k] == 0){
		k --;
	}
	for(int i = k;i >= 0;i--){
		cout << a[i];
	}
}

int main(){

	return 0;
}

