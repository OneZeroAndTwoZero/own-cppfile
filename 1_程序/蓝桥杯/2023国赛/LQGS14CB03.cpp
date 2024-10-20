#include<bits/stdc++.h>
using namespace std;

string k,s = "+",tem;
int ans = 0;

int zhuan(string a){
	int res = 0;
	for(int i = 0;i < a.size();i ++){
		res = res * 10 + (a[i] - '0');
	}
	//cout << a << ";;;" << res << endl;
	return res;
}

int cz(string a){
	int res = 1;
	a = "*" + a;
	string num = "";
	for(int i = 0;i < a.size();i ++){
		if(a[i] == '*' || a[i] == '/'){
			num = "";
			int j = i + 1;
			for(j = j;j < a.size();j ++){
				if(a[j] == '*' || a[j] == '/') break;
				num = num + a[j];
				//cout << j << "[][]" << " " << a[j] << " " << num << endl;
			}
			//cout << num << "[][]" << zhuan(num) << "\n";
			if(a[i] == '*') res *= zhuan(num);
			else res /= zhuan(num);
			i = j - 1;
		}
	}
	return res;
}

int main(){
	getline(cin,k);
	for(int i = 0;i < k.size();i ++){
		if(k[i] != ' ') s = s + k[i];
	}
	//cout << s << endl << endl;
	for(int i = 0;i < s.size();i ++){
		//cout << i << ";;;\n";
		if(s[i] == '+' || s[i] == '-'){
			int j = i + 1;
			tem = "";
			for(j = j;j < s.size();j ++){
				if(s[j] == '+' || s[j] == '-') break;
				tem = tem + s[j];
			}
			//cout << tem << "  " << cz(tem) << endl;
			if(s[i] == '+') ans += cz(tem);
			else ans -= cz(tem);
			//cout << j << s[j] << endl;
			i = j - 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}

