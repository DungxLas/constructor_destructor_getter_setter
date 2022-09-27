//
//  Diem.hpp
//  constructor_destructor_getter_setter
//
//  Created by PHẠM HÙNG DŨNG on 27/09/2022.
//

#ifndef Diem_hpp
#define Diem_hpp

#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
    int x, y;
public:
    Diem(void); //Ham khoi tao mac dinh
    Diem(int, int); //Ham khoi tao sao chep
    Diem(const Diem &); //Ham khoi tao sao chep
    ~Diem(void); //Ham huy
    
    void Nhap();
    void Xuat();
    float TinhKhoangCach(Diem);
    
    int Getter_X();
    int Getter_Y();
    void Setter_X(int);
    void Setter_Y(int);
};

#endif /* Diem_hpp */
