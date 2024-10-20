#include<iostream>
using namespace std;

int main(){
	int cj;
	char out;
	cin >> cj;
	if(cj >= 90){
		out = 'A';
	}else if(cj >= 80){
		out = 'B';
	}else if(cj >= 60){
		out = 'C';
	}else{
		out = 'D';
	}
	cout << out << endl;
	
	return 0;
} 
