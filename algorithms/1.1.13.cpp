#include<iostream>

template<int N,int M>
int ** Transpose(int ** ,int (&a)[N][M]);

void PrintNM(int **);
int main()
{
    using std::cout; using std::endl;using std::cin;
    int a[2][3]={{1,2,3},{4,5,6}};
    int **temp;
    Transpose(temp,a);
    return 0;
}

template<int N,int M>
int ** Transpose(int ** temp,int (&a)[N][M])
{
    std::cout<<N<<"."<<M<<std::endl;
    temp=new int *[M];
    for(int i=0;i<M;i++)
    temp[i]=new int[N];
    for(int i=0;i<N;i++)
    {    
        for(int j=0;j<M;j++)
        {
            temp[j][i]=a[i][j];
        }
    }
    for(int i=0;i<M;i++)
    {   
        for(int j=0;j<N;j++)
            std::cout<<i<<","<<j<<":"<<temp[i][j]<<"\t";
        std::cout<<std::endl;
    }
    for(int i=0;i<M;i++)
    delete []temp[i];
    delete []temp;
    return temp;
}
