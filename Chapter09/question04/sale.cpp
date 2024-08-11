#include <iostream>
#include <algorithm>
#include "sale.h"

namespace SALES {

    double avg(double ar[], int n){
        double sum;
        for (int i = 0; i < n; i++)
        {
            sum += ar[i];
        }
        return sum / n;
    }

    double max(double ar[], int n){
        double m = ar[0];
        for (int i = 0; i < n; i++)
        {
            if (m < ar[i])
            {
                m = ar[i];
            }
        }
        return m;
    }

    double min(double ar[], int n){
        double m = ar[0];
        for (int i = 0; i < n; i++)
        {
            if (m > ar[i])
            {
                m = ar[i];
            }
        }
        return m;
    }

    void setSales(Sales & s, const double ar[], int n){
        int i = 0;
        for (i = 0; i < n && i < QUARTERS; i++)
        {
            s.sales[i] = ar[i];
        }
        for (; i < QUARTERS; i++)
        {
            s.sales[i] = 0;
        }
        s.average = avg(s.sales, QUARTERS);
        s.max = max(s.sales, QUARTERS);
        s.min = min(s.sales, QUARTERS);
    }

    void setSales(Sales & s){
        using std::cout;
        using std::cin;
        cout << "Enter 4 double: ";
        for (int i = 0; i < QUARTERS; i++)
        {
            cin >> s.sales[i];
        }
        s.average = avg(s.sales, QUARTERS);
        s.max = max(s.sales, QUARTERS);
        s.min = min(s.sales, QUARTERS);
    }

    void showSales(const Sales & s){
        using std::cout;
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "q" << i << ": " << s.sales[i] << std::endl;
        }
        cout << "average: " << s.average << std::endl;
        cout << "max: " << s.max << std::endl;
        cout << "min: " << s.min << std::endl;
    }

}