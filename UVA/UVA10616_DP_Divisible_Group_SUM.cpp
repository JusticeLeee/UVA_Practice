#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,a,n,m,w[1005],v[1005];
    cin>>c;
    while(c--){
        int dp[30]={};
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>v[i]>>w[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=30;j>=w[i];j--){
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
            }
        }
        cin>>m;
        int answer=0;
        while(m--){
            cin>>a;
            //cout<<"A:"<<dp[a]<<endl;;
            answer+=dp[a];
        }
        cout<<answer<<endl;
    }


}
