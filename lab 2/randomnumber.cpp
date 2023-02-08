#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//stdlib.h-->random number()
//srand()    //seeds


int main()
{
    srand(time(0));
    for(int i=0; i<1000; i++)
        cout<<(rand()%10000)+1<<endl;
    return 0;
}
