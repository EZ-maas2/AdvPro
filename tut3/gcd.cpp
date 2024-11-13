#include <iostream>
#include <vector>



int gcd_recur(int a, int b){

    if (a == 0){return b;}
    else if (b  == 0){ return a;}
    else{gcd_recur(b, a%b);}
}


int gcd_iter(int a, int b){
    if (a == 0){return b;}
    else if (b  == 0){ return a;}
    else{
        int a_copy = a;
        while (b != 0){
            a = b;
            b = a_copy%b;
            a_copy = a;
        }
        return a;
    }
}



int main()
{

    std::cout << gcd_recur(987654,123456) << "\n";
    std::cout << gcd_iter(987654,123456) << "\n";


    return 0;
}