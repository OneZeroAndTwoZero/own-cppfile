#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};
int t[10005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> t[i];
	}
	for(int i = 1;i < n;i++){
		if(abs(t[i] - t[i - 1]) < 1 || abs(t[i] - t[i - 1]) > n - 1){
			cout << "Not jolly" << endl;
			return 0;
		}else{
			if(a[abs(t[i] - t[i - 1])] != 0){
				cout << "Not jolly" << endl;
				return 0;
			}else{
				a[abs(t[i] - t[i - 1])] ++;
			}
		}
	}
	cout << "Jolly" << endl;

	return 0;
}

