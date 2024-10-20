#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

int main(){
	int t;
	cin >> t;
	int cheaper = 10001;
	string cheaper_wz;
	for(int i = 0;i < t;i++){
		cin >> a[i];
		if(a[i] < cheaper){
			cheaper = a[i];
			if(i == 0){
				cheaper_wz = "mao";
			}else if(i == 1){
				cheaper_wz = "gou";
			}else{
				cheaper_wz = "longmao";
			}
		}
	}
	int gs = 0;
	for(int i = 0;i < t;i++){
		if(a[i] == cheaper){
			gs ++;
		}
	}
	if(gs != 1){
		cout << "do not know how to choose" << endl;
		return 0;
	}
	if(cheaper > 1000){
		cout << "not enough money" << endl;
		return 0;
	}
	cout << cheaper << " " << cheaper_wz << endl;

	return 0;
}

