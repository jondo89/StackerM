#include <iostream>
#include<string>

using namespace std;



struct Item
{
    string description,code,color;
    int number;
    float price;
};



int main()
{

    int numbers[5] = {0};
     numbers[4] = 5;
    cout<<numbers[4];
    return 0;
}
