#include <iostream>
#include <algorithm>

using namespace std;
//
int binarySearch(int l,int h,int ar[],int key){
    int re;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(ar[mid]==key)
            return mid;
        else if(ar[mid]>key){
            re=mid-1;
            h=mid-1;
        }
        else if(ar[mid]<key){
            l=mid+1;
        }
        else
            re=-1;
    }return re;
}

//int binarySearch(int arr[], int l, int r, int x)
//{
//    if (r >= l) {
//        int mid = l + (r - l) / 2;
//
//        // If the element is present at the middle
//        // itself
//        if (arr[mid] == x)
//            return mid;
//
//        // If element is smaller than mid, then
//        // it can only be present in left subarray
//        if (arr[mid] > x)
//            return binarySearch(arr, l, mid - 1, x);
//
//        // Else the element can only be present
//        // in right subarray
//        return binarySearch(arr, mid + 1, r, x);
//    }
//
//    // We reach here when element is not
//    // present in array
//    return -1;
//}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int temp=0;
    for (int i=0;i<n;i++){
    int temp2;
    cin>>temp2;
        temp=temp+temp2;
        ar[i]=temp/(i+1);
    }
    int q;
    cin>>q;
    sort(ar,ar+n);
    for (int i=0;i<q;i++){
        int qu;
        cin>>qu;
        cout<<binarySearch(0,n-1,ar,qu)<<"\n";
    }
//    int ar[n];
//    for (int i=0;i<n;i++){
//        cin>>ar[i];
//    }
//    int key;
//    cin>>key;
//    cout<<binarySearch(0,n-1,ar,key)<<"\n";
    return 0;
}
