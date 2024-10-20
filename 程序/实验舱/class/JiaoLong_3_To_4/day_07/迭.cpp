#include<bits/stdc++.h>
using namespace std;

int tem[100005] = {0};
map <int,int> a;
map <int,int> ok;
map <int,int> d;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tem[i];
		ok[tem[i]] = 0;
	}
	for(int i = 0;i < n;i++){
		if(tem[i] != -1){
		    a[tem[i]] = tem[tem[i]];
			ok[tem[tem[i]]] = 1;
		}
	}
	int first;
	for(int i = 0;i < n;i++){
		if(ok[tem[i]] == 0){
			first = tem[i];
			break;
		}
	}
	for(int i = 0;i < n;i++){
		d[first] = i + 1;
		first = a[first];
	}
	for(int i = 0;i < n;i++){
		cout << d[tem[i]] << " ";
	}

	return 0;
}

