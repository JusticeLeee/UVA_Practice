#include <iostream>
using namespace std;

int check(char array[200][200],int a,int b){
    int count=0;
    if (array[a][b]=='*') return -1;
    for(int i=a-1;i<=a+1;i++){
        for(int j=b-1;j<=b+1;j++){
            if(array[i][j]=='*')count++;
        }
    }
    return count;
}
int main(){
    int r,n;
    int k=1;
    int g=0;
    while(cin>>r>>n){
        if(r==0&&n==0) return 0;
        if(g++) cout<<endl;
        printf("Field #%d:\n",k++);
        char arr[200][200];
        for(int i=1;i<=r;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }
        int flag=0;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=n;j++){
                 flag = check(arr,i,j);
                 if(flag==-1) cout<<"*";
                 else cout<<flag;
            }cout<<endl;
        }
    }
}
