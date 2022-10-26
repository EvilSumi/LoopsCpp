#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;
  cout<<"Numbers till fatorials:"; //your input goes here

 cin>>n;

 int factorial=1;
  
  
for(int i=1;i<=n;i++){

    factorial*=i;
    cout<<factorial<<endl;

   }



 return 0;
 }

