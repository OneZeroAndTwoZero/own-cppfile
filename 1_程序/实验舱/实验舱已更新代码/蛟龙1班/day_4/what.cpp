#include<iostream>
using namespace std;

int main(){
	int m,w;
	cin >> m >> w;
	int z = m + w;
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
