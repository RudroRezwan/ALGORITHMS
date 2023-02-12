#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout("10ksortedprint.txt");
    srand(time(0));
    int n=10000;
    for(int i=0;i<n;i++)
    {
        //cout<<rand()%100+1<<endl;
        //for showing the output in console
         fout<<rand()%10000+1<<endl;
         //for showing the output in readwritefile
    }
    return 0;
}
