#include<iostream>
using namespace std;

int main(){
	int a,b;
	char ch;
	cin >> a >> b >> ch;
	if(ch == '+'){
		cout << a+b << endl;
	}else{
		if(ch == '-'){
			cout << a-b << endl;
		}else{
			if(ch == '*'){
				cout << a*b << endl;
			}else{
				if(ch == '/'){
					if(b == 0){
						cout << "Divided by zero!" << endl;
					}else{
						cout << (double)a/b << endl;
					}
				}else{
					cout << "Invalid operator!" << endl;
				}
			}
		}
	}
	
	return 0;
} 
