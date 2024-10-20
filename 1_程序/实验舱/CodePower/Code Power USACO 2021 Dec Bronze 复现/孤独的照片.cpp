#include<bits/stdc++.h>
using namespace std;

string s;

int sl(int n){
	int tem_n = n - 1;
	int z = 0,y = 0;
	while(s[tem_n] != s[n] && tem_n >= 0){
		z ++;
		tem_n --;
	}
	tem_n = n + 1;
	int cd = s.size();
	while(s[tem_n] != s[n] && tem_n < cd){
		y ++;
		tem_n ++;
	}
	if(z + y < 2) return 0;
	if(z == 0){
		return max(0,(y - 1));
	}else if(y == 0){
		return max(0,(z - 1));
	}
	return max(0,(z * y) + max(0,(y - 1)) + max(0,(z - 1)));
}

int main(){
	int c;
	cin >> c;
	cin >> s;
	long long gd = 0;
	for(int i = 0;i < s.size();i++){
		gd += sl(i);
	}
    cout << gd << endl;
    
	return 0;
}

