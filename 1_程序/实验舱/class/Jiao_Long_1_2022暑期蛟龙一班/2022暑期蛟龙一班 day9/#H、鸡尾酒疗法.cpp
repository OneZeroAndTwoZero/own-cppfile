#include<bits/stdc++.h>
using namespace std;

int n,z,y;
double j_x,q_x;

int main(){
	cin >> n;
	cin >> z >> y;
	j_x = (double)y / z;
	for(int i = 1;i < n;i++){
		cin >> z >> y;
		q_x = (double)y / z;
		if(j_x - q_x > 0.05){
			cout << "worse" << endl;
		}else if(q_x - j_x > 0.05){
			cout << "better" << endl;
		}else{
			cout << "same" << endl;
		}
	}
	
	return 0;
} 
