/*
You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

    ruleKey == "type" and ruleValue == typei.
    ruleKey == "color" and ruleValue == colori.
    ruleKey == "name" and ruleValue == namei.

Return the number of items that match the given rule.
*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int count = 0;

        unordered_map<string, int> map{
            {"type", 0},
            {"color", 1},
            {"name", 2},
        };
        // map<string, int> map{
        //     {"type", 0},
        //     {"color", 1},
        //     {"name", 2},
        // };

        for (auto i : items)
        {
            if (i[map[ruleKey]] == ruleValue)
            {
                count++;
            }
        }

        // alter this is somewhere wrong
        // unordered_map<int, string> map{
        //     {0, "type"},
        //     {1, "color"},
        //     {2, "name"},
        // };
        // for (auto i : items)
        // {
        //     auto itr = find(i.begin(), i.end(), ruleValue);

        //     if (itr != i.end())
        //     {
        //         int index = itr - i.begin();
        //         if (map[index] == ruleKey)
        //         {
        //             count++;
        //         }
        //     }
        // }

        return count;
    }
};
int main()
{

    return 0;
}