#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char a,b,c;
	cin >> n >> a >> b >> c;
	int jd = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(j < jd){
				cout << b;
			}else if(j == jd){
				cout << c;
			}else{
				cout << a;
			}
		}
		cout << endl;
		jd ++;
	}

	return 0;
}

