#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

//void decTObin(int n, vector <int> &b)
//{
//    while (n>1){
//        b.push_back(n%2);
//        n=n/2;
////        cout<<n<<"\n";
//    }
//    b.push_back(n);
//}
//
//void print(vector <int> &p){
////cout<<"hai";
//    for (int i=0;i<p.size();i++){
//        cout<<p[i];
//    }
//}

int main()
{
    int t;
    cin>>t;
//    for (int i=0;i<t;i++){
//        int c;
//        cin>>c;
//        vector<int>b;
//
//        decTObin(c,b);
//        reverse(b.begin(),b.end());
//        print(b);
//        cout<<"\n";
//
//
//    }
    for (int i=0;i<t;i++){
        int c;
        cin>>c;
        float temp=log2(c);
//        int temp2=log2(c);
//        int temp3;
//        if(temp-temp2!=0){
//            temp3=temp2+1;
//        }else{
//            temp3=temp2;
//        }
        int temp3=log2(c);
//        cout<<temp3<<"\n";
        int temp5=pow(2,temp3);
        int temp4=0;
//        for (int j=1;j<=temp5;j++){
////                cout<<((temp5-j)^j)<<"\n";
//                for (int k=1;k<=temp5;k++){
//                cout<<j<<" "<<k<<"\n";
//                cout<<(k^j)<<"\n";
//            if ((k*j)>temp4 && (k^j)==c ){
//                temp4=k*j;
////                cout<<temp4<<"\n";
//            }
//                }
//
//        }

//        for (int j=0;j<c;j++){
//            int temp6=(c^j);
//            if(temp6*j>temp4){
//                temp4=temp6*j;
//            }
//        }
        int temp6=((temp5-2)/2);
        int temp7=c^temp6;

        cout<<temp6*temp7<<"\n";

    }
    return 0;
}
