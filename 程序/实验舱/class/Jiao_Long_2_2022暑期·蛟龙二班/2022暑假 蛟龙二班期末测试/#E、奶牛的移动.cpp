#include<bits/stdc++.h>
using namespace std;

int a[110] = {0};
int ID[110] = {0};

void turn(int n){
	int ID2[110] = {0};
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(a[j] == i){
				ID2[j] = ID[i];
				break;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		ID[i] = ID2[i];
	}
}

int main(){
	int N;
	cin >> N;
	for(int i = 1;i <= N;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= N;i++){
		cin >> ID[i];
	}
	for(int i = 0;i < 3;i++){
		turn(N);
	}
	for(int i = 1;i <= N;i++){
		cout << ID[i] << endl;
	}
	
	
	return 0;
} 
