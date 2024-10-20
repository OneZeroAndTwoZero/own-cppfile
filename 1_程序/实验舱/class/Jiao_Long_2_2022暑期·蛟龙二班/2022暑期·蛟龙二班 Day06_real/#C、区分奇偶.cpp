#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],j[100005],o[100005];

bool ok(int a){
	if(a % 2 == 0) return 1;
	else return 0;
}

int main(){
	cin >> n;
	int js = 0,os = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(ok(a[i])){
			o[os] = a[i];
			os++; 
		}else{
			j[js] = a[i];
			js++;
		}
	}
	for(int i = 0;i < js;i++){
		cout << j[i] << " ";
	}
	cout << endl;
	for(int i =0;i < os;i++){
		cout << o[i] << " ";
	}
	
	return 0;
} 
