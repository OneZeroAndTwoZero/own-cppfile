#include<bits/stdc++.h>
using namespace std;

int n,s;

int main(){
    cin >> n;
    s = n * 100;
    while(n--){
    	int x;
    	cin >> x;
    	s += x;
	}
	cout << s << endl;
	
	return 0;
}
