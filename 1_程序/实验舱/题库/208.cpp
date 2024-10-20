#include<bits/stdc++.h>
using namespace std;

map<int,int> jia;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		jia[a] = b;
	}
	int y = 0,m = 0;
	for(int i = 2;;i = i){
		if(jia[i] == 0) break;
		i = jia[i];
		y ++;
	}
	for(int i = 1;;i = i){
		if(jia[i] == 0) break;
		i = jia[i];
		m ++;
	}
	if(m == y){
		cout << "You are my brother" << endl;
	}else if(m < y){
		cout << "You are my younger" << endl;
	}else{
		cout << "You are my elder" << endl;
	}

	return 0;
}

