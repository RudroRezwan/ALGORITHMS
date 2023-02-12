#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}

void insertionsort(int *x, int n)
{
    for(int j=1; j<n; j++)
    {
        int value=ar[j];
        int i=j-1;
        while(i>=0 & ar[i]>value)
        {
            swap(ar[i],ar[i+1]);
            i=i-1;
        }
        ar[i+1]=value;
    }
}
int main()
{
    int n=5000;
   ifstream fin("5k.txt");

   int *a  = new int[n];

   for(int i=0; i<n; i++)
   {
       fin>>a[i];
   }

   printlist(a,n);
   insertionsort(a,n);
   cout<<"......................."<<endl;
   printlist(a,n);

   return 0;
}

