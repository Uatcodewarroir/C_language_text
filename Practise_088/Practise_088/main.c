#include<iostream>
using namespace std;
int main(){
    int i=7,j=8;
    int* ip= &i;
    int* jp=&j;
    
    
    
    cout<<"Address"<<ip<<"Contains"<<*ip<<endl;
    cout<<"Address"<<jp<<"Contains"<<*jp<<endl;
    
    
    *ip=9;
    cout<<"New Address"<<ip<<"Contains"<<*ip<<endl;
    *jp=10;
    cout<<"New Address"<<jp<<"Contains"<<*jp<<endl;
    
}