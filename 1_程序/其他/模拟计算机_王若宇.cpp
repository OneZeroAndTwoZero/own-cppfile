#include <bits/stdc++.h>
using namespace std;

void decto(long long n,int r){
	if(n == 0){
		cout << 0 << endl;
		return;
	}
	stack<int>s;
	while(n) s.push(n%r),n/=r;
	while(!s.empty()){
		if(s.top() >= 10) cout << char(s.top() + 55);
		else cout << s.top();
		s.pop();
	}cout<<endl;
}

long long todec(string n,int r){
    long long an = 0,w = 1;
    for(long long i = n.size() - 1;i >= 0;i--){
    	if(isdigit(n[i])) an += (long long)((n[i]-48) * w);
    	else if(isalpha(n[i])) an += (long long)((n[i]-55)*w);
    	w *= r;
	}
	return an;
}

int main(){
	long long n,k = 10,an;
	char y;
	string x,f;
	cin>>n;
	bool r = 0;
	for(long long i=0;i<n;i++){
	    cin>>x;
		if(x == "EQUAL"){
		    decto(an,k);
		}
		else if(x == "CLEAR"){
		    y=' ',an=0,r=0;
		}
		else if(x == "CHANGE"){
		    cin >> k;
		}
		else if(x == "NUM"){
			cin>>f;
			long long dx = todec(f,k);
			//cout<<dx<<endl; 
			if(r==1){ 
				switch(y){
					case '+':
						an+=dx;
						break;
					case '-':
						an-=dx;
						break;
					case '*':
						an*=dx;
						break;
					case '/':
						an/=dx;
						break;
					case '%':
						an=an%dx;
						break;
				}
				r=0;
			}else{
			    an=dx;
			}
		}
		else if(x=="ADD")y='+',r=1;
		else if(x=="SUB")y='-',r=1;
		else if(x=="MUL")y='*',r=1;
		else if(x=="DIV")y='/',r=1;
		else if(x=="MOD")y='%',r=1;
	}
    return 0;
}
