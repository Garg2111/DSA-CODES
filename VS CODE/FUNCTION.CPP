#include<iostream>
#include<math.h>
using namespace std;
 
/* int power(int num1,int num2)
 {
     // cout<<a<<endl; we cannot access a here.This is not possible.
    int ans=1;
    for(int i=1;i<=num2;i++)
    {
        ans=ans*num1;
    }
    return ans;
 }
 int main()
 {
    int a,b;
    cin>>a;
    cin>>b;
    int answer=power(a,b);
    cout<<"answer is=>"<<answer<<endl;

 }*/ 



/* int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
 int nCr(int n,int r)
 {
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;

 }
 int main()
 {
    int n,r;
    cin>>n;
    cin>>r;
    cout<<"Answer is=>"<<nCr(n,r)<<endl;
 }*/ 




/**  // Function Signature.
 void printCounting(int n)   // we use void so that we should not return anything.
 {
    // function body.
      for(int i=1;i<=n;i++)
      {
        cout<<i<<" ";
      }
      cout<<endl;
 }
 int main()
 {
    int n;
    cin>>n;

    // function call.
    printCounting(n);
    return 0;
 }*/ 




/*
 // 1->Prime number
 // 0-> Not a Prime number
 bool isPrime(int n)
 {
   for(int i=2;i<n;i++)
   {
      // divide hogya h, not a Prime number.
      if(n%i==0)
      {
         return 0;
      }
   }
   return 1;
 }
int main()
{
   int n;
   cin>>n;
   if(isPrime(n))
   {
      cout<<"is a Prime Number"<<endl;
   }
   else
   cout<<"not a Prime Number"<<endl;


} */






