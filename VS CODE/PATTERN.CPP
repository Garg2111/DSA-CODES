#include<iostream>
using namespace std;
int main()
/*  {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
            
        }
        i=i+1;  
        cout<<endl;
    }
} */


 /* {
int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<(n-j+1);
            j=j+1;
            
        }
        i=i+1;  
        cout<<endl;
    }

}*/ 


 /* {
     int n;
     cin>>n;
     int i=1,count=1;
     while(i<=n)
     {
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
     }
}*/ 


 /*{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        
        }
        i=i+1;
        cout<<endl;
    }
}*/ 



 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
} */ 




 /* {
    int n;
    cin>>n;
    int i=1,count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        
        }
        cout<<endl;
        i=i+1;

    }
} */ 


 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
    {      
    cout<<value;
    value=value+1; 
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}*/ 


 /* { 
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }


    
} */ 



 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
   }
} */


 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
   }
} */ 


 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
} */ 


 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char start='A'+n-i;
        while(j<=i)
        {
            cout<<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

} */ 


 /* { 
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        
            int j=1;
            while(j<=i)
            {
                cout<<"*";
                j=j+1;
            }
            cout<<endl;
            i=i+1;

        }
} */ 


/* {

 int n;
 cin>>n;
 int i=1;
 while(i<=n)
 {
    int j=0;
    while(j<=n-i)
    {
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
 }
} */ 


 /* {
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;    // print spaces
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;          // print 1st triangle
            j=j+1;
        }
        int start=i-1;
        while(start)
        {
            cout<<start;     // print 2nd triangle
            start=start-1;
        }
      cout<<endl;
        i=i+1;
    }
 } */


{
    int n;
    cin>>n;
    int i=n;
    while(i>0)
    {
    int j=1;
    while(j<=i)
    {
    cout<<j;
    j=j+1;
    }
    cout<<endl;
    i=i-1;
    }
}









