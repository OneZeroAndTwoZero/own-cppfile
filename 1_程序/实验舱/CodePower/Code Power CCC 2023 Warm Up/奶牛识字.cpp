#include<bits/stdc++.h>
using namespace std;

int n;
string a,b;
int ans[26] = {0},check1[26] = {0},check2[26] = {0};

int main(){ 
    cin >> n;
    while(n --){
    	cin >> a >> b;
    	for(int i = 0;i < 26;i++) check1[i] = check2[i] = 0;
    	for(int i = 0;i < a.size();i++){
    		check1[a[i] - 'a'] ++;
		}
		for(int i = 0;i < b.size();i++){
    		check2[b[i] - 'a'] ++;
		}
		for(int i = 0;i < 26;i++){
			ans[i] += max(check1[i],check2[i]);
		}
	}
	for(int i = 0;i < 26;i++){
		cout << ans[i] << endl;
	}

	return 0;
}

