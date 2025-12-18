#include<iostream>

class TeamMember
{
    protected:
    std:: string name;
    int memberID;
    double hourlyRate;
    public:
    TeamMember()
    {
        inputData();
    }
 
     friend class ProjectManager;
      void inputData();

    };

    class Developer: public TeamMember
    {
    public:
        int LOC;
        void inputLOC()
    {
        std::cout << "Enter Lines of Code Written: ";
        std::cin >> LOC;
    }
   
    };


    class ProjectManager
    {
        public:
        void accessData(Developer & objTM)
        {
            int  salary=(objTM.hourlyRate*160)+(0.1*objTM.LOC);
            std:: cout<< "Cost for Developer" << objTM.name << ": " << salary <<std::endl;

        }

    };

    void TeamMember::inputData()
     {
        std:: cout<< "Enter Member's Name: ";
        std:: cin>> name;
        std:: cout<< "Enter Member's ID: ";
        std:: cin>> memberID;
        std:: cout<< "Enter Member's Hourly Rate: ";
        std:: cin>> hourlyRate;
     }

    int main()
    {
        Developer objDev;
        objDev.inputLOC();
        ProjectManager manObj;
        manObj.accessData(objDev);


    }
