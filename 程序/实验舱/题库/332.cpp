#include<bits/stdc++.h>
using namespace std;

int b[2001] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		b[a + 1000] ++;
	}
	for(int i = 0;i < 2001;i++){
		for(int j = 0;j < b[i];j++){
			cout << i - 1000 << " ";
		}
	}

	return 0;
}

