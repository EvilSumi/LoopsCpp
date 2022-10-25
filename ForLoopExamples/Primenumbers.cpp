#include <iostream>
#include <string>

using namespace std;

int main(){
  int st, en, i, j, chk=0;
    cout<<"Enter the Range\n";
    cout<<"Enter the Starting Number: ";
    cin>>st;
    cout<<"Enter the Ending Number: ";
    cin>>en;
    cout<<"\nPrime Numbers between "<<st<<" and "<<en<<" are:\n";
    for(i=st; i<=en; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
    return 0;



}



