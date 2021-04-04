#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        cin.ignore();
        string s;
        getline(cin,s);

        int temp=0;
        int temp2=0;
        int temp3=0;
        for (int j=0;j<n;j++){
            if(temp==0 && s[j]=='*'){
                temp2++;

            }
            else if(s[j]=='*' && temp!=0){
                temp3=max(temp3,temp2);
                temp2=1;
                temp=0;
            }
            else{
                temp=1;
                temp3=max(temp2,temp3);
                temp2=0;
            }
        }
        temp3=max(temp3,temp2);
//        cout<<temp3<<"\n";
        if(temp3>=k){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
