#include <iostream>
using namespace std;
int main()
{
          int a,b;
          cin>>a;
          cin>>b;
          char ch;
          cin>>ch;
          cout<<endl;
          switch(ch)
          {
            case '+':cout<<a+b<<endl;
            break;
            case '-':cout<<a-b<<endl;
            break;
            case'*':cout<<a*b<<endl;
            break;
            case '/':cout<<a/b<<endl;
            break;
            default:cout<<"Please enter a valid operation"<<endl;
            break;

          }

}
     