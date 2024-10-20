#include<bits/stdc++.h>
using namespace std;

map<int,int> tem;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int k;
		cin >> k;
		tem[k] ++;
	}
	
	map<int,int> :: iterator it;
	int max = -1,max_num;
	
	for(it = tem.begin();it != tem.end();it ++){
		if(it -> second >= max){
		    max = it -> second;
		    max_num = it -> first;
		}
	}
	cout << max_num << " " << max << endl;

	return 0;
}

