#include <iostream>
using namespace std;


void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a,b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B; ";
    cin >> b;
    cout << "Before swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;;
    swap(&a, &b);;
    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}