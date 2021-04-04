#include <iostream>

using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee ani;
    ani.eId=1;
    ani.favChar='a';
    ani.salary=1000000;

    cout<<ani.eId<<"\n";
    cout<<ani.favChar<<"\n";
    cout<<ani.salary<<"\n";
    return 0;
}
