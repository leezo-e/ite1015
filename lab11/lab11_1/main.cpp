#include "message.cpp"

using namespace std;

int main()
{
    MessageBook mb;
  
  while (1) {
        string str;
        cin << str;
       
        if (str == "add"){
            int num;
            string m;
            cin >> num;
            getline(cin, m);
            m.erase(m.begin());
            mb.AddMessage(num, m);
    }
    
        else if (str == "delete"){
            int num;
            cin >> num;
            mb.DeleteMessage(num);
        
    }
        else if (str == "list"){
            mb.GetNumbers();
          
    }
        else if (str == "print"{
            int num;
            cin << num;
            cout << mb.Getmessage(num) < endl;
    }
    
        else if (str == "quit") break;
  }
  
  
  return 0;
}