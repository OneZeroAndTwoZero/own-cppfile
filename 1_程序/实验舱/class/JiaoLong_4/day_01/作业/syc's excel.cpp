#include<bits/stdc++.h>
using namespace std;

map<string,map<string,int> > zhao;
int n,t;
string k,s;

int main(){
	scanf("%d",&n);
	while(n --){
		cin >> k >> s;
		scanf("%d",&t);
		zhao[s][k] += t;
	}
	map<string,map<string,int> > :: iterator it;
	map<string,int> :: iterator it2;
	for(it = zhao.begin();it != zhao.end();it ++){
		cout << it -> first << endl;
		for(it2 = it -> second.begin();it2 != it -> second.end();it2 ++){
			cout << "   |----" << it2 -> first << "(" << it2 -> second << ")" << endl;
		}
	}

	return 0;
}

