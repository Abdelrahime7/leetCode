
#include <iostream>
#include <vector>

using namespace std;

#pragma once
class kidsWithCandiesSolution
{
  
  
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        int highestCandies = 0;
        vector<bool> result;
        for (int candy : candies)
        {
            highestCandies = candy > highestCandies ? candy : highestCandies;

        }

        for (int candy : candies)
        {
            if (candy + extraCandies >= highestCandies)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;

    }
};

