#include <iostream>

using namespace std;

//    int getSum(int n)
//    {
//        int sum = 0;
//        while (n != 0) {
//            sum = sum + n % 10;
//            n = n / 10;
//        }
//        return sum;
//    }
    int getSum(int no)
    {
        return no == 0 ? 0 : no % 10 + getSum(no / 10);
    }


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}


int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){

        long long int n;
        cin>>n;
//        cout<<gcd(n,getSum(n))<<"\n";
        int temp=n;
        int temp2=gcd(n,getSum(n));
        if(gcd(n,getSum(n))>1){
        cout<<n<<"\n";
        }
        else{
        while(gcd(temp,getSum(temp))<=1){
            temp=temp+temp2;
        }
        cout<<temp<<"\n";
}
    }
    return 0;
}
