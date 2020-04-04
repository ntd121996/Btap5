#include "khoia.h"
KhoiA::KhoiA(/* args */)
{
}

KhoiA::~KhoiA()
{
}
void KhoiA::input()
{
    ThiSinh::input();
    cout << "- Nhap Diem Toan: " << endl;
    cin >> this->diemToan;
    cout << "- Nhap Diem Ly: " << endl;
    cin >> this->diemLy;
    cout << "- Nhap Diem Hoa: " << endl;
    cin >> this->diemHoa;
    this->tongDiem = this->diemToan + this->diemLy + this->diemHoa;
}
void KhoiA::output()
{
    ThiSinh::output();
    cout << "- Diem Toan/Ly/Hoa: " << this->diemToan << "/"
    << this->diemLy << "/"
    << this->diemHoa << endl;
}
bool KhoiA::isPass()
{
    if(this->tongDiem >=15) 
    {
        return true;
    }
    else
    {
        return false;
    }
}