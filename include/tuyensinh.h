#ifndef _H_TUYEN_SINH_H
#define _H_TUYEN_SINH_H
#include "thisinh.h"
#include <map>
class TuyenSinh
{
private:
    map<string,ThiSinh*> HoSoThiSinh;
public:
    TuyenSinh(/* args */);
    ~TuyenSinh();
    void input(ThiSinh *thisinh);
    void output();
    void outputPass();
    void find(string sobaodanh);
};



#endif // _H_TUYEN_SINH_H