#include <iostream>
#include <vector>

int main(){
    constexpr int LENGTH = 10;

    std::string order_s;

    std::cout << "Order-based: ";
    std::cin >> order_s;

    order_s = order_s.substr(0, LENGTH);

    std::vector<int> order(order_s.begin(), order_s.end());
    order.push_back(order[0]);
    for (auto& num : order) num -= '0';
    
    std::vector<int> locus(order.size());
    for (int i = 0; i < LENGTH; i++){
        locus[order[i]] = order[i + 1];
    }
    locus[LENGTH] = -1;
    
    std::vector<char> locus_s(LENGTH);
    auto itoc = [](int num) -> char {
        
        if (num > 9 || num < 0) return 0;
        return num + '0';
    };
    for (int j = 0; j < locus_s.size(); j++){
        locus_s[j] = itoc(locus[j]);
    }
    
    std::cout << "Locus-based: " << std::string(locus_s.begin(), locus_s.end()) << std::endl;
    
    return 0;
}