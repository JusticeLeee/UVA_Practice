
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,count;
	string country[2000];
	string name;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>country[i];
			getline(cin,name);
		}
		sort(country,country+n);
		
		for(int i=0;i<n;i++){
			count=0;
			cout<<country[i];
			for(int j=i;j<n;j++){
				if (country[i]==country[j]){
					count++;
				}
				else if(country[i]!=country[j]){
					i=j-1;
					break;
				}
				if(j==n-1) i=j;
			}
			cout<<" "<<count<<endl;
	}
	



}
