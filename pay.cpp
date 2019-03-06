using namespace std;
#include <iostream>
#include <fstream>
#include "person.cpp"


void readData(Person employee[], fstream &inData, int N);
void writeData(Person employee[], fstream &inData, int N);
int main(){

fstream inData;

int N = 20;

Person employee[N];

readData(employee, inData, N);
writeData(employee, inData, N);


return 0;
}
void readData(Person employee[], fstream &inData, int N){

inData.open("input.txt", ios::in);

string fName, lName;
float rate, hours;



  for(int i = 0; i < N; i++){
    if(!inData.eof())
    {
    inData >> fName >> lName >> hours >> rate;


        employee[i].setFirstName(fName);
        employee[i].setLastName(lName);
        employee[i].setHoursWorked(hours);
        employee[i].setPayRate(rate);

   }
   else
      break;

  }
  inData.close();

}
void writeData(Person employee[], fstream &inData, int N){
     inData.open("output.txt", ios::out);

     inData <<  employee[0].fullName() << "\t" << employee[0].totalPay() << endl;

        for(int i = 1; i < N; i++){
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
