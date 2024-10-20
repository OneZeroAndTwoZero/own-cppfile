#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	int a[n],b[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		cin >> b[i];
	}
	int s = n;
	for(int i = 0;i < n;i++){
		int x = a[i];
		int c  =0;
		for(int j = 0;j < n;j++){
			if(b[j] == x){
				c += 1;
			}
		}
		if(c > 1){
			int c2 = 0;
			for(int j = 0;j < n;j++){
				if(a[j] == x){
					if(c2 >= 1){
						for(int k = j;k < s-1;k++){
							a[k] = a[k+1];
							s -= 1;
						}
					}else{
						c2 += 1;
					}
				}
			}
		}
	}
	
	return 0;
} 
