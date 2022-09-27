//
//  main.cpp
//  constructor_destructor_getter_setter
//
//  Created by PHẠM HÙNG DŨNG on 27/09/2022.
//

#include <iostream>

#include "Diem.hpp"

int main() {
    Diem d1(1, 2);
    Diem d2(5,8);
    Diem d3;
    Diem d4(d1);
    
    cout << "\nd1 = ";
    d1.Xuat();
    cout << "\nd2 = ";
    d2.Xuat();
    cout << "\nd3 = ";
    d3.Xuat();
    cout << "\nd4 = ";
    d4.Xuat();
    
    cout << "\nKhoang cach d1 va d2: " << d1.TinhKhoangCach(d2);
    
    return 0;
}
