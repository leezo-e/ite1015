#include <iostream>
#include <string>

using namespace std;

typedef struct Person {
    string name;
    double score;

};

int main(int argc, const char** argv) {

    Person* p = new Person[3];

    for (int i = 0; i < argc; i++) {
        cin >> p.name[i] >> p.score[i];
    }

    for (int i = 0; i < argc; i++){
        printf("%s\n", p[i]);
    }

    delete [] p;


    return 0;
}
