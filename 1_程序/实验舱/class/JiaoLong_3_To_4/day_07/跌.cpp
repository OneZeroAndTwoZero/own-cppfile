#include<bits/stdc++.h>
using namespace std;

int tem[100005] = {0};
map <int,int> ok;
map <int,int> a;
map <int,int> d;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tem[i];
	}
	for(int i = 0;i < n;i++){
		a[tem[i]] = tem[i] == -1 ? -1 : tem[tem[i]];
		if(tem[i] != -1){
			ok[tem[tem[i]]] = 1;
		}
	}
	int first;
	for(int i = 0;i < n;i++){
		if(ok[tem[i]] != 1){
			first = tem[i];
			break;
		}
	}
	for(int i = 0;i < n;i++){
		cout << first << "/////////\n";
		int lb = first;
		d[lb] = i;
		lb = a[first];
	}
	for(int i = 0;i < n;i++){
		cout << d[tem[i]] << " ";
	}

	return 0;
}

