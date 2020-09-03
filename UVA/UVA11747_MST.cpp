#include <bits/stdc++.h>
using namespace std;

int M[1000];

int find(int x){
    if(x==M[x]) return x;
    else{
        M[x]=find(M[x]);
        return M[x];
    }
}


struct edge{
    int a,b,w;
}e[30000];

bool cmp(struct edge a,struct edge b){
    return a.w<b.w;
}
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        vector <int>out;
        for(int i=0;i<m;i++){
            cin>>e[i].a>>e[i].b>>e[i].w;
        }
        sort(e,e+m,cmp);
        //for(int i=0;i<n;i++) cout<<e[i].a<<e[i].b<<e[i].w<<endl;
        for(int i=0;i<n;i++) M[i]=i;

        for(int i=0;i<m;i++){
            //cout<<endl;
            //for(int j=0;j<n;j++)cout<<j<<" "<<M[j]<<endl;
            int u=find(e[i].a),v=find(e[i].b),w=e[i].w;
            //cout<<u<<v<<w<<endl;
            if(u!=v)    M[u]=v;
            else out.push_back(w);
        }
        if(out.empty()){
            cout<<"forest"<<endl;
        }else{
            cout<<out[0];
            for(int i=1;i<out.size();i++){
                cout<<" "<<out[i];
            }
            cout<<endl;
        }
    }
}
