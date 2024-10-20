#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int min = 1000,max = 1;
    int x;
    cin >> n;
    while(n--){
    	cin >> x;
    	if(x >= max){
    		max = x;
		}
		if(x <= min){
			min = x;
		}
	}
	int cha = max - min;
	cout << cha << endl;
	
	return 0;
}
