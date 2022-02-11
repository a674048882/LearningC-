#include <iostream>
#include "Sales_item.h"
using namespace std;

int main ()
{
    Sales_item book;
    cout << "请输入销售记录：" << endl;
    while (cin >> book)
    {
        cout << "ISBN、售出本数、销售额和平均售价为 " << book << endl;
    }
    return 0;
}