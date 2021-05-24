#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    N % 2 == 1 ? std::cout << "SK" : std::cout << "CY";

    return 0;
}