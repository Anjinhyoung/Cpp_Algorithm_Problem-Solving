#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, num3;
    std::cin >>  num;

    std::vector<std::pair<int, int>> vec;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2 >> num3;
        vec.push_back(std::make_pair(num2, num3));
    }
    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < num; i++) std::cout << vec[i].first << " " << vec[i].second << "\n";

}