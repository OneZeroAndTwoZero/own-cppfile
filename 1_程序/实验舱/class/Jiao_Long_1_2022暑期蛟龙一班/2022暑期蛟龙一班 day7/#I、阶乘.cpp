#include<bits/stdc++.h>
using namespace std;

int a;
long long answer = 1;
    
int main(){
    cin >> a;
    for(int i = 1;i <= a;i++){
    	answer *= i;
	}
	cout << answer << endl;
	
	return 0;
}
