#include <iostream>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int array[26] = { 0, };

    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.length(); i++) 
    {
        // 소문자인 경우
        if (str[i] >= 97) 
        {
            // ex) 'a' - 97
            array[str[i] - 97]++;
        }
        // 대문자 인 경우
        else 
        {
            array[str[i] - 65]++;
        }
    }

    int max = 0, max_index = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < array[i]) 
        {
            max = array[i];
            max_index = i;
        } 
    }

    for (int i = 0; i < 26; i++) 
    {
        if (max_index == i) continue;
        else 
        {
            if (max == array[i]) 
            {
                std::cout << "?";
                return 0;
            }
        }
    }

    std::cout << (char)(max_index + 65);
    return 0;
}