//factors of a number

#include <iostream>

int main(){

    int i, fact, n;

    std::cout << "please enter a number : ";
    std::cin >> n;


    for (i=1; i<=n; i++){

        if (n%i == 0){

            std::cout << "the number " << i << " is a factor of " << n << "\n";

        }

    }

    return 0;
}
