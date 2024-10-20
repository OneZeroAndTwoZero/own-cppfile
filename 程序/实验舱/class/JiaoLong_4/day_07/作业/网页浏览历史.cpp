#include<bits/stdc++.h>
using namespace std;

int n;
string st[50005] = {""};
int pos = 0,read = 0;
string op,now;

void push(){
	st[++ read] = now;
	pos = read;
}

string tui(){
	if(read <= 1) return "Invalid";
	return st[-- read];
}

string go(){
	if(read >= pos) return "Invalid";
	return st[++ read];
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> op;
		if(op == "GOTO"){
			cin >> now;
			push();
			cout << now << endl;
		}else if(op == "BACK"){
			cout << tui() << endl;
		}else{
			cout << go() << endl;
		}
	}

	return 0;
}

