#include <iostream>
#include <string>

using namespace std;

int main(){
    for(int i=1;i<=1000;i++){
        if(i%7==0 || i%3==0){
            continue;
        }
        cout<<i<<endl;
        }
    }
