#include<bits/stdc++.h>
using namespace std;

map<char,int> biao;

int main(){
	biao['A'] = 4,biao['B'] = 3,biao['C'] = 2,biao['D'] = 1;
	double point = 0;
	int num = 0;
	string s;
	cin >> s;
	s = s + " ";
	for(int i = 0;i < s.size() - 1;i++){
		num ++;
		point += biao[s[i]];
		char tem = s[i + 1];
		if(tem == '+') point += 0.3,i ++;
		else if(tem == '-') point -= 0.3,i ++;
	}
	printf("%.2lf",point / num);

	return 0;
}

