#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int z,y;
	cin >> z >> y;
	double j_x = (double)y / z;
	for(int i = 1;i < n;i++){
		cin >> z >> y;
		double q_x = (double)y / z;
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
