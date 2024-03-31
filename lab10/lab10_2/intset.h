#pragma once
#include <vector>

class IntegerSet {
    
public : 
    void AddNumber (int num);
    void Deletenumber (int num)
    int GetItem(int pos);
    
private:
    std::vecotr<int> numbers_;
    
}