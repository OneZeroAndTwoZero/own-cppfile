#include<bits/stdc++.h>
using namespace std;

#define N 114514
int a[24];
int b[N];

int main(){
	for(int i = 0;i < 24;i++){
		cin >> a[i];
	}
    for(int i = 0;;i++){
    	cin >> b[i];
    	if(b[i] > 24 || b[i] < 0){
    		b[i] = -1;
    		break;
		}
	}
	for(int i = 0;b[i] != -1;i++){
		if(a[b[i]] > 50){
			cout << a[b[i]] << " " << "Yes" << endl;
		}else{
			cout << a[b[i]] << " " << "No" << endl;
		}
	}
	
	return 0;
} 
