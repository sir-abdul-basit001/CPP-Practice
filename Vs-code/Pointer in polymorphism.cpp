#include <iostream>
using namespace std;
class Base
{
public:
    int varBase;
    void display()
    {
        cout << "Base var called " << varBase << endl;
    }
};
class Derived : public Base
{

public:
    int varDerived;
    void display()
    {
        cout << "Derived var called " << varDerived << endl;
    }
};
int main()
{
    // Making pointers
    Base *bpointer;
    Derived *dpointer;
    // Making obj
    Base bobj;
    Derived dobj;

    //    bobj = 34;
    bpointer->varBase = 34;
    dpointer->varDerived = 43;
    *bpointer = dobj;

    cout<<"displaying by objects"<<endl;
    bpointer->display();

    cout<<endl;
      dpointer->display();
   

      cout<<"displaying by objects"<<endl;
      dobj.display();
      bobj.display();
    return 0;
}