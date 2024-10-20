#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[100005];

int main(){
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int num = 0;
	for(int i = 0;;i = i){
	    if(a[i] <= x){
	    	num += 1;
	    	i++;
		}else if(a[n - 1] <= x){
			num += 1;
			n--;
		}else{
			break;
		}
		if(i == n){
			break;
		}
    }
    cout << num << endl;
	
	return 0;
} 
