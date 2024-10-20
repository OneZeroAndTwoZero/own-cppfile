#include<bits/stdc++.h>
using namespace std;

vector<int> a[100005];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int p,x;
		cin >> p >> x;
		a[p - 1].push_back(x);
	}
	for(int i = 0;i < n;i++){
		vector<int> :: iterator it;
		for(it = a[i].begin();it != a[i].end();it ++){
			cout << *it << endl;
		}
	}

	return 0;
}

