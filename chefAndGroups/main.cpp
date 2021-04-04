#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for (int i=0;i<t;i++){
        string str;
        getline(cin,str);
        int temp=0;
        int temp2=0;
        for (int j=0;j<str.length();j++){
            if (str[j]=='0'){
                temp=0;
            }
            else if (str[j]=='1' && temp==0){
                temp=1;
                temp2++;
            }
//            cout<<temp2<<"\n";
        }
        cout<<temp2<<"\n";

    }
    return 0;
}
