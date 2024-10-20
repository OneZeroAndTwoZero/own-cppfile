#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch;
	int one = 0,zero = 0;
	while(1){
		cin >> ch;
		if(ch == '#'){
			break;
		}
		if(ch == '0'){
			zero ++;
		}else{
			one ++;
		}
	}
	cout << one << " " << zero << endl;
	
	return 0;
}
