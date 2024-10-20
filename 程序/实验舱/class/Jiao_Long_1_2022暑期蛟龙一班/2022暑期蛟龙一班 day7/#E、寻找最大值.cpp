#include<bits/stdc++.h>
using namespace std;
int max_ = -0x3f3f3f3f,n;
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
    	int a;
    	cin >> a;
    	if(a >= max_) max_ = a;
	}
	cout << max_ << endl;
	
	return 0;
}
