#include <iostream>
#include <functional>
#include <typeinfo>

double add_function(double a,double b){
    return a+b;
}//int* b ={1,2,3}

void test(void){
    int i =1;
}//int* b ={1,2,3}

int main()
{
    /*******************数组指针*************************************/
    float* a ;
    float b[10]={1,2,3,4,5,6,7,8,9,0};
    a = b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << typeid(a).name() << std::endl;            //浮点数的地址pf
    std::cout << typeid(&b).name() << std::endl;            //浮点数数组的地址PA10_f

    float* c ;
   std::cout << typeid(c).name() << std::endl;            //浮点数数组的地址PA10_f

std::cout << "_________________________________" << std::endl;  
    /*******************函数指针*************************************/
    double(*p)(double,double);                 //定义函数指针
    p = add_function;                                     //函数指针赋值

    std::cout << (*p)(1,2) <<std::endl;
    std::cout << p <<std::endl;
    std::cout << &p <<std::endl;
    std::cout << *p <<std::endl;
    std::cout << typeid(p).name() <<std::endl;
    std::cout << typeid(&p).name() <<std::endl;
    std::cout << typeid(*p).name() <<std::endl;
    std::cout << typeid(add_function).name() <<std::endl;


   
    std::cout << reinterpret_cast<double (*)(double,double)>(&add_function)(2,3) <<std::endl;   

    std::cout << reinterpret_cast<void (*)>(&add_function) <<std::endl; //这里输出的是函数的地址  static_cast<int*>&a
	std::cout << reinterpret_cast<double (*)>(add_function) <<std::endl; 
    std::cout << reinterpret_cast<double *>(add_function) <<std::endl; 
    std::cout << (int*)add_function <<std::endl;                                                     //c++没有函数指针类型，要以别的类型去读
    
    std::cout << add_function <<std::endl; 
    std::cout << &(add_function) <<std::endl;
    std::cout << &test << std::endl;


    return 0;
}
