#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,k,a[500];
	cin >> n;
	while(n--)
	{
		cin >>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+k);
		int sum[k]={0};
		for(int i=0;i<k;i++){
			for(int j=0;j<k;j++)
			{
				sum[i] =sum[i]+abs(a[i]-a[j]);
			}
		}
		int s=sum[0];
		for(int i=1;i<k;i++){
			if(s>sum[i]){
				s=sum[i];
			}
		}
		cout<<s<<endl;
	}

}


