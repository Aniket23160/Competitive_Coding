//#include <iostream>
//
//using namespace std;
//
//
//long int re(long int n,long int e,long int h,long int a,long int b,long int c)
//{
//    long int result=1e15;
//    if(n<0){
//        result=-1;
//    }
//    if (2*n<=e){
//        result=min(result,n*a);
////        cout<<1<<"\n";
//    }
//    if (3*n<=h){
//        result=min(result,n*b);
////        cout<<2<<"\n";
//    }
//    if (n<=e && n<=h){
//        result=min(result,n*c);
////        cout<<3<<"\n";
//    }
//    if ((h-n)/2>=1 && (h-n)/2>=(n-e)){
//        long int temp;
//        if(b<c){
//            temp=min((n-1),(h-n)/2);
//            result=min(result,temp*(b-c)+n*c);
//        }
//        else{
//        long int t=1;
//            temp=max(t,(n-e));
//            result=min(result,temp*(b-c)+n*c);
//        }
////        cout<<4<<"\n";
//    }
//    if (e/2>=1 && e/2>=(3*n-h+2)/3){
//        long int temp;
//        if(a<b){
//            temp=min(n-1,e/2);
//            result=min(result,temp*(a-b)+n*b);
//        }
//        else{
//        long int t=1;
//            temp=max(t,(3*n-h+2)/3);
//            result=min(result,temp*(a-b)+n*b);
//        }
////        cout<<5<<"\n";
//    }
//    if ((e-n)>=1 && (e+h)>=2*n){
//        long int temp;
//        if(a<c){
//        temp=min(n-1,e-n);
//        result=min(result,temp*(a-c)+n*c);
//    }else{
//    long int t=1;
//        temp=max(t,(n-h));
//        result=min(result,temp*(a-c)+n*c);
//    }
////    cout<<6<<"\n";
//    }
//    if(n>=3 && e>=3 && h>=4){
//        result=min(result, a+b+c +re(n-3,e-3,h-4,a,b,c));
////        cout<<7<<"\n";
//    }
////    else{
////        result =-1;
////    }
//    return result;
//}
//
//int main()
//{
//    long int t;
//    cin>>t;
//    for (long int i=0;i<t;i++){
//        long int n,e,h,a,b,c;
//        cin>>n>>e>>h>>a>>b>>c;
//        long int ans=re(n,e,h,a,b,c);
//        if (ans==10000000){
//         cout<<-1<<"\n";
//        }
//        else{
//        cout<<ans<<"\n";
//        }
////        cout<<re(n,e,h,a,b,c);
//    }
//    return 0;
//}








