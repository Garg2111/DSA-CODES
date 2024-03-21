#include<iostream>
using namespace std;
int getMin(int num[],int n)
{
          int mini=INT_MAX;
          for(int i=0;i<n;i++)
          {
            mini=min(mini,num[i]);    // WORK SAME AS BELOW 3 LINES.IT IS A SHOTRCUT TO FIND MINIMUM.SIMILARLY WE CAN DO WITH MAXIMUM.
         /* if(num[i]<min)
            {
              min=num[i];
            }
          }*/
          return mini;    // returning min value.
}
}

int getMax(int num[],int n)
{ 
          int max=INT_MIN;
          for(int i=0;i<n;i++)
          {
            if(num[i]>max)
            {
                max=num[i];
            }
          }
          return max;    // returning max value.
}
int main()
{
      int size;
      cin>>size;
     // int num[size];    GHATIYA PRACTICE...DO NOT USE VARIABLE IN [] AS SIZE IS VARIABLE HERE.
        int num[100];   // GOOD PRACTICE.
        
        // taking input in an array.
         for(int i=0;i<size;i++)
         {
            cin>>num[i];
         }
         cout<<"Maximum value is:"<<getMax(num,size)<<endl;
         cout<<"Minimum value is:"<<getMin(num,size)<<endl;



}