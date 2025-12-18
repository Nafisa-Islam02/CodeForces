#include<string>
#include<iostream>
using namespace std;

class employee{
protected:
string name;
int employee_ID;
double base_SALARY;
public:
friend class parmanent_EMP;
friend class contract_EMP;

};
class parmanent_EMP : public employee{
public:
    int years_of_service;
    friend class HRDepartment;
    parmanent_EMP(string nme, int id, double slary )
    {
        name=nme;
        employee_ID=id;
        base_SALARY=slary;
    }


} ;
class contract_EMP : public employee{
public:
    int years_of_service;
    friend class HRDepartment;
    contract_EMP(string nme, int id, double slary )
    {
        name=nme;
        employee_ID=id;
        base_SALARY=slary;
    }

} ;
class HRDepartment{
    public:
   void bonous( contract_EMP n){
   cout<<"Bonous for contract employee:"<<n.name << (0.05*n.base_SALARY)+n.base_SALARY<< endl;

   }
      void bonous( parmanent_EMP n){
   cout<<"Bonous for parmanent employee:"<<n.name << (0.05*n.base_SALARY)+n.base_SALARY<< endl;

   }
};

int main(){
parmanent_EMP e1("John",2410057,12000);
contract_EMP e2("Alice",2410058,80000);

HRDepartment hr;
hr.bonous(e1);
hr.bonous(e2);

return 0;
}