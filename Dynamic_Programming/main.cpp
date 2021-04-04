//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//    int t[1000][1000];
//int longest_common_subsequence(string x,string y){
//    int m=x.size();
//    int n=y.size();
//
//    for (int i=0;i<m+1;i++){
//        for (int j=0;j<n+1;j++){
//            if(i==0||j==0){
//                t[i][j]=0;
//            }
//        }
//    }
//
//    for (int i=1;i<m+1;i++){
//        for (int j=1;j<n+1;j++){
//            if(x[i-1]==y[j-1]){
//                t[i][j]=1+t[i-1][j-1];
//            }
//            else {
//                t[i][j]=max(t[i-1][j],t[i][j-1]);
//            }
//        }
//    }
//    return t[m][n];
//}
//
//int main()
//{
//    string a;
//    string b;
//    getline(cin,a);
//    getline(cin,b);
//    cout<<longest_common_subsequence(a,b);
//    cout<<a<<b;
//
//    int m=a.size();
//    int n=b.size();
//
//    for (int i=0;i<m+1;i++){
//        for (int j=0;j<n+1;j++){
//            cout<<t[i][j]<<"  ";
//        }cout<<"\n";
//    }
//
//    return 0;
//}


//Longest Common Substring

#include <iostream>
#include <string.h>

using namespace std;

    int t[1000][1000];
    int longest_common_substring(string x,string y){
    int m=x.size();
    int n=y.size();
    int result=0;

    for (int i=0;i<m+1;i++){
        for (int j=0;j<n+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }

    for (int i=1;i<m+1;i++){
        for (int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
                result=max(result,t[i][j]);
            }
            else {
                t[i][j]=0;
            }
        }
    }
    return result;
}

int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    cout<<longest_common_substring(a,b)<<"\n";

    int m=a.size();
    int n=b.size();

    for (int i=0;i<m+1;i++){
        for (int j=0;j<n+1;j++){
            cout<<t[i][j]<<"  ";
        }cout<<"\n";
    }

    return 0;
}

