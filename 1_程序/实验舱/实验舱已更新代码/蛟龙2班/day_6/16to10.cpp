#include<bits/stdc++.h>
using namespace std;

int toten(string a){
	int s = 0;
	int quan = 1;
	for(int i = a.size() - 1;i >= 0;i--){
		int w;
		if(a[i] >= 'A'){
			w = a[i] - 'A' + 10;
		}else{
			w = a[i] - '0';
		}
		s += w * quan;
		quan *= 16;
	}
	
	return s;
}

int main(){
	string s;
	cin >> s;
	cout << toten(s) << endl;
	
	
	return 0;
} 
