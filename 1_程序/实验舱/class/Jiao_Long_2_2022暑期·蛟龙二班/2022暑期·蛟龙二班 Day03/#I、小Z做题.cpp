#include<bits/stdc++.h>
using namespace std;

string s;
int n;

int main(){
	cin >> n;
	for(int k = 0;k < n;k++){
		cin >> s;
		int num1 = 0,num2 = 0;
		int i = 0;
		while(s[i] >= '0' && s[i] <= '9'){
			num1 *= 10;
			num1 += s[i] - 48;
			i ++;
		}
		int a;
		int j = i;
		i++;
		while(s[i] >= '0' && s[i] <= '9'){
			num2 *= 10;
			num2 += s[i] - 48;
			i ++;
		}
		if(s[j] == '+'){
			cout << num1 + num2 << endl;
		}else if(s[j] == '-'){
			cout << num1 - num2 << endl;
		}else if(s[j] == '*'){
			cout << num1 * num2 << endl;
		}else if(s[j] == '/'){
			cout << num1 / num2 << endl;
		}
	}
	
	return 0;
}
