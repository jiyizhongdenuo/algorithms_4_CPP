#include<iostream>
static int times=0;
static int times2=0;
double ** matrix;

double binomial(int N,int K,double P)
{
    times++;
    // std::cout<<times<<"N:"<<N<<"  "<<"K:"<<K<<"\t";
    if(N==0&&K==0)return 1.0;
    if(N<0||K<0)return 0;
    return (1.0-P)*binomial(N-1,K,P)+P*binomial(N-1,K-1,P);
}

template <int N,int K>
void New(double a[N][K])
{
    matrix=a;
}
double bin (int N,int K,double P)
{
    if(times2==0)
    {   
        double **mat ; 
        mat = new double* [N];
        for(int j=0;j<N;j++)
        {
            mat[j]=new double [K];
        }
        matrix=mat;
    }
    times2++;
    if(N==0&&K==0)return 1.0;
    if(N<0||K<0)return 0;
    if(*(*(matrix+N)+K)==-1)
    {
        *(*(matrix+N)+K)=(1.0 - P) * bin(N - 1, K, P) + P * bin(N - 1, K - 1, P);
    }
    return *(*(matrix+N)+K);
}
int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<binomial(10,5,0.25)<<"\n"<<times<<endl;
    return 0;
}