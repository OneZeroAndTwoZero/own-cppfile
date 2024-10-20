#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int max = 0,min = 100000;
	int max_i,min_i;
	getline(cin,s);
	s = s + " ";
	int len = s.size();
	for(int i = 0;i < len;i++){
		while(s[i] == ' '){
			i++;
		}
		int f = i;
		int e = s.find(" ",i);
		int c = e - f;
		if(c > max){
			max = c;
			max_i = i;
		}
		if(c < min){
			min = c;
			min_i = i;
		}
		i = e;
	}
	for(int i = 0;i < max;i++){
		cout << s[i + max_i];
	}
	cout << endl;
	for(int i = 0;i < min;i++){
		cout << s[i + min_i];
	}

	return 0;
}

