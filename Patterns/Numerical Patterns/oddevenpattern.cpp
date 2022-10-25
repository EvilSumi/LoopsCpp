#include <iostream>
#include <string>

using namespace std;

int main(){

int n,m;
cin>>n;
cin>>m;

for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
        if((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
    }
    cout<<endl;
    }

 return 0;
}