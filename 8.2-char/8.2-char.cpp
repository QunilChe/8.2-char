#include <iostream>
#include <string>
using namespace std;

int Count2(char* str)
{
    const int n = 25;
    int countSpace = 0;
    int countTemp = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            countTemp = 1;
            while (str[i] && str[++i] == ' ')
                countTemp++;
            countSpace = max(countTemp, countSpace);
        }
    }
    return countSpace;
}

int main()
{
    char str[25];
    cout << "Enter string:" << endl;
    cin.getline(str, 25);
    cout << Count2(str) << "spaces " << endl;
    return 0;
}