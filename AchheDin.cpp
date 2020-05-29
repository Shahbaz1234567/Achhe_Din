#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,p,i;
//int arr[n];
int arr_count[1000000];
cin>>p;
while(p--)
{
	int n;
	cin>>n;
	for(int i=0;i<1000000;i++)

	
			 arr_count[i]=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr_count[arr[i]]++;
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr_count[arr[i]]==1)
		{
			cout<<arr[i]<<endl;
			
		}
	}

		
	
}
	



}
