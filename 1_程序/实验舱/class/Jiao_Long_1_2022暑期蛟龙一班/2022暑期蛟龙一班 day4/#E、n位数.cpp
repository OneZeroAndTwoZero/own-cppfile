#include<iostream>
using namespace std;

int a;
int c,d,e,f,g;

int main(){
	cin >> a;
	c = a % 10;
	d = a / 10 % 10;
	e = a / 100 % 10;
	f = a / 1000 % 10;
	g = a / 10000 % 10;
	if(g != 0){
		cout << "5" << endl;
	}else{
		if(f != 0){
			cout << "4" << endl;
		}else{
			if(e != 0){
				cout << "3" << endl;
			}else{
				if(d != 0){
					cout << "2" << endl;
				}else{
					cout << "1" << endl;
				}
			}
		}
	}
	
	return 0;
} 
