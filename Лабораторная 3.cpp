//Дана последовательность целых чисел {Aj}.
// Hайти сумму чисел, делящихся на 3 или на 7,
// наименьшее из таких чисел и номер этого числа в последовательности.
#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int x;
    int minp=0;
    int s=0;
    int min=INT_MAX;
    int p=1;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if (x % 3 == 0 || x % 7 == 0) {
            s = s + x;
            if (x < min) {
                min = x;
                minp=p;
            }
        }
        p+=1;
    }
    std::cout<<"Сумма "<<s<<std::endl;
    std::cout<<"Наименьшее число "<<min<<std::endl;
    std::cout<<"Номер числа в последовательности "<<minp<<std::endl;
    return 0;
}