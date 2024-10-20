#include<bits/stdc++.h>
using namespace std;

int a[26] = {0};

int main(){
	string s;
	getline(cin,s);
	int max = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			a[s[i] - 'A'] ++;
			if(a[s[i] - 'A'] > max) max = a[s[i] - 'A'];
		}
	}
	for(int i = max;i > 0;i --){
		for(int j = 0;j < 26;j++){
			if(a[j] >= i){
				cout << "*";
			}else{
				cout << " ";
			}
			cout << " ";
		}
		cout << endl;
	}
	cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;

	return 0;
}

