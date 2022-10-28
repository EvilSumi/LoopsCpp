#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;
 cout<<"Binary system: "; //your input goes here

 cin>>n;

   int ans=0;
   int power=1;
   while(n>0){
      int paraitydigit=n%2;
      ans= ans + (paraitydigit*power);
      power*=10;
      n/=2;
   


   }
   cout<<"Decimal system:"<<ans<<endl;

}
