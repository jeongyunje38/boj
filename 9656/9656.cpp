#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    N % 2 == 1 ? std::cout << "CY" : std::cout << "SK";

    return 0;
}