#include <iostream>
#include <vector>

int main(){
    constexpr int LENGTH = 10;

    std::string parentstr1;
    std::string parentstr2;

    std::cout << "Parent1: ";
    std::cin >> parentstr1;
    std::cout << "Parent2: ";
    std::cin >> parentstr2;

    parentstr1 = parentstr1.substr(0, LENGTH);
    parentstr2 = parentstr2.substr(0, LENGTH);

    std::vector<char> parent1(parentstr1.begin(), parentstr1.end());
    std::vector<char> parent2(parentstr2.begin(), parentstr2.end());

    int point;
    std::cout << "Cut point: before index ";
    std::cin >> point;

    std::vector<char> child1;
    std::vector<char> child2;

    for(int i = 0 ; i < LENGTH; i++){
        if(i < point){
            child1.push_back(parent1[i]);
            child2.push_back(parent2[i]);
        }else{
            child1.push_back(parent2[i]);
            child2.push_back(parent1[i]);
        }
    }

    auto vec2str = [](std::vector<char> vec) -> std::string { 
        std::string str(vec.begin(), vec.end());
        return str;
    };

    std::cout << "Offspring1: " << vec2str(child1) << std::endl;
    std::cout << "Offspring2: " << vec2str(child2) << std::endl;

    return 0;
}
