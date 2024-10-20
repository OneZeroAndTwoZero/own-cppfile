#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    scanf("%d",&n);
    if(n > 0){
        printf("positive\n");
    }else if(!n){
        printf("zero\n");
    }else{
        printf("negative\n");
    }

    return 0;
}