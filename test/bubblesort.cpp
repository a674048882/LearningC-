#include <iostream>
using namespace std;

void print(int q[], int n)
{//´òÓ¡º¯Êý
    for (int i=0; i<n; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

void bubblesort(int q[],int n)
{//Ã°ÅÝÅÅÐò
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<=n-i-1;j++)
        {
            if (q[j] > q[j+1])
            {
                int temp = q[j];
                q[j] = q[j+1];
                q[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[8]={10,1,2,7,5,3,8,8};
    print(arr,8);
    bubblesort (arr,8);
    print(arr,8);
    system("pause");
    return 0;
}