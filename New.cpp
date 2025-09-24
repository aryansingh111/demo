#include <iostream>
using namespace std;

// Interface
class one
{
public:
    // pure virtual function
    virtual void show() = 0;
    virtual void display() = 0;
};

class two : public one
{
    // compulsory
    void show() override

    {

    }
};

class three : public two
{
    
};

int main()
{
}