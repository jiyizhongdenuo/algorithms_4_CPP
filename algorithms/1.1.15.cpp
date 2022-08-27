#include<iostream>

template<int N>
int * histogram(int M,int (&a)[N]);
int main()
{
    using std::cout; using std::endl;using std::cin;
    int a[10]={1,3,4,2,2,5,5,6,9,8};
    int M=5;
    int *num=histogram(M,a);
    for(int i=0;i<M;i++)
    {
        cout<<i<<":"<<*(num+i)<<"\t";
    }
    cout<<endl;
    delete []num;
    return 0;
}

template<int N>
int * histogram(int M,int (&a)[N])
{
    int *temp=new int[M];
    for(int i=0;i<M;i++)
    {
        int times=0;
        for(int j=0;j<N;j++)
        {
            if (a[j]==i)
                times++;
        }
        temp[i]=times;
    }
    return temp;
}