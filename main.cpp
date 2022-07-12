#include <iostream>

long long fibo();
void print_fibo(size_t count);

int main(){
    size_t a;
    std::cin >> a;
    print_fibo(a);
    return 0;
}

long long fibo(){
    static long long a{0};
    static long long b{1};
    long long output {a};
    long long temp {b};
    b = a + temp;
    a = temp;
    return output;
}

void print_fibo(size_t count){
    std::cout << "The Fibonacci sequence, " << count << " elements : " << std::endl;
    for (size_t i{}; i < count; ++i){
        std::cout << fibo() << " ";
    }
} 