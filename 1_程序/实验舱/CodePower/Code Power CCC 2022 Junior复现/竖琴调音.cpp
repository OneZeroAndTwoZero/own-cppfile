#include<bits/stdc++.h>
using namespace std;

string s,t;

int main(){
	cin >> s;
	t = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] == '-' || s[i] == '+'){
			cout << t << " ";
			t = "";
			if(s[i] == '-') cout << "loosen ";
			else cout << "tighten ";
			i ++;
			while(s[i] >= '0' && s[i] <= '9'){
				t += s[i];
				i ++;
			}
			cout << t << endl;
			t = "";
			i --;
		}else{
			t += s[i];
		}
	}

	return 0;
}

