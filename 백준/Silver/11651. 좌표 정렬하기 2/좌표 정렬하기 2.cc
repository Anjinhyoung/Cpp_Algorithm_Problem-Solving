#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num; std::cin >> num;
    
    std::vector<std::pair<int, int>> vec;

    for (int i = 0; i < num; i++) 
    {
        int a, b; std::cin >> a >> b;
        vec.push_back({ b,a });
    }

    std::sort(vec.begin(), vec.end());

    for (int i = 0; i < num; i++) std::cout << vec[i].second << ' ' << vec[i].first << '\n';
}