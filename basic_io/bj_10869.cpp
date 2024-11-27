#include<iostream>

int main()
{
    int n1, n2;

    std::cin >> n1 >> n2;
    
    int a = n1 + n2;
    int b = n1 - n2;
    int c = n1 * n2;
    int d = n1 / n2;
    int e = n1 % n2;

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';

    return 0;
}