#include <iostream>
#include <string>
using namespace std;
#pragma once

class gcdOfStringsSolution
{
public:


    string gcdOfStrings(string str1, string str2) {

        if (str2.length() > str1.length())
            return gcdOfStrings(str2, str1);


        if (!(1 <= str1.length() && str2.length() <= 1000) || (str1[0] ^ str2[0]) != 0)
            return "";


        for (int i = 1; i < str2.length(); i++)
        {
            if ((str1[i] ^ str2[i]) != 0)
            {
                return "";
            }
        }
        for (int i = str2.length(); i < str1.length(); i++)
        {
            if ((str1[i] ^ str1[i - str2.length()]) != 0)
            {
                return "";
            }

        }
        int str1length = str1.length();
        int str2length = str2.length();

        if (str1length % str2length != 0 && ((str1[str1length - 1] ^ str2[str2length - 1]) != 0))
            return "";

        // if we reach here this means str1 it consists of serie of str2,
        // now we need math assisst , just apply  Euclidean algorithm.

        while (str1length != 0) {
            int temp = str1length;
            str1length = str2length % str1length;
            str2length = temp;
        }

        return str2.substr(0, str2length);

    }
};

