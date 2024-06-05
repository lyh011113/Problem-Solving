#include<iostream>

int main (){
    int distance;
    std::cin >> distance;

    if(distance % 5 == 0){
        std::cout <<distance/5<<std::endl;
    }else{
        std::cout <<distance/5+1<<std::endl;
    }

}