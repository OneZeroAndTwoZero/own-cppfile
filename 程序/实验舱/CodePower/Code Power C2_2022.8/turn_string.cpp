#include<bits/stdc++.h>
using namespace std;
int a1[128] = {0},a2[128] = {0};

void turn(string s1,string s2){
	int n1 = s1.size();
	int n2 = s2.size();
	for(int i = 0;i < n1;i++){
		a1[s1[i]]++;
	}
	for(int i = 0;i < n2;i++){
		a2[s2[i]]++;
	}
}

bool ok(int a[],int b[],int n){
	for(int i = 0;i < n;i++){
		if(a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	turn(a,b);
	if(ok(a1,a2,128)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}

