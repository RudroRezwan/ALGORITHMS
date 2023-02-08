#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *a,int n,int item)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==item )return i;
    }
    return -1;
}
int main ()
{

    int n;
    cin>>n;



    srand(time(0));

    int *p=new int [n];
    for(int i=0; i<n; i++)
    {
        p[i]=rand()%10000;
    }
    for(int i=0; i<n; i++)
    {

        cout<<p[i]<<" ";
    }
    int index=linearSearch(p,n,100);
    if(index==-1)cout<<"not found"<<endl;
    else
        cout<<"found in"<<index<<endl;

    return 0;
}
