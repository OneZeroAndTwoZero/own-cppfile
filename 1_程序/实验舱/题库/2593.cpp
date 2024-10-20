#include<bits/stdc++.h>
using namespace std;

string a[10] =
{{"****.**.**.****"},
{".*..*..*..*..*."},
{"***..*****..***"},
{"***..****..****"},
{"*.**.****..*..*"},
{"****..***..****"},
{"****..****.****"},
{"***..*..*..*..*"},
{"****.*****.****"},
{"****.****..****"}};
string s[15];

int main(){
	int n;
	cin >> n;
	char t = getchar();
	for(int i = 0;i < 5;i++){
		string tem;
		getline(cin,tem);
		for(int j = 0;j < tem.size();j++){
			if((j + 1) % 4 != 0){
				s[j / 4] += tem[j];
			}
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 10;j++){
			if(a[j] == s[i]){
				cout << j;
				break;
			}
		}
	}

	return 0;
}

