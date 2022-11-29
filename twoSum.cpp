#include <iostream>
#include <unordered_map>
#include <math.h>
using namespace std;

int main()
{
    int arr[5] = {2,3,5,8,11};
    int target = 11, result;
    unordered_map<int, int> unOrdMap;

    for (int i = 0; i < 5; i++)
    {
        result = abs(arr[i] - target);
        auto it = unOrdMap.find(result);
        if (it == unOrdMap.end())
        {
            unOrdMap[arr[i]] = i;
        }
        else
        {
            cout << "[" << unOrdMap[result] << "," << i << "]" << endl;
            break;
        }
    }

    return 0;
}