#include<bits/stdc++.h>
using namespace std;

string a,b;

void cz(string h,string z){
	if(h.size() == 1 || h.size() == 0){
		cout << h;
		return;
	}
	char g = h[h.size() - 1];
	int pos = z.find(g);
	cout << g;
	cz(h.substr(0,pos),z.substr(0,pos));
	cz(h.substr(pos,h.size() - pos - 1),z.substr(pos + 1,z.size() - pos - 1));
	
}

int main(){
	cin >> b >> a;
	cz(a,b);

	return 0;
}

