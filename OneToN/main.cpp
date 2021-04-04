#include <iostream>
#include <iterator>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int,greater<int> >s1;
    int temp;
    int ar[n];
    for (int i=0;i<n;i++){
        cin>>temp;
        ar[i]=temp;
        s1.insert(temp);

    }
    sort(ar,ar+n, greater<int>());
    int j;
    set<int,greater<int> >::iterator i;
    for (j=0,i=s1.begin();j<n,i!=s1.end();i++,j++){
    cout<<*i<<"\n";
        if(*i!=ar[j]){
        break;
        }

    }
    cout<<ar[j-1]<<"yeh hai \n";
    return 0;
}
