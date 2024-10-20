#include<bits/stdc++.h>
using namespace std;

int b[30005] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	int tem;
	for(int i = 0;i < n;i++){
		cin >> tem;
		b[tem] ++;
	}
	int no = 0;
	for(int i = 0;i < 30000;i++){
		if(b[i] > 0) no ++;
		if(no == k){
		    cout << i << endl;
		    return 0;
		}
	}
	if(no < k){
		cout << "NO RESULT" << endl;
	}

	return 0;
}

