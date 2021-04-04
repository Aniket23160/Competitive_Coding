#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for (int i=0;i<t;i++){
        string s1,s2;
        cin>>s1;
        cin>>s2;
//        getline(cin,s2);
//scanf(" %[^\n]s",s1);
//        getline(cin,s2);
//        cout<<s1;
//        cout<<s2;
        int temp=0;
        int temp2=0;
        while(temp2<=s2.size()){
            if(s1[temp]==s2[temp2]){
//                cout<<s1[temp]<<"\n";
                temp++;
                temp2++;
            }
            else{
                temp2++;
            }
        }
        temp--;
//        cout<<temp<<"\n";
        if(temp==s1.size()){

            cout<<"Love you too\n";
        }

//        if(s1<=s2){
//            cout<<"Love you too\n";
//        }
        else{
            cout<<"We are only friends\n";
        }
    }
    return 0;
}
