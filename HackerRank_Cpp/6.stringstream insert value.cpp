#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    private:
        int age;
        string fname;
        string lname;
        int standard;
    public:
        void set_age(int page){
            age = page;
        }
        void set_standard(int pstandard){
            standard = pstandard;
        }
        void set_first_name(string pfname){
            fname = pfname;
        }
        void set_last_name(string plname){
            lname = plname;
        }
        int get_age(){
            return age;
        }
        string get_last_name(){
            return lname;
        }
        string get_first_name(){
            return fname;
        }
        int get_standard(){
            return standard;
        }
        string to_string (){
            stringstream s;
            char ch = ',';
            s << age << ch<< fname<<ch<<lname<<ch<<standard;
            return s.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}