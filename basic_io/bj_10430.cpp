#include<iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    int first = (a + b)% c;
    int second = ((a%c) + (b%c))%c;
    int third = (a*b)%c;
    int forth = ((a%c)*(b%c)%c);

    std::cout << first << '\n';
    std::cout << second << '\n';
    std::cout << third << '\n';
    std::cout << forth << '\n';
    
    return 0;
}