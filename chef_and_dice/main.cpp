#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        long long int n;
        cin>>n;


    long int temp=0;
    long int temp2;
    if(n%8==0){
    temp2=((n/8)-1)*88;
    }
    else{
        temp2=(n/8)*98;
    }
        if (n%8==1){
//        cout<<"20\n";
        temp=20;
        }
        if (n%8==2){
//        cout<<"36\n";
        temp=36;
        }
        if (n%8==3){
//        cout<<"51\n";
        temp=51;
        }
        if (n%8==4){
//        cout<<"60\n";
        temp=60;
        }
        if (n%8==5){
//        cout<<"74\n";
        temp=76;
        }
        if (n%8==6){
//        cout<<"84\n";
        temp=88;
        }
        if (n%8==7){
//        cout<<"94\n";
        temp=99;
        }
        if (n%8==0){
//        cout<<"84\n";
        temp=104;
        }
cout<<temp+temp2<<"\n";
    }
    return 0;
}
