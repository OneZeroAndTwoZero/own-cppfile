#include<bits/stdc++.h>
using namespace std;

string s[101];
string z;

void pai(int n){
	for(int i = 1;i < n;i++){
		for(int j = 0;j < n - i;j++){
			if(s[j] > s[j + 1]){
				swap(s[j],s[j + 1]);
			}
		}
	}
}

int main(){
	getline(cin,z);
	z = z + " ";
	int n = z.size();
	int i = 0,j = 0;
	while(i < n){
		int pos_ = z.find(" ",i);
		s[j] = z.substr(i,pos_ - i);
		j++;
		i = pos_;
		while(z[i] == ' ' && i < n){
			i ++;
		}
	}
	s[j + 1] = "###";
	pai(j);
	for(int k = 0;k < j;k++){
		if(s[k] == s[k + 1]){
			continue;
		}
		cout << s[k] << endl;
	}

	return 0;
}

