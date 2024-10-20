#include<bits/stdc++.h>
using namespace std;

int A(int x,int y){
	x = x * 2 + y;
	return x;
}

int B(int x,int y){
	y = 2 * y + x;
	return y;
}

int main(){
	int x = 1,y = 0;
	string s;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] == 'A'){
			x = A(x,y);
		}else{
			y = B(x,y);
		}
	}
	cout << x + y << endl;
	
	return 0;
} 
