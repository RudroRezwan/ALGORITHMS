#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int size;
    cin>>size;
    int *array=new int [size];
    for(int i=0;i<size;i++)
    {
        array[i]=10;
    }
    for(int i=0;i<size;i++){

        cout<<array[i]<<" ";
    }
    return 0;
}
