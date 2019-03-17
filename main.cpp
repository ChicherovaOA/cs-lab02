#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "A / B = " << a / b << '\n'
<<<<<<< HEAD
    << "Max = ";
    if (a > b)
=======
    << "Min = ";
    if (a < b)
>>>>>>> code:min
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
<<<<<<< HEAD
=======

>>>>>>> code:min
}
