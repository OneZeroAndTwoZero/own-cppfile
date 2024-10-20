#include<bits/stdc++.h>
using namespace std;

int n[128] = {0};

int main(){
	string a,b;
	cin >> a >> b;
	for(int i = 0;i < b.size();i++){
		n[b[i]] ++;
	}
	for(int i = 0;i < a.size();i++){
		n[a[i]] --;
	}
	int q = 0;
	for(int i = 0;i < 128;i++){
		if(n[i] > 0){
			q += n[i];
		}
	}
	if(q > 0){
		cout << "No " << q << endl;
		return 0;
	}
	int d = 0;
	for(int i = 0;i < 128;i++){
		d += abs(n[i]);
	}
	cout << "Yes " << d << endl;

	return 0;
}

