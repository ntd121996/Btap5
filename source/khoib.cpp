#include "khoib.h"

KhoiB::KhoiB(/* args */)
{
}

KhoiB::~KhoiB()
{
}
void KhoiB::input()
{
    ThiSinh::input();
    cout << "- Nhap Diem Toan: " << endl;
    cin >> this->diemToan;
    cout << "- Nhap Diem Sinh: " << endl;
    cin >> this->diemSinh;
    cout << "- Nhap Diem Hoa: " << endl;
    cin >> this->diemHoa;
    this->tongDiem = this->diemToan + this->diemSinh + this->diemHoa;
}
void KhoiB::output()
{
    ThiSinh::output();
    cout << "- Diem Toan/Sinh/Hoa: " << this->diemToan << "/"
    << this->diemSinh << "/"
    << this->diemHoa << endl;
}
bool KhoiB::isPass()
{
    if(this->tongDiem >=16) 
    {
        return true;
    }
    else
    {
        return false;
    }
}