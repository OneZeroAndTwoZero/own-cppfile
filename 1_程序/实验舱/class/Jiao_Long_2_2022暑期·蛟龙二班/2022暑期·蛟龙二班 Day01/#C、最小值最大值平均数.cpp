#include<bits/stdc++.h>
using namespace std;

int num,numbers[100005];

int main(){
	cin >> num;
	for(int i = 0;i < num;i++){
		int a;
		cin >> a;
		numbers[i] = a;
	}
	int sum = 0,min = 0x3f3f3f3f,max = -0x3f3f3f3f;
	for(int j = 0;j < num;j++){
		sum += numbers[j];
		if(numbers[j] > max){
			max = numbers[j];
		}
		if(numbers[j] < min){
			min = numbers[j];
		}
	}
	double avg = (double)sum / num;
	cout << "min:" << min << endl;
	cout << "max:" << max << endl;
	printf("avg:%.2lf\n",avg);
	
	return 0;
} 
