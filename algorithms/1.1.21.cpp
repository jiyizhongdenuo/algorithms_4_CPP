#include<iostream>
#include<iomanip>
#include<cstdio>

class Cperson
{   
public:
    void OutNew();
    void PrintS();
    static int num;
private:
    std::string name="";
    int times=10;
    int hit=10;
    int score=100;
};
int Cperson::num=0;

int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<setiosflags(std::ios::fixed)<<std::setprecision(3);
    Cperson *class1=new Cperson[100];
    char YON='n';
    do
    {
        class1->OutNew();
        cout<<"Whether to continue typing?\ny or n:\n";
        YON=cin.get();
        cin.ignore(1000,'\n');
    }while(YON=='y');
    cout<<"name\ttimes\thit\tscore"<<endl;
    for(int i=0;i<Cperson::num;i++)
    {
        class1->PrintS();
    }
    delete []class1;
    return 0;
}
void Cperson::OutNew()
{
    using namespace std;
    cout<<"name:"<<endl;
    getline(cin,name);
    cout<<"times and hit:"<<endl;
    cin>>times>>hit;
    cin.ignore(1000,'\n');
    Cperson::num++;
}
void Cperson::PrintS()
{
    using std::cout;using std::endl;
    cout<<name<<"\t"<<times<<"\t"<<hit<<"\t"<<score<<endl;
}
