#include<bits/stdc++.h>
using namespace std;

string s;
double temp;
bool ks;
int n,rs = 0;
	
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s >> temp >> ks;
		if(ks && temp >= 37.5){
			rs ++;
			cout << s << endl;
		}
	}
	cout << rs;
	
	return 0;
}
