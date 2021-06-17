#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

class Person{
private:
    string name;
    int age;
    int order;
public:
    Person(const string &name_input = "Noname", const int &age_input = 0, const int &order_input = 0)
        : name(name_input)
        , age(age_input)
        , order(order_input)
    {}

    void setPersonInfo(int age_input, string name_input, int order_input)
    {
        name = name_input;
        age = age_input;
        order = order_input;
    }

    int getage(){
        return age;
    }

    int getorder(){
        return order;
    }

    string getname(){
        return name;
    }
};

bool compare(Person A, Person B){
    if(A.getage() == B.getage()) return A.getorder() < B.getorder();
    else return A.getage() < B.getage();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, age;
    string name;
    cin >> N;
    Person member[N];
    for(int i = 0; i < N; ++i){
        cin >> age >> name;
        member[i].setPersonInfo(age, name, i);
    }

    sort(member, member + N , compare);

    for(int i = 0; i < N; ++i){
        cout << member[i].getage() << ' ' << member[i].getname() << '\n';
    }
}