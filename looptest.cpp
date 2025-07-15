#include <iostream>

int main(){

    //forloop
    for(int i=1; i<=10; i+=1){
        //code will printout how many i value are being iterate.
        std::cout<<i<<"\n";
    }
    //this code is out of the loop body.
    //by the end of the i value, it will be printout one time.
    std::cout<<"\n"<<"HAPPY BIRTHDAY!";

    return 0;
}