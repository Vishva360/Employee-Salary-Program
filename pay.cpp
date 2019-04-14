//Vishva Patel
//Section #2
using namespace std;
#include <iostream>
#include <fstream>
#include "person.cpp"
#include <vector>

void readData(vector<Person> & employee, fstream &inData);
void writeData(vector<Person> & employee, fstream &inData);
int main(){

fstream inData;



vector<Person> employee;

readData(employee, inData);
writeData(employee, inData);


return 0;
}
void readData(vector<Person> & employee, fstream &inData){

inData.open("input.txt", ios::in);

string fName, lName;
float rate, hours;



  while(inData >> fName >> lName >> hours >> rate)
  {
    employee.emplace_back(fName, lName, hours, rate);
  }

  inData.close();

}
void writeData(vector<Person> & employee, fstream &inData){
     inData.open("output.txt", ios::out);

     inData <<  employee[0].fullName() << "\t" << employee[0].totalPay() << endl;

        for(int i = 1; i < employee.size(); i++){
          if(employee[i].fullName() == employee[i-1].fullName())
          {
            break;
          }
          else
        {
          inData <<  employee[i].fullName() << "\t" << employee[i].totalPay() << endl;
        }
}
     inData.close();
}
