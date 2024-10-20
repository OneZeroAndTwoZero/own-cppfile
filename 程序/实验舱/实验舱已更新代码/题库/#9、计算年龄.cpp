#include<bits/stdc++.h>
using namespace std;

int years_elder_sister,years_young_sister,years_brother;

int main(){
	cin >> years_elder_sister;
	years_young_sister = years_elder_sister - 2,years_brother = years_elder_sister + 3;
	cout << years_young_sister << " " << years_brother << endl;
	
	return 0;
} 
