#include<cstdio>
#include <bits/stdc++.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
#define N 1000
#define MW 31

using namespace std;

struct Object
{
    int p, w;
}object[N];

int main()
{
    int Case;
    scanf("%d", &Case);

    while (Case--)
    {
        int n, g, i, w;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d%d", &object[i].p, &object[i].w);

        int dp[MW] = {}, ans = 0;
        for (i = 0; i < n; i++)
        /*for(w=0;w<=30;w++){
            if(w<object[i].w) continue;
            dp[w] = MAX(dp[w], dp[w - object[i].w] + object[i].p);
            cout<<"i="<<i<<" w="<<w<<":"<<dp[w]<<endl;
        }*/
            for (w = MW - 1; w >= object[i].w; w--){//要由小到大才不會覆蓋到前面的格子
                dp[w] = MAX(dp[w], dp[w - object[i].w] + object[i].p);
            cout<<"i="<<i<<" w="<<w<<":"<<dp[w]<<endl;
            }

        scanf("%d", &g);
        for (i = 0; i < g; i++)
        {
            scanf("%d", &w);
            ans += dp[w];
        }
        printf("%d\n", ans);
    }

    return 0;
}
