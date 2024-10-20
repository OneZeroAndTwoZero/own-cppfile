#include<bits/stdc++.h>
using namespace std;

int lei_x(char c){
	int lei;
	if(c >= '0' && c <= '9'){
		lei = 0;
		return lei;
	}else if(c >='a' && c <= 'z'){
		lei = 1;
		return lei;
	}else if(c >= 'A' && c <= 'Z'){
	    lei = 2;
	    return lei;
	}
	return -1;
}

int main(){
	string s;
	getline(cin,s);
	int da = 0,xiao = 0,shu = 0;
	for(int i = 0;i < s.size();i++){
		if(lei_x(s[i]) == 0){
			shu ++;
		}else if(lei_x(s[i]) == 1){
			xiao ++;
		}else if(lei_x(s[i]) == 2){
			da ++;
		}
	}
	cout << da << " " << xiao << " " << shu << endl;
	
	return 0;
} 
