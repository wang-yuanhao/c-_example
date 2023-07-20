#include <iostream>
#include <functional>

double q = 1.1;

double bind_function(double a,double b){
    return a+b+q;
}

//bind用于将函数和参数绑定，进而创造新的函数（变量个数少于原来的）
int main()
{
    double c = bind_function(1,2);
    std::cout << reinterpret_cast<double*>(&bind_function) <<std::endl;
    std::cout << reinterpret_cast<double (*)(double,double)>(&bind_function) <<std::endl;

// cout << reinterpret_cast<void*>(foo);



    std::cout << c <<std::endl;

    auto f1 = std::bind(bind_function,q,4);
    q =2;
    double c1 = f1();
    std::cout << c1 <<std::endl;   //这里的输出时7，包括4+1+2，一个变化的全局q（2）和绑定时固定的q（1）

    auto f2 = std::bind(bind_function,5,std::placeholders::_1);
    q =3;
    double c2 = f2(1);
    std::cout << c2 <<std::endl;


	return 0;
}
