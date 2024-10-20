#include<iostream>
using namespace std;

int main(){
	int in;
	cin >> in;
	if(in >= 0 && in <= 127){
		cout << (char)in << endl;
	}else{
		cout << "NOT ASCII" << endl;
	}
	
	return 0;
} 
