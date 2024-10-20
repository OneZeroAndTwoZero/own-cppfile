#include<bits/stdc++.h>
using namespace std;
int V,D,num = 1,di_le = 0,time_ = 0,c;
int main(){
	cin >> V >> D;
	c = ceil((double)V / D);
	for(int i = 1;i <= c;i++){
		time_ += 1;
		di_le += 1;
		if(di_le >= num){
			num += 1;
			di_le = 0;
			if(i != c){
				time_ += 1;
			}
		}
	}
	cout << time_ << endl;
	
	return 0;
} 
