#include<bits/stdc++.h>
using namespace std;
struct pht{
    string name;
    int tall;
    bool operator <(const pht &a)const{
        if (tall!=a.tall)return tall>a.tall;
        return name<a.name;
    }
}a[10001];

int main(){
    int n,k;
    int i,j,s = 0,s1=0;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>a[i].name>>a[i].tall;
    sort(a,a+n);
    for(i=0;i<k;i++){ 
        if(i==0)s += n / k + n % k;
        else s += n / k; 
        if((s-s1)%2==0)j=s;
        else j=s-1;
        for(j = j;j>s1;j -= 2)cout<<a[j-1].name<<' ';
        for(j=s1;j<s;j+=2){
            cout<<a[j].name<<' ';
            if(j<s-2)cout<<"";
            else puts("");
        }
		s1=s;
    }return 0;
}
