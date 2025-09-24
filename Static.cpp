#include <iostream>
using namespace std;

class one
{
    public:
    static int x;
    static int y;
};

int one::x = 10;
int one::y = 20;

int main()
{
   for(int i=1 ; i<6; i++){
        cout<<one::x;
        one::x++;
   }
}