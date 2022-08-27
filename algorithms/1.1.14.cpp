#include<iostream>

double lg(double N);
int main()
{
    using std::cout; using std::endl;using std::cin;
    double N=100;
    N=Lg(N);
    cout<<"logN:"<<N<<endl;
    return 0;
}

double Lg(double N)
{
    int logN=0;
    while(N>1)
    {
        logN++;
        N/=2;
    }
    return logN;
}