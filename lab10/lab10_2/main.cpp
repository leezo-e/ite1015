#include "intset.cpp"
#include <iostream>

using namespace std;

int main()
{
    IntergerSet set;
    
    while(1){
        string str;
        int num;
        cin >> str >> num;
        
        if(str == "add") set.Addnumber(num);
        else if (str == "del") set.DeletreNumber(num);
        else if (str == "get") set.DeleteNumber(num);
        else if (str == "quit") break;
        
    }
    
    return 0;
    
}