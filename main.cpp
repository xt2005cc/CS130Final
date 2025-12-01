#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Scores{
    int arr[3];
    int sum;
    double avg;

    Scores(){
        sum = 0;
        avg = 0;
        for(int i = 0; i < 3; i++)
        arr[i]=0;
    }
};

struct Student{
    string name;
    int age;
    Scores scores

    string getName() const{
        return name;
    }
    
    int getAge() const{
        return age;
    }
};

istream& operator>>(istream &in, Student &s){
    if(!(in>>s.name>>s.age)){
        return in;
    }
    s.scores.sum = 0;
    for (int i = 0; i <3; i++){
        in>>s.scores.arr[i];
        s.scores.sum = s.scores.arr[i];
    }
    s.scores.avg = s.scores.sum / 3;
    return in;
}

ostream& operator<<(ostream &out, const Student &s){
    out << s.name << " (" << s.age <<") Scores = ";
    for (int i = 0; i < 3; i++){
        out << s.scores.arr[i] << " ";
    }
    out << "Avg = " << s.scores.avg
    return out;
}

int searchStudent(const vector<Student> &students, const string &key){
    for (int i = 0; i < students.size(); i++){
        if(students[i].getName() == key){
            return i;
        }
    }
    return -1;
}

int main(){
    ifstream ifs("students.data");
    vector<Student> stu;
    Student temp;

    if(!ifs){
        cout << "Error";
        return 1;
    }

    cout << "Reading students"
}