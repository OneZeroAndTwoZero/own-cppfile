#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int b[10005] = {0};
int name[100005] = {0};

void pai(int n){
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(b[j] < b[j + 1]){
				swap(b[j],b[j + 1]);
				swap(name[j],name[j + 1]);
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
		name[a[i]] = a[i];
	}
	pai(n);
	for(int i = 0;i < 10;i++){
		if(b[i] == 0){
			return 0;
		}
		cout << name[i] << " " << b[i] << endl;
	}

	return 0;
}

