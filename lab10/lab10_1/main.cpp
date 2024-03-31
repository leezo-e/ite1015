#include <string>
#include "sorted.cpp"

using namespace std;

int main(){
   
    SortedArray array;
    
    while(1){
        
        string str;
        cin >> str;
        
        if(str == "ascend") array.GetSortedAscending();
        else if(str == "descend") array.GetSortedDescending();
        else if(str == "max") cout << arr.GetMax() << endl;
        else if(str == "min") cout << arr.GetMin() << endl;
        else if(str == "quit") break;
        else if array.addNumber(atoi(str));
        
        //break하고 나서 추가로 받을 때는...?
        
        
    }
}