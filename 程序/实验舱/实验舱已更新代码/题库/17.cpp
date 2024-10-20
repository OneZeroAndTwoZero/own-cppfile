#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	int a[k];
	for(int i = 0;i < k;i++){
	    int l1 = 1,l2 = 1,l3;
		cin >> a[i];
		if(a[i] == 1){
			cout << "1" << endl;
		}else if(a[i] == 2){
			cout << "1" << endl;
		}else{
			for(int i = 1;i <= a[i] - 2;i++){
				l3 = l1+l2;
				l1 = l2;
				l2 = l3;
			}
			cout << l3 << endl;
	    }
	}
	
	return 0;
} 
