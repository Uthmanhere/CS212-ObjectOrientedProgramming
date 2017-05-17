#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
class Student
{
private:
  //setting identifiers to be private
  unsigned int age = 0;
  unsigned int rollNo = 0;
  string name;
  string address;
  string grade;
  unsigned int marksSubject1 = 0;
  unsigned int marksSubject2 = 0;
  unsigned int marksSubject3 = 30;
  unsigned int totalMarks = 0;
public:
  //setters...
  void set_age(unsigned int a)
  {
    if (a >= 0 && a <= 200) //acceptable age: 0-200
      age = a;
    else
      throw invalid_argument("Invalid data for age.");
  }
  void set_name(string n)
  {
    name = n;
  }
  void set_rollNo(unsigned int r)
  {
    if (r > 0 && r <= 50) //acceptable Roll No.: 1-50
      rollNo = r;
    else
      throw invalid_argument("Invalid data for Roll Number.");
  }
  void set_address(string a)
  {
    address = a;
  }
  void set_marksSubject1(unsigned int m1)
  {
    if (m1 >= 0 && m1 <= get_totalMarks())
      marksSubject1 = m1;
    else
      throw invalid_argument("Invalid marks entered.");
  }
  void set_marksSubject2(unsigned int m2)
  {
    if (m2 >= 0 && m2 <= get_totalMarks())
      marksSubject2 = m2;
    else
      throw invalid_argument("Invalid marks entered.");
  }
  void set_marksSubject3(unsigned int m3)
  {
    if (m3 >= 0 && m3 <= get_totalMarks())
      marksSubject3 = m3;
    else
      throw invalid_argument("Invalid marks entered.");
  }
  void set_totalMarks(unsigned int m)
  {
    totalMarks = m;
  }
  //getters...
  unsigned int get_rollNo()
  {
    return rollNo;
  }
  unsigned int get_age()
  {
    return age;
  }
  string get_name()
  {
    return name;
  }
  string get_address()
  {
    return address;
  }
  unsigned int get_marksSubject1()
  {
    return marksSubject1;
  }
  unsigned int get_marksSubject2()
  {
    return marksSubject2;
  }
  unsigned int get_marksSubject3()
  {
    return marksSubject3;
  }
  unsigned int get_totalMarks()
  {
    return totalMarks;
  }
  double get_perCent(double marks)
  {
    return (marks / get_totalMarks() * 100);
  }
  string get_grade(unsigned int perCent)
  {
    switch (perCent / 10) //making the range integral.     
    {
    case 10:
    case 9:
    case 8:
      return "A+";
      break;
    case 7:
      return "B+";
      break;
    case 6:
      return "B";
      break;
    case 5:
      return "C+";
      break;
    case 4:
      return "C";
      break;
    default:
      return "F";
      break;
    }
  }
  double get_totalPerCent()
  {
    //adding up percentages.
    double result = (get_perCent(get_marksSubject1()));
    result += (get_perCent(get_marksSubject2()));
    result += (get_perCent(get_marksSubject3()));
    //taking mean.
    return result / 3;
  }
  void display()
  {
    system("CLS");
    //title
    cout << "STUDENT ASSESSMENT REPORT" << endl;
    cout << "-------------------------" << endl << endl;
    //student info
    cout << "Name: " << get_name() << endl;
    cout << "Roll Number: " << get_rollNo();
    cout << "\t" << "Age" << get_age() << endl;
    cout << "Address: \n\t" << address << endl;
    cout << "Total Marks:" << get_totalMarks() << endl;
    //tabular result
    cout << "Subject\tMarks\tPercentage\tGrade" << endl;
    cout << "-------\t-----\t----------\t-----" << endl;
    cout << "EE-01\t" << get_marksSubject1() << "\t"
      << get_perCent(get_marksSubject1()) << "\t\t"
      << get_grade(get_perCent(get_marksSubject1()))
      << endl;
    cout << "EE-02\t" << get_marksSubject1() << "\t"
      << get_perCent(get_marksSubject2()) << "\t\t"
      << get_grade(get_perCent(get_marksSubject2()))
      << endl;
    cout << "EE-03\t" << get_marksSubject3() << "\t"
      << get_perCent(get_marksSubject3()) << "\t\t"
      << get_grade(get_perCent(get_marksSubject3()))
      << endl << endl;
    //total result
    cout << "Final Percentage : " << get_totalPerCent();
    cout << "\tFinal Grade : " << get_grade(get_totalPerCent())
      << endl << endl;
  }
};

int main()
{
  //setting colors
  system("color 3a");
  //defining class
  Student anyStudent;
  //initializing variables
  string name;
  string address;
  unsigned int rollNo = 0;
  unsigned int age = 0;
  unsigned int m = 0;
  unsigned int total = 0;
  //title
  cout << "STUDENT ASSESSMENT REPORT DATA" << endl;
  cout << "------------------------------" << endl << endl;
  //setting student data
  cout << "Enter the name of the student: ";
  getline(cin, name);
  anyStudent.set_name(name);
  do
  {
    try
    {
      cout << "Student's Roll Number: ";
      cin >> rollNo;
      anyStudent.set_rollNo(rollNo);
      cout << "Student's age: ";
      cin >> age;
      anyStudent.set_age(age);
      break;
    }
    catch (exception &e)
    {
      cerr << "Error: " << e.what() << endl
        << "Please reenter the values" << endl << endl;
    }
  } while (1);
  cout << "Enter your address here: " << endl << "\t";
  getchar();
  getline(cin, address);
  anyStudent.set_address(address);
  //setting marks
  cout << "Total marks for each subject: ";
  cin >> total;
  anyStudent.set_totalMarks(total);
  do
  {
    try
    {
      cout << "Student's marks in subject1: ";
      cin >> m;
      anyStudent.set_marksSubject1(m);
      cout << "Student's marks in subject2: ";
      cin >> m;
      anyStudent.set_marksSubject2(m);
      cout << "Student's marks in subject3: ";
      cin >> m;
      anyStudent.set_marksSubject3(m);
      break;
    }
    catch (exception &e)
    {
      cerr << "Error: " << e.what() << endl
        << "Please reenter the values" << endl << endl;
    }
  } while (1);
  //display results
  anyStudent.display();
  //Enter to continue...
  system("pause");
  return 0;
}
