#include <iostream>

int main(){

    //forloop
    for(int i=1; i<=10; i+=1){
        std::cout<<i<<"\n";
    }
    std::cout<<"\n"<<"HAPPY BIRTHDAY!";

    //nestedloop
    //think of this is an row
    for(int i = 1; i <= 5; i+=1){
        //while this is a column
        for(int j = 1; j <=i; j+=1){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
    
    return 0;
}