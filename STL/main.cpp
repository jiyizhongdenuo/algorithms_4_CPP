#include<iostream>
#include"..\\include\\MyString.h"
using namespace std;

int main()
{
    CMyString str1(5,'a');
    std::cout<<str1.CStr();
}