#include<bits/stdc++.h>
using namespace std;

bool o1[101] = {0};
bool o2[101] = {0};
int a[101][101] = {0};

int main(){
	int n;
	cin >> n;
	int o1_ = n,o2_ = n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		for(int j = 0;j < n;j++){
			if(a[i][j] == 1) sum ++;
		}
		o1[i] = 1 - (sum % 2);
		if(o1[i]) o1_ --;
		cout << o1 << endl;
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		for(int j = 0;j < n;j++){
			if(a[j][i] == 1) sum ++;
		}
		o2[i] == 1 - (sum % 2);
		if(o2[i]) o2_ --;
		cout << o2 << endl;
	}
	if(o1_ == 0 && o2_ == 0){
		cout << "OK" << endl;
		return 0;
	}else if(o1_ - 1 == 0 && o2_ - 1 == 0){
		int z1,z2;
		for(int i = 0;i < n;i++){
			if(o1[i] == 0){
				z1 = i + 1;
			}
		}
		for(int i = 0;i < n;i++){
			if(o2[i] == 0){
				z2 = i + 1;
			}
		}
		cout << z1 << " " << z2 << endl;
	}else{
		cout << "Corrupt" << endl;
	}
	
	return 0;
}

