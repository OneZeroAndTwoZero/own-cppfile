#include<bits/stdc++.h>
using namespace std;

double w,h,bmi;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf",&w,&h);
    bmi = w / (h * h);
    if(bmi > 25){
        printf("Overweight\n");
    }else if(bmi >= 18.5){
        printf("Normal weight\n");
    }else{
        printf("Underweight\n");
    }

    return 0;
}