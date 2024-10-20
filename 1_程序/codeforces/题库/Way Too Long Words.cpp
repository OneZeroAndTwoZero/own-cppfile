#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
	scanf("%d",&n);
	while(n --){
		cin >> s;
		if(s.size() > 10){
			printf("%c%d%c\n",s[0],s.size() - 2,s[s.size() - 1]);
		}else{
			cout << s << endl;
		}
	}

	return 0;
}

