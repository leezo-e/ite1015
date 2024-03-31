#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

class MessageBook {
    public:
        void AddMessage(int number, const std::string& message);
        void DeleteMessage(int number);
        std::vector<int> GetNumbers();
        const std::string& GetMessage(int number);
        
    private:
        std::map<int, std::string> messages_;

    
};

