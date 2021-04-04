#include <iostream>

using namespace std;

float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float temp=k1*k2*k3*v;
        temp=100/temp;
        float temp2;
        temp2=round(temp);
//        cout<<temp2<<"\n";
        if(temp2<9.575){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
