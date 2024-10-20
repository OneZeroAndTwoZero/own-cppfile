#include<bits/stdc++.h>
using namespace std;

map<string,int> ren;

int main(){
	int n,m;
	cin >> m;
	string s;
	for(int i = 0;i < m;i++){
		cin >> s;
		ren[s] = 0;
    }
    cin >> n;
    for(int i = 0;i < n;i++){
    	int k = 0;
    	cin >> k;
    	for(int i = 0;i < k;i++){
    		string tem;
    		cin >> tem;
    		ren[tem] ++;
		}
	}
	
	map<string,int> :: iterator it;
	int min = n + 1;
	for(it = ren.begin();it != ren.end();it++){
		if(it -> second < min) min = it -> second;
	}
	for(it = ren.begin();it != ren.end();it++){
		if(it -> second == min){
			cout << it -> first << endl;
			return 0;
		}
	}

	return 0;
}

