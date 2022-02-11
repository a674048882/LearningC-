#include<iostream>
using namespace std;

int main ()
{
    int sum = 0, value = 0;
    cout << "请输入一串数字，并通过按ctrl+z表示结束" << endl;
    for ( ; cin >> value ; )
    {
        sum += value;
    }
    cout << "输入的数字之和为：" << sum << endl;

    system("pause");
    return 0;

}