#include "thisinh.h"

ThiSinh::ThiSinh(/* args */)
{
}

ThiSinh::~ThiSinh()
{
}
void ThiSinh::input()
{
    cin.ignore();
    cout << "- Nhap Ho Ten: " << endl;
    fflush(stdin);
    getline(cin,this->hoTen);
    cout << "- Nhap Dia Chi: " << endl;
    fflush(stdin);
    getline(cin,this->diaChi);
    cout << "- Nhap So Bao Danh: " << endl;
    fflush(stdin);
    getline(cin,this->soBaoDanh);
    // cout << "- Nhap Uu Tien: " << endl;
    // cin >> this->uuTien;
}
void ThiSinh::output()
{
    cout << "- Ho Ten: " << this->hoTen << endl;
    cout << "- Dia Chi: " << this->diaChi << endl;
    cout << "- So Bao Danh: " << this->soBaoDanh << endl;
    // cout << "- Uu Tien: " << this->uuTien << endl;
}
bool ThiSinh::isPass()
{
    return true;
}