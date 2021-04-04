#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int re=1;
        for (int j=0;j<n;j++){
            re=re*(j+1);
        }
        cout<<re<<"\n";
    }
    return 0;
}
