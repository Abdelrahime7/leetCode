#pragma once
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;
class ReversVowels
{
public :
    string reverseVowels(string str) {
        unordered_set<char> vowels = { 'A','E','I','O','U','a','e','i','o','u' };
        vector<char> VowelsInStr;

        // Collect vowels from the string
        for (char s : str)
        {
            if (vowels.find(s) != vowels.end())
            {
                VowelsInStr.push_back(s);
            }
        }

        // Replace vowels in reverse order
        for (int i = 0; i < str.size(); i++)
        {
            if (vowels.find(str[i]) != vowels.end())
            {
                str[i] = VowelsInStr.back();
                VowelsInStr.pop_back();
            }
        }


        return str;
    }

};

