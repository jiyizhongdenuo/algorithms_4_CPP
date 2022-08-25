#include<iostream>
#include<cstring>

int main(int argc,char **argv)
{

    std::cout<<argc<<std::endl;
    std::cout<<sizeof(*argv)<<std::endl<<strlen(*argv)<<std::endl;
    for(int j=0;j<strlen(*argv);j++){std::cout<<*(*argv+j);}
    std::cout<<std::endl;
    for(int i=0;i<argc;i++)
        {std::cout<<**(argv+i)<<std::endl;}
}