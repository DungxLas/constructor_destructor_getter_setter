//
//  Diem.cpp
//  constructor_destructor_getter_setter
//
//  Created by PHẠM HÙNG DŨNG on 27/09/2022.
//

#include "Diem.hpp"
#include <math.h>

//Ham khoi tao mac dinh
Diem::Diem(void)
{
    x = y = 0;
}

//Ham khoi tao tham so
Diem::Diem(int a, int b)
{
    x = a;
    y = b;
}

//Ham khoi tao sao chep
Diem::Diem(const Diem &a)
{
    x = a.x;
    y = a.y;
}

//Ham huy
Diem::~Diem(void)
{
    //Rong do khong co con tro
}

void Diem::Nhap()
{
    cout << "\nNhap hoanh do: ";
    cin >> x;
    cout << "\nNhap tung do: ";
    cin >> y;
}

void Diem::Xuat()
{
    cout << "(" << x << "," << y << ")";
}

int Diem::Getter_X()
{
    return x;
}

int Diem::Getter_Y()
{
    return y;
}

void Diem::Setter_X(int hd)
{
    x = hd;
}

void Diem::Setter_Y(int td)
{
    y = td;
}

float Diem::TinhKhoangCach(Diem d)
{
    return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}
