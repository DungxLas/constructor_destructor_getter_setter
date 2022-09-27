//
//  PhanSo.hpp
//  constructor_destructor_getter_setter
//
//  Created by PHẠM HÙNG DŨNG on 27/09/2022.
//

#ifndef PhanSo_hpp
#define PhanSo_hpp

#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
    int tu, mau;
public:
    PhanSo(void); //Ham khoi tao mac dinh
    PhanSo(int, int); //Ham khoi tao 2 tham so
    PhanSo(int); //Ham khoi tao 1 tham so
    PhanSo(const PhanSo &); //Ham khoi tao sao chep
    ~PhanSo(void); //Ham huy
    
    void Nhap();
    void Xuat();
    PhanSo Cong(PhanSo);
    
    int Getter_Tu();
    int Getter_Mau();
    void Setter_Tu(int);
    void Setter_Mau(int);
};

#endif /* PhanSo_hpp */
