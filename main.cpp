//
//  main.cpp
//  numbertobinary
//
//  Created by Alby Thomas on 8/5/16.
//  Copyright © 2016 Alby Thomas. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void converter(int number){
    while(number>=1){
        if(number%2==0){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
        number=floor(number/2);
    }
    cout<<" ";
}

void seperator(string sequence){
    int digit;
    int b=0;
    for(int a=0;a<sequence.length();a++){
        if(sequence[a]==' '){
            //cout<<a<<endl;
            digit=stoi(sequence.substr(b,a));
            converter(digit);
            b=a+1;
        }
    }
    cout<<endl;
}

int main() {
    string sequence;
    cout<<"Input series of numbers"<<endl;
    getline(cin,sequence);
    seperator(sequence);
    return 0;
}
