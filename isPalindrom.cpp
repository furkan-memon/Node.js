#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "racecar";
    unordered_map<char, int> map;

    for (char c : str)
    {
        if (map.find(c) != map.end())
        {
            map[c] = map[c] + 1;
        }
        else
        {
            map[c] = 1;
        }
    }

    int count = 0;
    for (auto pair : map)
    {
        cout << pair.first << "->" << pair.second << endl;
        if (pair.second % 2 != 0)
        {
            count++;
        }
    }

    if (count < 2)
    {
        cout << "can make palindrom";
    }
    else
    {
        cout << "can't make palindrom";
    }

    return 0;
}