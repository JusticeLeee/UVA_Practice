#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,sum,max;
    while(cin>>n){
        if(n==0) break;
        sum=0;max=0;
        while(n--){
            cin>>t;
            sum+=t;
            if(sum<0) sum=0;
            if(sum>max) max=sum;
        }
        if(max>0) printf("The maximum winning streak is %d.\n",max);
        else cout<<"Losing streak."<<endl;

    }

}
