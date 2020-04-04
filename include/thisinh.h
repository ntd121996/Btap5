#ifndef _H_THI_SINH_H
#define _H_THI_SINH_H
#include <iostream>
#include <string>
using namespace std;
class ThiSinh
{
public:
    string soBaoDanh;
protected:
    string hoTen;
    string diaChi;
    bool   uuTien;
    double    tongDiem;
public:
    ThiSinh(/* args */);
    virtual ~ThiSinh();
    virtual void input();
    virtual void output();
    virtual bool isPass();
};






#endif // _H_THI_SINH_H