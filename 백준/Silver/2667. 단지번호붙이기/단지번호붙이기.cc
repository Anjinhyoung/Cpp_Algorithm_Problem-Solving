#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int map[26][26];
bool visited[26][26];

int rows[4] = { 0,1,0, -1 };
int columns[4] = { 1,0,-1,0 };
int num;
int cnt;
std::vector<int> vec;

void dfs(int row, int column) 
{
    for (int i = 0; i < 4; i++) 
    {
        int nr = row + rows[i];
        int nc = column + columns[i];

        if (nr > num || nr <= 0 || nc > num || nc <= 0) continue;
        if (visited[nr][nc] == false && map[nr][nc] == 1) 
        {
            visited[nr][nc] = true;
            cnt++;
            dfs(nr, nc);
        }
    }
}

int main() {
    std::cin >> num;
    std::string str;

    for (int i = 1; i <= num; i++) 
    {
        std::cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '1') map[i][j+1] = 1;
            else map[i][j+1] = 0;
        }
    }

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (map[i][j] == 1 && visited[i][j] == false)
            {
                visited[i][j] = true;
                cnt = 1;
                dfs(i, j);
                vec.push_back(cnt);
            }
        }
    }

    std::sort(vec.begin(), vec.end());

    std::cout << vec.size() << "\n";

    for (int i = 0; i < vec.size(); i++) 
    {
        std::cout << vec[i] << "\n";
    }
}