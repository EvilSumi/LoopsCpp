#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;
 cout<<"Number to be Reversed:"; //your input goes here

 cin>>n;

   int reverse=0;
   while(n>0){
      int lastdigit=n%10;
      reverse=(reverse*10 + lastdigit);
      n/=10;
   


   }
   cout<<reverse<<endl;

}
