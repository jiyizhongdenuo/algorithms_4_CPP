#include"MyString.h"

CMyString::CMyString()
{
    m_str=new char('\0');
}
CMyString::~CMyString()
{
    std::cout<<"delete m_str!";
    delete []m_str;

}
CMyString::CMyString(size_t length,char ch)
{
    m_str=new char[length+1];
    for(size_t i=0;i<length;i++)
    {
        m_str[i]=ch;
    }
    m_str[length]='\0';
}
const char *CMyString::CStr() const
{
    return m_str;
}