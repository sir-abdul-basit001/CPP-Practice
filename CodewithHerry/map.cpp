#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["TV = "] = 100;
    m["laptop = "] = 50;
    m["headphone = "] = 120;
    m["tablet = "] = 100;
    m["watch = "] = 40;

    m.erase("TV = ");// To erase

    // Insert function
    m.insert({"camera", 25});

    // Emplace function
    m.emplace("PC",55);

    for ( auto p:m)
    {
      cout<<p.first<<" ";
      cout<<p.second<<endl;
    }
    // If we wanna print number of keys 
    cout<<" Count = "<<m.count("laptop = ")<<endl;

    // If we wanna print the value of any key
    cout<<" Value = "<<m["laptop = "]<<endl;

    if (m.find("camera = ") != m.end())
    {
        cout<<"\nFound";
    }
    else{
        cout<<"\nNot found"; 
    }
    

    return 0;
}
/*
  Map have two special abilities
  1. Have a key(Can't replicate)
  2. By-default sort in ascending order(alphabetic order)
*/