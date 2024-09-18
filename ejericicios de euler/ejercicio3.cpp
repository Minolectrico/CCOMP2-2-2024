#include <iostream>
using namespace std;
void mayor(long long num){
    for (int i = 3; i != num; i += 2){
        if (num % i == 0) {
            num = num / i;
        }
    }
    cout << "El mayor numero primo de: " << num;
}
int main(){
    long long num=600851475143;
    mayor(num);
}
 
