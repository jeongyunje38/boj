#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    char temp[3];
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cin >> temp[j];
        
        std::cout << int(temp[0]) + int(temp[2]) - 96 << "\n";
    }

    return 0;
}