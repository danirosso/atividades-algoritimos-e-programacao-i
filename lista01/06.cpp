#include <iostream>

int main(void)
{
    using namespace std;
    int a, b, c;
    cout << "Insira o valor a: ";
    cin >> a;
    cout << "Insira o valor b: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "A: " << a << "\nB: " << b ;
    return 0;
}
