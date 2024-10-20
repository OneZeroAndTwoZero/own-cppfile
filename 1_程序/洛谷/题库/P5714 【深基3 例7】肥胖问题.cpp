#include<bits/stdc++.h>
using namespace std;

double m,h,bmi;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> m >> h;
    bmi = m / h / h;
    if(bmi < 18.5){
        cout << "Underweight\n";
    }else if(bmi < 24){
        cout << "Normal\n";
    }else{
        cout << bmi << endl;
        cout << "Overweight\n";
    }

    return 0;
}