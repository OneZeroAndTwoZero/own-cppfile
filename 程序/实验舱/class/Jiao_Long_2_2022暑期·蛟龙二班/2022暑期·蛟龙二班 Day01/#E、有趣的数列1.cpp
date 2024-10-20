#include<bits/stdc++.h>
using namespace std;

int n,a[100005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
    int cha_1,cha_2 = abs(a[0] - a[1]);
    bool r = 1;
    for(int i = 1;i < n-1;i++){
    	cha_1 = cha_2;
    	cha_2 = abs(a[i] - a[i+1]);
    	if(cha_1 != cha_2){
    		r = 0;
		}
	}
	if(r){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
	return 0;
} 
