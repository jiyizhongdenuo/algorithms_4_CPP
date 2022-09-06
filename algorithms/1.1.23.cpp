#include<iostream>
#include<sstream>
template <int N>
int rank1(int &key, int (&a)[N],int lo, int hi)
{
    if(lo>hi) return -1;
    int mid=lo+(hi-lo)/2;
    if(key<a[mid]) return rank1(key,a,lo,mid-1);
    else if(key>a[mid]) return rank1(key,a,mid+1,hi);
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
    cout<<"please into\"+\" or \"-\"\n"<<endl;
    char select=cin.get();
    cin.ignore(1000,'\n');
    cout<<"input key:";
    std::string numb;
    std::istringstream iss;
    getline(cin,numb);
    iss.str(numb);
    int numb1[20];
    for(int i=0;iss>>numb1[i];i++)
    {
        if(select=='+'&&rank1(numb1[i],a)==-1)
        {
            cout<<numb1[i]<<"\t";
        }
        if(select=='-'&&rank1(numb1[i],a)!=-1)
        {
            cout<<numb1[i]<<"\t";
        }
    }
    cout<<endl;

    return 0;
}