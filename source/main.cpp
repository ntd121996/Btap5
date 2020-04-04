#include "tuyensinh.h"
#include "khoia.h"
#include "khoib.h"
#include "khoic.h"

void displayScreen()
{
    cout << "1.Nhap Thong Tin Moi"; cout << endl;
    cout << "2.Tim Kiem Theo Loai"; cout << endl;
    cout << "3.Hien Thi Thong Tin Ve Danh Sach"; cout << endl;
    cout << "4.Hien Thi Trung Tuyen"; cout << endl;
    cout << "5.Thoat Chuong Trinh"; cout << endl;
}
void displayChoice()
{
    cout << "1.Nhap Thong Tin Cho Khoi A"; cout << endl;
    cout << "2.Nhap Thong Tin Cho Khoi B"; cout << endl;
    cout << "3.Nhap Thong Tin Cho Khoi C"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void ClearScreen()
{
    cout << string( 6, '\n');
}

int main ( int argc, char **argv )
{
    TuyenSinh tuyenSinh;
    uint menuChoice, inputChoice;
    string soBaoDanh;
    bool working = true;
    do
    {
        ClearScreen();
        displayScreen();
        menuChoice = 0;
        cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
            ClearScreen();
            displayChoice();
            inputChoice = 0;
            cin >> inputChoice;
            ThiSinh *newSinhvien;
            if(inputChoice == 1)
            {
                newSinhvien = new KhoiA();
            }
            else if(inputChoice == 2)
            {
                newSinhvien = new KhoiB();
            }
            else if(inputChoice == 3)
            {
                newSinhvien = new KhoiC();
            }
            else
            {
                break;
            }
            tuyenSinh.input(newSinhvien);
            break;
        case 2:
            cin.ignore();
            cout << "- Nhap So Bao Danh Can Tim Kiem: " << endl;
            cin >> soBaoDanh;
            tuyenSinh.find(soBaoDanh);
            break;
        case 3:
            cout << "- Danh Sach Thi Sinh: " << endl;
            tuyenSinh.output();
            break;
        case 4:
            cout << "- Danh Sach Thi Sinh Trung Tuyen: " << endl;
            tuyenSinh.outputPass();
            break;
        case 5:
            working = false;
            break;
        default:
            working = false;
            break;
        }
        cin.ignore();
        cout << "- Enter to continue... ";
        cin.get();
        ClearScreen();
        cout << " ======================\n";
    }
    while(working);

    return 0;
}