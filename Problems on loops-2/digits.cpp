#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;
 cout<<"Number of Digits:";
 cin>>n;

 int digits=0;
 while(n>0){
    digits++; //1
    n=n/10;
 }
 cout<<digits<<endl;

}
