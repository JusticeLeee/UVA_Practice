#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[105][105]={0};
    int col[105][105],sum,max=-100000;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            col[i][j]=col[i-1][j]+a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            sum=0;
            for(int k=1;k<=n;k++){
                sum+=col[j][k]-col[i-1][k];
                if(max<sum) max=sum;
                if(sum<0) sum=0;
            }
        }
    }
    cout<<max<<endl;

}
