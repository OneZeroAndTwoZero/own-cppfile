#include<bits/stdc++.h>
using namespace std;

set<double> a;

int f(int a){
	int s = 0;
	while(a){
		s = s * 10 + a % 10;
		a /= 10;
	}
	return s;
}

int main(){
	int n;
	int t;
	cin >> t;
	for(int k = 0;k < t;k++){
		a.clear();
		cin >> n;
		for(int i = 1;i <= n;i++){
			double ans = (double)i / (double)(f(f(i)));
			a.insert(ans);
		}
		cout << a.size() << endl;
    }
	
	return 0;
} 
