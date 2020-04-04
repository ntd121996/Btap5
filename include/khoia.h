#ifndef _H_KHOI_A_H
#define _H_KHOI_A_H
#include "thisinh.h"

class KhoiA : public ThiSinh
{
private:
    double diemToan;
    double diemLy;
    double diemHoa;
public:
    KhoiA(/* args */);
    ~KhoiA();
    void input();
    void output();
    bool isPass();
};








#endif // _H_KHOI_A_H