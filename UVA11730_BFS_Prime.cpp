#include<iostream>
#include<cstdio>
#include<queue>
#define N 1001
using namespace std;

int prime[N];
int bfs(int s, int t);
int main()
{
    //建質數表
    int s, t, i, j;
    prime[0]=2;prime[1]=3;
    int pc=2;

    for(int i=3;i<=1000;i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0) break;
            if(j==i/2) prime[pc++]=i;
        }
    }
    for(int i=0;i<200;i++) cout<<prime[i]<<endl;
    int Case = 0;
    while (scanf("%d%d", &s, &t) && s&&t)
    {
        printf("Case %d: ",++Case);
        if (s == t)
            puts("0");
        else
            printf("%d\n", bfs(s,t));
    }

    return 0;
}
int bfs(int s, int t)
{
    int count[1001]={};
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		for(int i=0;prime[i]<now;i++){
			if(!(now%prime[i])){
				int temp=now+prime[i];
				if(count[temp]) continue;
				if(temp==t) return count[now]+1;
				else if(temp<t){
					count[temp]=count[now]+1;
					q.push(temp);
				}
				else break;
			}
		}
	}
	return -1;
}
