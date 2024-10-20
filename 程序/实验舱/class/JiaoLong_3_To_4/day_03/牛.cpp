#include<bits/stdc++.h>
using namespace std;

string nian[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
int rs = 0;
map<string,int> a;
map<string,int> b;

int zhaonian(string s){
	for(int i = 0;i < 12;i++){
		if(nian[i] == s) return i;
	}
	return -1;
}

int zhaocha(string a,int n1,int n2){ // n1前一个的 n2后一个的 
	int cha;
	if(a == "next"){
	    cha = (12 + n1) - n2;
	}else{
		cha = (12 + n2) - n1;
	}
	if(cha > 12) cha -= 12;
	return cha;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s1,s2,s3,s4,s5,s6,s7,s8;
		cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
		if(rs == 0){
			a[s8] = 0;
			b[s8] = 0;
		}
		b[s1] = zhaonian(s5);
		int cha = zhaocha(s4,b[s1],b[s8]);
		if(s4 == "next"){
			a[s1] = a[s8] + cha;
		}else{
			a[s1] = a[s8] - cha;
		}
		rs++;
	}
	int ans = abs(a["Bessie"] - a["Elsie"]);
	cout << ans << endl;

	return 0;
}


