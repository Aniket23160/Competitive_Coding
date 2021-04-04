#include <iostream>

using namespace std;



int main()
{
    int n;
    cin>>n;
    string s,t;
    cin.ignore();
    getline(cin,s);
    getline(cin,t);
    int temp=0;
    int temp2=0;
    for (int i=0;i<n;i++){
        if(s[i]!=t[i] && temp==0){
            temp=1;
            temp2++;
        }else if(s[i]==t[i]){
            temp=0;
        }
    }
    cout<<temp2<<"\n";
    return 0;
}
