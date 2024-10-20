#include<bits/stdc++.h>
using namespace std;

int main(){
    int max = -0x3f3f3f3f;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
    	int a;
    	cin >> a;
    	if(a >= max) max = a;
	}
	cout << max << endl;
	
	return 0;
}
