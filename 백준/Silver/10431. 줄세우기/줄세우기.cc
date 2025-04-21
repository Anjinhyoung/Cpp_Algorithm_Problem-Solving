#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num; std::cin >> num;

    std::vector<int> vec;

    int cnt = 0;

    for (int i = 0; i < num; i++) 
    {
        int num2; std::cin >> num2;

        for (int j = 0; j < 20; j++) 
        {
            int num3; std::cin >> num3;
            vec.push_back(num3);
        }

        std::vector<int> vec2 = vec;
        std::sort(vec2.begin(), vec2.end());

        while (true) 
         {
            for (int i = 0; i < 19; i++) 
            {
                if (vec[i] > vec[i + 1]) 
                {
                    std::swap(vec[i], vec[i + 1]);
                    cnt++;
                }
            }
            if (vec == vec2) break;
         }

        std::cout << num2 << ' ' << cnt << '\n';
        vec.clear();
        cnt = 0;
    }
}