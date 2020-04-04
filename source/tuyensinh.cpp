#include "tuyensinh.h"
TuyenSinh::TuyenSinh(/* args */)
{

}
TuyenSinh::~TuyenSinh()
{

}
void TuyenSinh::input(ThiSinh *thisinh)
{
    thisinh->input();
    this->HoSoThiSinh.insert(pair<string,ThiSinh*>(thisinh->soBaoDanh,thisinh));
    
}
void TuyenSinh::output()
{
    for(auto it : this->HoSoThiSinh)
    {
        it.second->output();
        cout << string(2,'\n');
        cout << "==============\n";
    }
}
void TuyenSinh::outputPass()
{
    for(auto it : this->HoSoThiSinh)
    {
        if(it.second->isPass())
        {
            it.second->output();
            cout << string(2,'\n');
            cout << "==============\n";
        }
    }
}
void TuyenSinh::find(string sobaodanh)
{
    map<string,ThiSinh*>::iterator it;
    it = this->HoSoThiSinh.find(sobaodanh);
    if( it->first == sobaodanh && it != this->HoSoThiSinh.end())
    {
        it->second->output();
    }
}