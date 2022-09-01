#include<iostream>
#include<cmath>

double Ln(int N);
int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<Ln(6);
    return 0;
}

double Ln(int N)
{
    if(N<=0)return 0;
    int sum=1;
    for(int i=1;i<=N;i++)
    {
        sum*=i;
    }
    std::cout<<sum<<std::endl;
    return std::log10(sum);
}