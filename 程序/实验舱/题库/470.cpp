#include<bits/stdc++.h>
using namespace std;

int main(){
	char max = ' ';
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] > max) max = s[i];
	}
	if(max < '2') cout << "������" << endl;
	else if(max < '8') cout << "�˽���" << endl;
	else if(max <= '9') cout << "ʮ����" << endl;
	else cout << "ʮ������" << endl;

	return 0;
}

