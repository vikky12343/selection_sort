/* C++ Program - Selection Sort */

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

clock_t t;
void generate (int *a,int n)
{
int i;
for(i=0;i<n;i++)
a[i]=rand();
}
int main()
{

	int n, a[500000], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>n;
	generate(a,n);
	for(i=0;i<n;i++)
     cout<<a[i]<<" ";

    t=clock();


	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	t=clock()-t;
    cout<<"\ntime is :"<<t;


}
