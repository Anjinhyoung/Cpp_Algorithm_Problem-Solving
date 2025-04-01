#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num; std::cin >> num;
    std::vector<std::pair<int, std::string>> vec;

    std::string str;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> str;
        vec.push_back({ str.size(), str });
    }

    std::sort(vec.begin(), vec.end());

    // 아 중복을 제거해야 하는 구나
    vec.erase(std::unique(vec.begin(), vec.end()),vec.end());

    for (int i = 0; i < vec.size(); i++) std::cout << vec[i].second << '\n';
}