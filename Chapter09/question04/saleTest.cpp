#include <iostream>
#include "sale.h"

int main(){
    using namespace SALES;
    Sales sa;
    Sales sb;
    double ar[] = {1.1, 2.2, 3.3};
    setSales(sa, ar, 3);
    showSales(sa);
    setSales(sb);
    showSales(sb);
}