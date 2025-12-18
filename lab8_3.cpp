#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//[Missing Code 1] ฟังก์ชันตัดเกรดจากข้อที่แล้ว
char findGrade(double score) {
    if (score > 90) return 'A';
    else if (score > 75) return 'B';
    else if (score > 60) return 'C';
    else if (score > 45) return 'D';
    else return 'F';
}

int main(){
    //Input the number of students
    int N, i = 0;
    cout << "Enter the number of students: ";
    cin >> N;
    string name[N];
    float score[N];

    //Store names and scores of students into an array
    while(i < N){
        cout << "Name of student " << i+1 << ": ";
        cin.ignore(); // ล้าง buffer เพื่อให้ getline ทำงานได้ถูกต้อง
        //[Missing Code 2] รับชื่อที่อาจมีช่องว่าง
        getline(cin, name[i]);
        
        cout << "Score of student " << i+1 << ": ";
        //[Missing Code 3] รับคะแนนเก็บลง array
        cin >> score[i];
        i++;
    }

    //Print names scores and grades
    i = 0;
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    while(i < N){
        cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
        i++;
    }
    cout << "---------------------------------------------\n";

    return 0;
}