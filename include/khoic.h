#ifndef _H_KHOI_C_H
#define _H_KHOI_C_H
#include "thisinh.h"

class KhoiC : public ThiSinh
{
private:
    double diemVan;
    double diemSu;
    double diemDia;
public:
    KhoiC(/* args */);
    ~KhoiC();
    void input();
    void output();
    bool isPass();
};








#endif // _H_KHOI_C_H