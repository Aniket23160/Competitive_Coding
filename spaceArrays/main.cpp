#include <iostream>
#include <bits/stdc++.h>

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
        sort (ar,ar+n);
        int temp=0;
        int temp2=0;
        for (int j=0;j<n;j++){
        if (j+1<ar[j]){
//            cout<<j+1-ar[j]<<"\n";
            temp=-1;
            break;
        }
        else{

        temp2=temp2+(ar[j]-j-1);
        }
//        else {
//        temp2=-1;
//        break;
//        }
//        cout<<"temp2 is "<<temp2<<"\n";
        }
        if(temp=0){
            cout<<"Second\n";
        }

        else if(temp2>=0 || temp%2==0) {
            cout<<"Second\n";
        }else
//        && temp>0 && temp2==0
{
            cout<<"First\n";
        }
//        cout<<temp<<"\n";
    }
    return 0;
}
