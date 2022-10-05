#include <iostream>
using namespace std;

int main(){
    long long int i;
    cin>>i;
    
    int count = 0;
    long long int temp = i;

    while(temp){
        temp = temp/10;
        count++;
    }

    cout<<count<<endl;
    return 0;
}