#include<bits/stdc++.h>
using namespace std;

double bidui(string a,string b){
	int n = a.size();
	int ok = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == b[i]){
			ok ++;
		}
	}
	double ok_p = (double)ok / (double)n;
	return ok_p;
}

int main(){
	double yuzhi;
	cin >> yuzhi;
	string no;
	getline(cin,no); 
	string a,b;
	getline(cin,a);
	getline(cin,b);
	double ans = bidui(a,b);
	if(ans >= yuzhi){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
	return 0;
} 
