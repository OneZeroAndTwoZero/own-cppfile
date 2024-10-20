#include<iostream>
using namespace std;

int m,w,z;

int main(){
	cin >> m >> w;
	z = m + w;
	if(z < 10){
		cout << "water" << endl;
	}else{
		if(m > w){
			cout << "tree" << endl;
		}else{
			cout << "tea" << endl;
		}
	}
	
	return 0;
} 
