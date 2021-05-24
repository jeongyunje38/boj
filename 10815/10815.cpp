#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

bool binary_search(int N, std::vector<int>& S)
{
    auto first = S.begin();
    auto last = S.end();

    while (true)
    {
        auto range_length = std::distance(first, last);
        auto mid_element_index = std::floor(range_length / 2);
        auto mid_element = *(first + mid_element_index);

        if (mid_element == N)
            return true;
        else if (mid_element > N)
            std::advance(last, -mid_element_index);
        else
            std::advance(first, mid_element_index);

        if (range_length == 1)
            return false;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> v;

    int N, temp;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> temp;
        v.emplace_back(temp);
    }

    std::sort(v.begin(), v.end());

    int M;
    std::cin >> M;

    for (int i = 0; i < N; i++)
    {
        std::cin >> temp;
        std::cout << binary_search(temp, v) << " ";
    }

    return 0;
}