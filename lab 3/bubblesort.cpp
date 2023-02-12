#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}

void bubblesort(int *x, int n)
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]>ar[i+1])
            {
                swap(ar[i],ar[i+1]);
            }
        }
    }
}
int main()
{
    int n=20000;
   ifstream fin("20k.txt");

   int *a  = new int[n];

   for(int i=0; i<n; i++)
   {
       fin>>a[i];
   }


   printlist(a,n);
   bubblesort(a,n);
   cout<<"......................"<<endl;
   printlist(a,n);
   return 0;
}

