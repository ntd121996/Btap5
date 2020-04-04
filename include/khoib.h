#ifndef _H_KHOI_B_H
#define _H_KHOI_B_H
#include "thisinh.h"

class KhoiB : public ThiSinh
{
private:
    double diemToan;
    double diemSinh;
    double diemHoa;
public:
    KhoiB(/* args */);
    ~KhoiB();
    void input();
    void output();
    bool isPass();
};







#endif // _H_KHOI_B_H