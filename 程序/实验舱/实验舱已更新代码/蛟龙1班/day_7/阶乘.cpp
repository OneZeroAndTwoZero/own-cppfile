#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    long long answer = 1;
    cin >> a;
    for(int i = 1;i <= a;i++){
    	answer *= i;
	}
	cout << answer << endl;
	
	return 0;
}
