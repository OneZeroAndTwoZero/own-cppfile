// #include<bits/stdc++.h>
// using namespace std;

long long sum(int A[] , int N){
    long long res = 0,cur = 1;
    for(int i = 0;i < N;i ++){
        res += cur * A[i];
        cur *= -1;
    }
    return res;
}

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("../data.in","r",stdin);
//     freopen("../data.out","w",stdout);
// #endif
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     return 0;
// }