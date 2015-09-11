#include <iostream>

int main()
{
    using namespace std;
    int nights = 1000;
    int* pt = new int;
    *pt = 1000;

    cout << "nights value = ";
    cout << nights << ": location " << pt << endl;
    double* pd = new double;
    *pd = 1001.0;

    cout << "double ";
    cout << "value = " << *pd << ": location " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << "; size of *pt  = " << sizeof(*pt) << endl;    
    cout << "size of pd = " << sizeof(pd);
    cout << "; size of *pd  = " << sizeof(*pd) << endl;    

    delete pt;
    delete pd;

    return 0;
}
