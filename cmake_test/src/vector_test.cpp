#include "utils_test.h"

// int16_t value[4] = {1,2,3,4};    

int main(void){
    std::vector<int16_t> test_vector;
    test_vector.reserve(4);                            //设置固定长度的vector

    int16_t value[4] = {1,2,3,4};    
    value[0] = 11;
    value[2] = 13;

    test_vector.emplace_back(value[0]);             //添加数据
    test_vector.emplace_back(value[1]);
    test_vector.push_back(value[2]);
    test_vector.push_back(value[3]);

    vector_print(test_vector); 
    
    int number = *test_vector.begin();  //begin返回的是第一个量的地址
    std::cout << "vector begi1n:" << number << std::endl;

    // std::cout << "vector begin:" << &qwe << std::endl;
    // std::cout << "vector begin:" << qwe << std::endl;
    return 0;
}

