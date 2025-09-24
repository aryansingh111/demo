#include<iostream>
using namespace std;

// abstract class
class one
{
    public:
        // normal function 
        void display(){
            cout<<"display method running 1...";
        }

        // virtual function
        virtual void show()
        {
             cout<<"show method running ...";
        }
};

class two : public one
{
    public:
    void display()
    {
        cout<<"display method running 2...";
    }

    void show() override
    {
          cout<<"show method running 2 ...";
    }
};

int main()
{
    two t1;
    t1.display();
}