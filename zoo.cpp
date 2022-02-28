#include <iostream>
using namespace std;
int main(){
	
    int x,y,z=0, o=0;
    string s;
    
    cin>>s;
	int t = s.length();
   for(int i=0; t>0; i++){
      
     if( s[i]=='z')
     x=++z;
     else 
     y=++o;
    t--;
 }
    if(x*2==y)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}