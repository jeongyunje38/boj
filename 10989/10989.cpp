#include <iostream>

#define size 10001

int arr[size] = {0, };

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, temp;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> temp;
        arr[temp]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            continue;
        
        for (int j = 0; j < arr[i]; j++)
            std::cout << i << "\n";
    }

    return 0;
}