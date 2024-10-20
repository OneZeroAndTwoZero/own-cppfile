#include<bits/stdc++.h>
using namespace std;

int ans[10005] = {0};
int a[10005] = {0};
int t[10005] = {0};
int now[2] = {0};

void cz(){
	for(int i = 0;i < 10001;i++){
		a[i] = t[i];
		t[i] = 0;
	}
}

void jia(){
	now[0] ++;
	now[1] += now[0] / 10;
	now[0] %= 10;
}

void cheng(){
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 10001;j ++){
			t[i + j] += now[i] * a[j];
		}
	}
	for(int i = 0;i < 10001;i++){
		t[i + 1] += t[i] / 10;
		t[i] %= 10;
	}
	cz();
}

void dj(){
	for(int i = 0;i < 10001;i++){
		ans[i] += a[i];
	}
	for(int i = 0;i < 10001;i ++){
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		now[0] = 1,now[1] = 0;
		a[0] = 1;
		for(int k = 1;k < 10001;k ++){
			a[k] = 0;
		}
		for(int j = 1;j <= i;j++){
			cheng();
			jia();
		}
        dj();
	}
	int s = 10001;
	while(ans[s] == 0){
		s --;
	}
	for(int i = s;i >= 0;i--){
		cout << ans[i];
	}
	cout << endl;

	return 0;
}

