#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int a[9];
    string s;
    cin>>s;
    if(s[2] == 'A' || s[2] =='E' ||s[2] == 'I' || s[2] =='O' || s[2] =='U' ||s[2] == 'Y')
    {
          cout<<"Invalid";
}
    else{
        for(int i =0 ; i<9; i++)
       {
           a[i] = s[i] - '0';
       } 
       
        if((a[0] + a[1])%2 == 0)
        {
           if( (a[3] + a[4])%2 ==0)
           {
               if((a[4]+a[5])%2 == 0)
               {
                   if((a[7] + a[8])%2 == 0)
                   {
                       cout<<"Valid";

                   }
                   else 
                   cout << "Invalid";
               }
               else 
                   cout << "Invalid";
           } else 
                   cout << "Invalid";

        }
        else 
                   cout << "Invalid";
    }
    return 0;
    }