#include"MyString.h"

CMyString::CMyString()
{
    m_str=new char('\0');
}
CMyString::~CMyString()
{
    delete []m_str;
}
const char *CMyString::CStr() const
{
    return m_str;
}