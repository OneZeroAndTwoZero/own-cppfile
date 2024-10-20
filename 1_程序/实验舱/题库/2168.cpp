#include<bits/stdc++.h>
using namespace std;

struct p{
	char
};

int a[54] = {0};
int t[54] = {0};

void cz(){
	for(int i = 0;i < 54;i++){
		a[i] = t[i];
		t[i] = 0;
	}
}

int main(){
	int k;
	cin >> k;
	for(int i = 0;i < 54;i++){
		cin >> a[i];
	}
	for(int i = 0;i < k;i++){
		for(int j = 0;j < 54;j++){
			t[a[j]] = j;
		}
		cz();
	}
	for(int i = 0;i < 54;i++){
		cout << a[i] << " ";
	}

	return 0;
}

