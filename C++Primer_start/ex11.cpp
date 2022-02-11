#include<iostream>
using namespace std;

int main()
{
    int num1=0,num2=0;
    int num=0;
    cout << "please enter 2 numbers:" << endl;
    cin >> num1 >> num2;
    num=num1+1;
    while(num > num1 && num < num2)
    {
        cout << num << endl;
        num ++;
    }

    system("pause");

    return 0;
}