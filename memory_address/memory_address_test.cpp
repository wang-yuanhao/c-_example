#include <iostream>
#include <typeinfo>

//一个变量由变量名、内存值、地址值三部分组成。



int main(void){
    std::cout << "_________________*和&的使用_______________________" << std::endl;
    std::cout << "__________________初始化时的使用_______________________" << std::endl;
    int a =10 ;        //声明只给变量名，定义给内存值和地址值
    int * b = &a;    //指针变量，内存值是a的地址
    int& c = a;       //将a的内存量和地址也给c，相当于起一个别名，或者说另一种调用a地址和内存值的方法
    std::cout << "__________________非初始化时的使用_______________________" << std::endl;
    std::cout << "value:" << a <<std::endl;
    std::cout << "value:" << b <<std::endl;
    std::cout << "value:" << c <<std::endl;

    std::cout << "value:" << *b <<std::endl;          //*在非初始化的时候，是把b的内存值作为地址，反馈这个地址对应的内存值
    std::cout << "value:" << *(&a) <<std::endl;    //*和&是相反的意思，*指针变量名 = 指针指向的内存值，&变量名 = 变量地址值
    

    std::cout << "address:" << &a <<std::endl;
    std::cout << "address:" << &b <<std::endl;
    std::cout << "address:" << &c <<std::endl;

    std::cout << "type:" << typeid(a).name() <<std::endl;
    std::cout << "type:" << typeid(b).name() <<std::endl;
    std::cout << "type:" << typeid(c).name() <<std::endl;

    c =11;
    std::cout << "value:" << *(&a) <<std::endl;
    std::cout << "address:" << &c <<std::endl;
    


    return 0;
}

