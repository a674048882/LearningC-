#include<iostream>
using namespace std;

int main ()
{
    int sum = 0, value = 0;
    cout << "������һ�����֣���ͨ����ctrl+z��ʾ����" << endl;
    for ( ; cin >> value ; )
    {
        sum += value;
    }
    cout << "���������֮��Ϊ��" << sum << endl;

    system("pause");
    return 0;

}