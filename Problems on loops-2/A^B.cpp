#include <iostream>
#include <string>

using namespace std;

int main(){

  int A;
  cout<<"Base:"; //your input goes here
  cin>>A;
  
  int B;
  cout<<"Power:"; //your input goes here
  cin>>B;

  int result=1;
for(int i=1;i<=B;i++){

    result*=A;

   }
   cout<<result<<endl;




 return 0;
 }

