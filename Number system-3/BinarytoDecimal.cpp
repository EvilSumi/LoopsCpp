#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;
 cout<<"Decimal system:"; //your input goes here

 cin>>n;

   int ans=0;
   int power=1;
   while(n>0){
      int lastdigit=n%10;
      ans= ans + (lastdigit*power);
      power*=2;
      n/=10;
   


   }
   cout<<"Binary system:"<<ans<<endl;

}
