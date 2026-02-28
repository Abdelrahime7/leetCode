

#include <iostream>
#include <vector>

using namespace std;



bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    /*
    * we should keep  beside each plot planted one empty which means if  have somthing like this :1 0 1 0 1
    return true , otherwise false .
    Apraoch :
   iterate flowerbed , ehenver we find a fit pace , decrease n , whene we over , return true or fse based on n = 0;
    */
    if (n == 0 && flowerbed[0] == 1)
        return true;

   

    if (n == 0 && flowerbed.size() > 1)
        return true;



    if (flowerbed[0] == 0 && flowerbed[1] == 0)
    {
        flowerbed[0] = 1;
        n--;
    }
    if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
    {
        flowerbed[flowerbed.size() - 1] = 0;
        n--;
    }


    for (int i = 1; i < flowerbed.size() - 1; i++)
    {
        if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] != 1)
        {
            flowerbed[i] = 1;
            n--;
        }
        if (n == 0) return true;
    }
    return false;



    
}




int main() {
    vector<int> f = {1};
    int n = 0;
    bool r=  canPlaceFlowers(f, n);

    if (r==true)
    {
        cout << "true"<<endl;
    }
    if (r== false)
        cout << "false" << endl;

    return 0;
}