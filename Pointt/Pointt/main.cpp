//
//  main.cpp
//  Pointt
//
//  Created by QY on 15/11/28.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
        int i=7,j=8;
        int* ip= &i;
        int* jp=&j;
        
        
        
        cout<<"Address"<<ip<<"  Contains"<<*ip<<endl;
        cout<<"Address"<<jp<<"  Contains"<<*jp<<endl;
        
        
        *ip=9;
        cout<<"New Address"<<ip<<"   Contains"<<*ip<<endl;
        *jp=10;
        cout<<"New Address"<<jp<<"   Contains"<<*jp<<endl;
    int** ipp=&ip;
    cout<<"Address"<<ipp<<" contains"<<*ipp<<endl;
    cout<<"**ipp="<<**ipp<<endl;
    
    }

