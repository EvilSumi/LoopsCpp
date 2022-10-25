#include <iostream>
#include <string>

using namespace std;

int main(){

int n,m;
cin>>n;
cin>>m;



for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
        cout<<j;  
    }
    for(int j=i;j<=i-1;j++){
      if(i==1 || j==1 || i==n || j==m){
            cout<<j;
        }
        else{
            cout<<" ";
    }
    cout<<endl;

}
 return 0;
}
}