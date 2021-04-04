#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n];
        for (int j=0;j<n;j++){
            cin>>ar[j];
        }
        int temp=ar[0];
        int temp2=0;
        for (int j=0;j<n;j++){
            if(ar[j]<temp){
                temp=ar[j];
                temp2=j;
            }
        }

        int temp3=ar[0];
        ar[0]=ar[temp2];
        ar[temp2]=temp3;

        for (int j=0;j<n;j++){
            cout<<ar[j]<<" ";
        }
    }
    return 0;
}
