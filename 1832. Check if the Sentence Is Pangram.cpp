/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> pres(26);
        for (auto i : sentence)
        {
            pres[i - 'a'] = true;
        }

        bool check = true;
        for (bool i : pres)
        {
            if (!i)
            {
                check = false;
            }
        }

        return check;
    }
};
int main()
{
    
    return 0;
}