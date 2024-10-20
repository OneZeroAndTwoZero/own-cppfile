#include<bits/stdc++.h>
using namespace std;

struct say_{
	int im,ti;
	string name;
	bool operator >(const say_ &b)const{
		if(im == b.im) return ti > b.ti;
		return im > b.im;
	}
};

priority_queue<say_,vector<say_>,greater<say_> > a;
int n,x;
string op,od;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> op;
		if(op == "GET"){
			cin >> od >> x;
			a.push({x,i,od});
		}else{
			if(a.size()){
				cout << a.top().name << endl;
				a.pop();
			}
			else cout << "EMPTY QUEUE!\n";
		}
	}

	return 0;
}

