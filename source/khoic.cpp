#include "khoic.h"

KhoiC::KhoiC(/* args */)
{
}

KhoiC::~KhoiC()
{
}
void KhoiC::input()
{
    ThiSinh::input();
    cout << "- Nhap Diem Van: " << endl;
    cin >> this->diemVan;
    cout << "- Nhap Diem Su: " << endl;
    cin >> this->diemSu;
    cout << "- Nhap Diem Dia: " << endl;
    cin >> this->diemDia;
    this->tongDiem = this->diemVan + this->diemSu + this->diemDia;
}
void KhoiC::output()
{
    ThiSinh::output();
    cout << "- Diem Van/Su/Dia: " << this->diemVan << "/"
    << this->diemSu << "/"
    << this->diemDia << endl;
}
bool KhoiC::isPass()
{
    if(this->tongDiem >=13.5) 
    {
        return true;
    }
    else
    {
        return false;
    }
}