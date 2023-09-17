#include<iostream>
using namespace std;

class LectureDetails{
    public:
    LectureDetails(string lectureName, string subjectName, string courseName, int lectureNumber){
        name=lectureName;
        subject=subjectName;
        course=courseName;
        lectureNum=lectureNumber;
    }

    void addLectureDetails(string lectureName, string subjectName, string courseName, int lectureNumber){
        name=lectureName;
        subject=subjectName;
        course=courseName;
        lectureNum=lectureNumber;
    }

    void displayLectureDetails(){
        cout<<"lecturer name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"course: "<<course<<endl;
        cout<<"number of lecture: "<<lectureNum<<endl;
    }

    private:
    string name;
    string subject;
    string course;
    int lectureNum;
};

int main(){
    LectureDetails lecturer1("john patel","java","bca",1);
    LectureDetails lecturer2("desy subham","sql","bca",2);
    LectureDetails lecturer3("sanam kadam","paython","bca",3);
    LectureDetails lecturer4("tejashvi singh","c/c++","bca",4);
    LectureDetails lecturer5("darsh gandhi","coa","bca",5);

    cout<<"Lecturer 1 Details:"<<endl;
    lecturer1.displayLectureDetails();
    cout<<endl;

    cout<<"Lecturer 2 Details:"<<endl;
    lecturer2.displayLectureDetails();
    cout<<endl;

    cout<<"Lecturer 3 Details:"<<endl;
    lecturer3.displayLectureDetails();
    cout<<endl;

    cout<<"Lecturer 4 Details:"<<endl;
    lecturer4.displayLectureDetails();
    cout<<endl;

    cout<<"Lecturer 5 Details:"<<endl;
    lecturer5.displayLectureDetails();
    cout<<endl;

    return 0;
}