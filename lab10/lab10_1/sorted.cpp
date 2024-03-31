#include "sorted.h"

using namespace std;



void SortedArray::AddNumber(int num){
        numbers_.push_back(num);
        
}
    
vector<int> SortedArray::GetSortedAscending (){
       sort(numbers_.begin(), numbers_.end());
       for (int i = 0; i < numbers_.size(); i++){
           cout << numbers_[i] << " ";
       }
       cout << endl;
       return numbers_;
}
}
    
vector<int> SortedArray::GetSortedDescending(){
        sort(numbers_.rbegin(), numbers_.vrend());
        for (int i = 0; i < numbers_.size(); i++){
            cout << numbers_[i] << " ";
        }
        cout << endl;
        return numbers_;
}
    
int SortedArray::GetMax(){
        int max = max_element(numbers_.begin(), numbers_.end());
        return max;
}
    
int GetMin(vector<int> array){
        int min = min_element(numbers_.begin(), numbers_.end());
        return min;
}
    
    
