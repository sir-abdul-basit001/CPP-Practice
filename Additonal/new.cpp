
// 22. Shopping discount system (based on amount).
#include <iostream>

using namespace std;
int No_of_item()
{
    int items;
    cout << "Enter ther number of items: ";
    cin >> items;
}
float discount(float price)
{
    if (price <= 100)
    {
        price = -5;
        cout << "Price after discount is: " << price << "Rs";
    }
}
int main()
{
    // No_of_item();
    discount(120);
    return 0;
}