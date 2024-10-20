#include<bits/stdc++.h>
using namespace std;

map<string,string> ok,no;
int ans = 0;
int x,y,g;
string a,b,c;

int main(){
	cin >> x;
	for(int i = 0;i < x;i++){
		cin >> a >> b;
		ok[a] = b;
	}
	cin >> y;
	for(int i = 0;i < y;i++){
		cin >> a >> b;
		no[a] = b;
	}
	cin >> g;
	for(int i = 0;i < g;i++){
		cin >> a >> b >> c;
		if(ok[a] != "" && ok[a] != b && ok[a] != c){
			ans ++;
		}else if(ok[b] != "" && ok[b] != a && ok[b] != c){
			ans ++;
		}else if(ok[c] != "" && ok[c] != a && ok[c] != b){
			ans ++;
		}else if(no[a] != "" && (no[a] == b || ok[a] == c)){
			ans ++;
		}else if(no[b] != "" && (no[b] == a || ok[b] == c)){
			ans ++;
		}else if(no[c] != "" && (no[c] == a || ok[c] == b)){
		    ans ++;	
		}else{
			cout << i << "[][][]\n";
		}
	}
	cout << ans << endl;

	return 0;
}

