#include<bits/stdc++.h>
using namespace std;

struct kh{
	int left,right;
	bool operator <(const kh &a)const{
		return left < a.left;
	}
};

string s;
kh a[500005];
int pos = 0;
stack<int> q;

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '('){
			q.push(i + 1);
		}else{
			a[pos].left = q.top();
			a[pos ++].right = i + 1;
			q.pop();
		}
	}
	sort(a,a + pos);
	for(int i = 0;i < pos;i++){
		cout << a[i].right << endl;
	}

	return 0;
}

