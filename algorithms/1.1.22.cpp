#include<iostream>
using namespace std;
static int times=0;
template<int N>
int rank1(int &key,int (&a)[N],int lo, int hi)
{
    cout<<times++<<"lo:"<<lo<<"   hi:"<<hi<<endl;
    if(lo>hi) return -1;
    int mid=lo+(hi-lo)/2;
    if (key<a[mid]) return rank1(key,a,lo,mid-1);
    else if(key>a[mid])return rank1(key,a,mid+1,hi);
    else return mid;
}
template<int N>
int rank1(int &key,int (&a)[N])
{
    return rank1(key,a,0,N);
}
int main()
{
    using std::cout; using std::endl;using std::cin;
    int a[10] = { 1, 2, 3, 4, 6, 7, 8, 9, 12 };
    int key=3;
    int outcome;
    if((outcome=rank1(key,a))==-1)
    {
        cout<<"not found!";
    }
    else
        cout<<"result:"<<outcome<<endl;
    return 0;
}