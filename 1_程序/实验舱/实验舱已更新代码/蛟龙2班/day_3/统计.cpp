#include<bits/stdc++.h>
using namespace std;

int main(){
	char ch;
	int n;
	cin >> n;
	int zm = 0,sz = 0,kg = 0;
	for(int i = 0;i <= n;i++){
		ch = getchar();
		int x = (int)ch;
		if(x >= 'a' && x <= 'z'){
			zm += 1;
		}else if(x >= 'A' && x <= 'Z'){
			zm += 1;
		}else if(isdigit(ch)){
			sz += 1;
		}else if(x == 32){
			kg += 1;
		}
	}
	cout << sz << endl;
	cout << zm << endl;
	cout << kg << endl;
	
	return 0;
}
