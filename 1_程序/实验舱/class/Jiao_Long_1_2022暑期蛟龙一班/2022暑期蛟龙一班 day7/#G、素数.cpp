#include<bits/stdc++.h>
using namespace std;

int n,p_1,p_2 = 0,ws_ = 0;
bool r_1 = 1,r_2 = 1;

int main(){
	cin >> n;
	p_1 = n;
	while(n){
		n = n/10;
		ws_ += 1;
	}
	n = p_1;
	while(n){
		int a = n%10;
		n = n/10;
		p_2 += a*pow(10,ws_-1);
		ws_ -= 1;
	}
	for(int i = 2;i < p_1;i++){
		if(p_1 % i == 0){
			r_1 = 0;
		}
	}
	for(int j = 2;j < p_2;j++){
		if(p_2 % j == 0){
			r_2 = 0;
		}
	}
	if(r_1 && r_2){
		cout << "Yes." << endl;
	} else{
		cout << "No." << endl;
	}
	
	return 0;
}
