#include<bits/stdc++.h>
using namespace std;

int a[10];
void js(int k){
	while(k){
		a[k%10]++;
		k/=10;
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		js(i);
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<endl;
	}

	return 0;
}

