#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = n*100;
    while(n--){
    	int x;
    	cin >> x;
    	s += x;
	}
	cout << s << endl;
	
	return 0;
}
