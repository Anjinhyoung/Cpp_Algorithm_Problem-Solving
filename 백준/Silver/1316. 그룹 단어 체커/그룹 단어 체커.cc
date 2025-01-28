#include <iostream>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, count = 0;

    std::cin >> num;

    std::string str;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> str;

        // 그 문자가 뒤에 또 있는 지 확인할려고 변수를 만들고
        int check = 0;

        for (int i = 0; i < str.length()-1; i++) 
        {
            // 만약에 뒷자리가 다른 문자일 경우
            if (str[i] != str[i + 1]) 
            {
                // 그 문자가 뒤에 또 있는 지 확인
                for (int i2 = i + 2; i2 < str.length(); i2++) 
                {
                    // 있으면 반복 종료
                    if (str[i] == str[i2]) 
                    {
                        check++;
                        break;
                    }
                }
            }

            // 위에서 그룹 단어가 아닌 걸 아니까 입력된 모든 글자를 할 필요가 없다.
            if (check != 0)
            {
                break;
            }
           
        }

        // 없으면 그룹 단어 개수 +1
        if (check == 0)
        {
            count++;
        }
    }

    std::cout << count;
}