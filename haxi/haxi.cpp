#include <iostream>   
#include <unordered_map>
int main(void){
    std::unordered_map<int16_t, double> test_map;
    test_map.insert(std::make_pair(1,10.0));
    test_map.insert(std::make_pair(2,20.0));
    test_map.insert(std::make_pair(3,30.0));
    test_map.insert(std::make_pair(4,40.0));
    test_map.insert(std::make_pair(5,50.0));

    if(!test_map.empty()){
        if(test_map.count(1)==1){
            std::cout<<"test_map:"<<  test_map[1] <<std::endl;
        }
    }

    return 0;
}

