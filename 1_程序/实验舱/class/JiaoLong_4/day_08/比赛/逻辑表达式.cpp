#include<bits/stdc++.h>
using namespace std;

string s,tem;
int yu = 0,huo = 0,n,d;
string a[1000005];
int pos = 0;
stack<char> t;
stack<int> num;
int n1,n2;

int main(){
	cin >> s;
	n = s.size();
	for(int i = 0;i < n;i ++){
		tem = "";
		while(s[i] >= '0' && s[i] <= '9'){
			tem = tem + s[i ++];
		}
		a[pos ++] = tem;
		if(s[i] == '('){
			t.push('(');
		}else if(s[i] == ')'){
			char now = t.top();
			while(now != '('){
				a[pos ++] = t.top();
				t.pop();
			}
			t.pop();
		}else if(s[i] == '|'){
			while(t.size() && (t.top() != '(' && t.top() != ')')){
				a[pos ++] = t.top();
				t.pop();
			}
			t.push('|');
		}else if(s[i] == '&'){
			while(t.size() && t.top() == '&'){
				a[pos ++] = t.top();
				t.pop();
			}
			t.push('&');
		}
	}
	while(t.size()){
		a[pos ++] = t.top();
		t.pop();
	}
	for(int i = 0;i < pos;i ++){
		if(a[i][0] >= '0' && a[i][0] <= '9'){
			sscanf(a[i].c_str(),"%d",&d);
			num.push(d);
		}else if(a[i] == "|"){
			n1 = num.top();
			num.pop();
			n2 = num.top();
			num.pop();
			num.push(n1 | n2);
	    }else{
			n1 = num.top();
			num.pop();
			n2 = num.top();
			num.pop();
			num.push(n1 & n2);
		}
		cout << n1 << "[][]" << n2 << endl;
	}
	printf("%d\n",num.top());

	return 0;
}

