#include<bits/stdc++.h>
using namespace std;

int T;
string A, B;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> T;
	while (T --){
		cin >> A >> B;
		if ((A.front() == '-') ^ (B.front() == '-')){
			if (A.front() == '-') cout << "<\n";
			else cout << ">\n";
		}else{
			if (A.front() == '-'){
				A = A.substr(1), B = B.substr(1);
				swap(A, B);
			}
			if (A.size() != B.size()){
				if (A.size() > B.size()) cout << ">\n";
				else cout << "<\n";
			}else{
				if (A > B) cout << ">\n";
				else if (A < B) cout << "<\n";
				else cout << "=\n";
			}
		}
	}
	
	return 0;
}
