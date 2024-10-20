#include<bits/stdc++.h>
using namespace std;

string a[105];

int xsd(string a,string b){
	int ans = 0;
	for(int i = 0;i < a.size();i++){
		int tem = abs(a[i] - b[i]);
		ans += tem;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	int min = 10000000;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			int tem = xsd(a[i],a[j]);
			if(tem < min) min = tem;
		}
	}
	cout << min << endl;

	return 0;
}

