#include <iostream>

using namespace std;

int tellMe(int ar[],int n,int h){
    for (int i=0;i<n;i++){
        if(h<=ar[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int ar[n];
    for (int i=0;i<n;i++){
        cin>>ar[i];
    }
    h=h-x;
    int re=tellMe(ar,n,h);
    if(re==1){
        cout<<"YES\n";
    }
    else if(re==0){
        cout<<"NO\n";
    }
//    for (int i=0;i<n;i++){
//        if(h<ar[i]){
//            cout<<"YES\n";
//            break;
//        }
//    }

    return 0;
}
