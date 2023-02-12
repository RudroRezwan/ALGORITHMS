#include<bits/stdc++.h>
using namespace std;

void printlist(int *p, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< i<<" " << p[i]<<endl;
    }
}
void sortedprint(int *p,int s)
{
    ofstream fout("10ksortedprint.txt");
    for(int i=0; i<s; i++)
    {
        fout<<p[i]<<endl;}
}

void selectionsort(int *ar, int n)
{
    for(int i=0; i<n; i++)
    {
        int Min=i;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]<ar[Min])
            {
                Min=j;
            }
            swap(ar[Min],ar[i]);
        }
    }
}
int main()
{
    int n=10000;
    ifstream fin("10k.txt");

    int *a  = new int[n];

    for(int i=0; i<n; i++)
    {
        fin>>a[i];
    }

    printlist(a,n);

    selectionsort(a,n);
    cout<<"......................"<<endl;

    printlist(a,n);
    sortedprint(a,n);

    return 0;
}

