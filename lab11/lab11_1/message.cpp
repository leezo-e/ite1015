#include "message.h"

using namespace std;

void MessageBook::AdMessage(int number, const string&message){
    messages_[number] = message;
    
}

void MessageBook::DeleteMessage(int number){
    messages_.erase(number);
}

vector<int> MessageBook::GetNumers(){
    vector<int> n;
    for (auto iter = messages_.begin(); iter != messages_.end; iter++){
        n.pushback(iter->first);
        cout << iter->first << " : " << iter->second << endl;
    
    return n;
        
    }

}

const string& MessageBook::GetMessage(int number){
    return messages_[number];
    
}