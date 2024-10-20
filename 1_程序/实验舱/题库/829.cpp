#include<bits/stdc++.h>
using namespace std;

int a[10] = {0};

int main(){
	int tem;
	while(cin >> tem){
		a[tem - 1] ++;
	}
	for(int i = 0;i < 10;i++){
		cout << i + 1 << " " << a[i] << endl;
	}

	return 0;
}

