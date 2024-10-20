#include<iostream>
using namespace std;

int a;
double v1,v2,t1,t2;

int main(){
	cin >> a;
	v1 = 1.2,v2 = 3.0;
	t1 = a / v1,t2 = a / v2 + 50;
	if(t2 < t1){
		cout << "Bike" << endl;
	}else{
		if(t2 == t1){
			cout << "All" << endl;
		}else{
			cout << "Walk" << endl;
		}
	}
	
	return 0;
} 
