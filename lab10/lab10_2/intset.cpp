#include "intset.h"
#include <vector> 
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;


void IntergerSet::AddNumber (int num){
    
    auto it = find(numbers_.begin(), numbers_.end(), num);
    if (it == numbers_.end()){
        numbers_.push_back(num);
        for(int i = 0; i < (int)numbers_.size(); i++){
        cout << numbers_[i] << " "; }
        cout << endl;
    }
    else break;
    
    return numbers_;
}
    

void IntergerSet::Deletenumber (int num){
    
    numbers_.erase(remove(numbers_.begin(), numbers_.end(), num),numbers_.end());
     for(int i = 0; i < (int)numbers_.size(); i++){
        cout << numbers_[i] << " "; }
        cout << endl;
    
}

int IntergerSet::GetItem(int pos){
    
    
    if(find(numbers_.begin(), numbers_.end(), pos) != numbers_.end()) { 
    cout << find(numbers_.begin(), numbers_.end(), pos) - numbers_.begin(); 
        
    }
    else if 
    cout << -1 ;
}