//
//  PhanSo.cpp
//  constructor_destructor_getter_setter
//
//  Created by PHẠM HÙNG DŨNG on 27/09/2022.
//

#include "PhanSo.hpp"
#include <math.h>

//Ham khoi tao mac dinh
PhanSo::PhanSo(void)
{
    tu = 0;
    mau = 1;
}

//Ham khoi tao 2 tham so
PhanSo::PhanSo(int a, int b)
{
    tu = a;
    mau = b;
}

//Ham khoi tao 1 tham so
PhanSo::PhanSo(int a)
{
    tu = a;
    mau = 1;
}

//Ham khoi tao sao chep
PhanSo::PhanSo(const PhanSo &a)
{
    tu = a.tu;
    mau = a.mau;
}

//Ham huy
PhanSo::~PhanSo(void)
{
    //Rong do khong co con tro
}

void PhanSo::Nhap()
{
    cout << "\nNhap tu so: ";
    cin >> tu;
    cout << "\nNhap mau so: ";
    cin >> mau;
}

void PhanSo::Xuat()
{
    cout << tu << "/" << mau << endl;
}

int PhanSo::Getter_Tu()
{
    return tu;
}

int PhanSo::Getter_Mau()
{
    return mau;
}

void PhanSo::Setter_Tu(int ts)
{
    tu = ts;
}

void PhanSo::Setter_Mau(int ms)
{
    mau = ms;
}

PhanSo PhanSo::Cong(PhanSo ps)
{
    PhanSo Tong;
    
    Tong.tu = tu * ps.mau + mau * ps.tu;
    Tong.mau = mau * ps.mau;
    
    return Tong;
}
