#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item trans1,trans2;
    cout << "����������ISBN��ͬ�����ۼ�¼:" << endl;
    cin >> trans1 >> trans2;
    if (compareIsbn(trans1, trans2))
    {
        cout << "������Ϣ:ISBN���۳����������۶��ƽ���ۼ�Ϊ "<< trans1 + trans2 << endl;
    }
    else
    {
        cout << "�������ۼ�¼��ISBN��ͬ" << endl;
    }
    return 0;
}