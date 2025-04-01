#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num; std::cin >> num;
    
    std::vector<std::pair<int, std::string>> vec;

    for (int i = 0; i < num; i++) 
    {
        int a; std::string b; std::cin >> a >> b;

        vec.push_back({ a,b });
    }

    std::stable_sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) 
        {
            // second는 무시
            return a.first < b.first;
        });

    for (int i = 0; i < num; i++)  std::cout << vec[i].first << ' ' << vec[i].second << '\n';
}