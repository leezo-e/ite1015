#include "animal.cpp"

using namespace std;

int main() {
	vector<Animal*> arr;
	while(1) {
		string str;
		cin >> str;

		
		if(str == "z") {
			string name;
			int age;
			int numStripes;

			cin >> name >> age >> numStripes;
			arr.push_back(new Zebra(name, age, numStripes));
			
		}
		else if(str == "c") {
			string name;
			int age;
			string favoriteToy;

			cin >> name >> age >> favoriteToy;
			arr.push_back(new Cat(name, age, favoriteToy));
			
		else if(str == "0") break;
		
		} 
	}

	for(int i = 0; i < arr.size(); i++) 
		arr[i]->printInfo();
	
	for(int i = 0; i < arr.size(); i++) 
		delete arr[i];

	return 0;
}
