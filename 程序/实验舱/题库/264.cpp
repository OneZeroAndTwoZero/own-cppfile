#include<bits/stdc++.h>
using namespace std;

int ys[100005] = {0};
int day[100005] = {0};

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = 0;i < m;i++){
		cin >> ys[i];
	}
	for(int i = 0;i < n;i++){
		int tem1,tem2;
		cin >> tem1 >> tem2;
		ys[tem1 - 1] -= tem2;
		if(ys[tem1 - 1] <= 0){
			day[tem1 - 1] = i + 1;
			ys[tem1 - 1] = 100000000;
		}
	}
	for(int i = 0;i < m;i++){
		if(day[i]){
			cout << day[i] << " ";
		}else{
			cout << "-1 ";
		}
	}

	return 0;
}

