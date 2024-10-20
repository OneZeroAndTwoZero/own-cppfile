#include<bits/stdc++.h>
using namespace std;

int n,x,min_ = 1000,max_ = 1,cha;

int main(){
    cin >> n;
    while(n--){
    	cin >> x;
    	if(x >= max_){
    		max_ = x;
		}
		if(x <= min_){
			min_ = x;
		}
	}
	cha = max_ - min_;
	cout << cha << endl;
	
	return 0;
}
