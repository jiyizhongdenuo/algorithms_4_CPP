#include<iostream>

int main()
{
    using std::cout; using std::endl;using std::cin;
    int * a= new int[10];
    for(int i=0;i<10;i++)
        a[i]=9-i;
    for(int i=0;i<10;i++)
        a[i]=a[a[i]];
    for(int i=0;i<10;i++)
        cout<<i<<":"<<a[i]<<"\t";
    return 0;
}