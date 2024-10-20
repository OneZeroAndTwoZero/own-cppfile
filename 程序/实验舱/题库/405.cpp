#include<bits/stdc++.h>
using namespace std;

int a[205] = {0};

int main(){
	int x;
	int n;
	cin >> x >> n;
	if(n == 0){
		cout << "0" << endl;
		return 0;
	}
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int gs = 0;
	if(x < a[0]){
		cout << "0" << endl;
		return 0;
	}else{
	    gs ++;	
	}
	for(int i = 1;i < n;i++){
		if(a[i - 1] + x >= a[i]){
			gs ++;
		}else{
			break;
		}
	}
	cout << gs << endl;

	return 0;
}

