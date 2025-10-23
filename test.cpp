#include <iostream>
using namespace std;
int main() 
{
    for(int y=0; y<5; y++) 
    {
        for(int x=0; x<5; x++) 
        {
            if(x + y > 3) 
            {
                cout << "*";
            } 
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}