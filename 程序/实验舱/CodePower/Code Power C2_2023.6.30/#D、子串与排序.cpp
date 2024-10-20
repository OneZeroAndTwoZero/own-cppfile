#include<bits/stdc++.h>
using namespace std;

int n;
string a[1005];

bool cmp(string a,string b){
    if(b.find(a) != b.npos) return 1;
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    sort(a,a + n,cmp);
    for(int i = n - 1;i > 0;i --){
        if(a[i].find(a[i - 1]) == a[i].npos){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for(int i = 0;i < n;i ++){
        cout << a[i] << "\n";
    }

	return 0;
}
