#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2;
	cin >> a1 >> a2;
	int time_ = 0;
	while(a1 > 0 && a2 > 0){
		if(a1 < 2 && a2 < 2){
			break;
		}
		if(a1 < a2){
			a1 += 1;
			a2 -= 2;
		}else{
			a2 += 1;
			a1 -= 2;
		}
		time_ ++;
	}
	cout << time_ << endl;
	

	return 0;
} 
