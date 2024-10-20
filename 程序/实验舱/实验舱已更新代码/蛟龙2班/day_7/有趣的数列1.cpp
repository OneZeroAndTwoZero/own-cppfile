#include<bits/stdc++.h>
using namespace std;

bool ok(int a[],int n){
	int cha = abs(a[0] - a[1]);
	for(int i = 0;i < n-1;i++){
		int cha_x = abs(a[i] - a[i + 1]);
		if(cha_x != cha){
			return 0;
		}
	}
	return 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i];
	}
	if(ok(a,n)) cout << "yes" << endl;
	else cout << "no" << endl;
	
	return 0;
} 
