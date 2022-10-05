#include <iostream>
#include <string>
using namespace std;

class linkedList{
    public:
        string sFName;
        string sLName;
        long long int sMobNo;
        long long int regNo;
        string branch;
        string course;
        linkedList* next;
        int regCount = 1;
        linkedList(string fname, string lname, long long int mob, string branch, long long int regNo, string course){
            this -> sFName = fname;
            this -> sLName = lname;
            this -> sMobNo = mob;
            this -> branch = branch;
            this -> course = course;
            this -> regNo = regNo;
            regCount++;
            this -> next = NULL;
        }
};

void admission(string fname, string lname, long long int mob, string branch, string course, long long int regNo, linkedList* &head, linkedList* &tail){
    linkedList* nw = new linkedList(fname, lname, mob, branch, regNo, course);
    if(head == NULL){
        head = nw;
        tail = nw;
    }
    else{
        tail -> next = nw;
        tail = nw;
    }
}

void showDetails(linkedList* &head){
    cout<<"1. SHOW ALL STUDENT DETAILS"<<endl;
    cout<<"2. SEARCH MANUALLY"<<endl;
    cout<<"0. GO BACK"<<endl;

    int choice4;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>choice4;

    if(choice4 == 0){
        return;
    }
    
    linkedList* temp = head;

    switch (choice4)
    {
    case 1:
        while(temp != NULL){
            cout<<"name = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
            cout<<"mob = "<<temp -> sMobNo<<endl;
            cout<<"branch = "<<temp -> branch<<endl;
            cout<<"course = "<<temp -> course<<endl;
            temp = temp -> next;
        }
        break;
    
    case 2:
        long long int regNo;
        cout<<"ENTER REGISTRATION NO : ";
        cin>>regNo;

        while(temp != NULL && temp -> regNo != regNo){
            temp = temp -> next;
        }

        if(temp == NULL){
            cout<<"there is no student id "<<regNo<<" in the erp"<<endl;
            break;
        }

        cout<<"name = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
        cout<<"mob = "<<temp -> sMobNo<<endl;
        cout<<"branch = "<<temp -> branch<<endl;
        cout<<"course = "<<temp -> course<<endl;
        break;

    default:
        break;
    }

   
}

void collegeInfo(){

    string profile1[8] = {"year_established", "address", "city", "state", "country", "phone", "e-mail", "website"};
    string profile2[8] = {"2010", "Ramachandrapur", "Jatani-BBSR", "Odisha", "India", "(0674)-2490480", "info@cutm.ac.in", "cutm.ac.in"};

    string rooms1[8] = {"AR-10", "AR-105", "AR-106", "AR-107", "AR-108", "AR-11", "AR-115", "AR-13"};
    string rooms2[8] = {"class-room", "CHEMISTRY-LAB", "CHEMISTRY-LAB", "SIMULATION-LAB", "POWER-SYSTEM-LAB", "CLASSROOM", "ADVANCE-COMPUTER-LAB", "OPERATING-SYSTEM-LAB"};

    string department1[8] = {"MAMATA-GARANAYAK", "NILAMADHAB-DASH", "BUBUN-MOHANTA", "SHIVANI-NANDA", "SASMITA-KUMARI-NAYAK", "SUJAVA-CHAKRAVARTY", "SUVENDU-KUMAR-NAYAK", "SANGRAM KESHARI SWAIN"};
    string department2[8] = {"PROFESSOR", "ASSISTANT-PROFESSOR", "TEACHING-ASSISTANT", "ASSISTANT-PROFESSOR", "ASSISTANT-PROFESSOR", "ASSISTANT-PROFESSOR", "ASSISTANT-PROFESSOR", "DEAN-STUDENTS-WELFARE"};

    string calender1[10] = {"12/07/2021", "30/08/2021", "10/09/2021", "13/10/2021", "25/12/2021", "01/01/2022" "05/02/2022", "01/03/2022", "15/04/2022", "03/05/2022"};
    string calender2[10] = {"RATHA-YATRA", "JANMASTAMI", "GANESH-PUJA", "DURGA-PUJA", "X-MAS-DAY", "NEW-YEAR", "SARASWATI-PUJA", "MAHA-SIVARATRI", "GOOD-FRIDAY", "ID-UL-FITRE"};

    while(true){
        cout<<"1. PROFILE"<<endl;
        cout<<"2. ROOMS"<<endl;
        cout<<"3. DEPARTMENT"<<endl;
        cout<<"4. CALENDER"<<endl;
        cout<<"0. GO BACK"<<endl;

        int choice1;
        cout<<"ENTER YOUR CHOICE : ";
        cin>>choice1;

        system("cls");
        if(choice1 == 0){
            break;
        }

        switch (choice1)
        {
        case 1:
            cout<<endl<<endl;
            cout<<"------CENTURION UNIVERSITY OF TECHNOLOGY AND MANAGEMENT-------"<<endl<<endl;;
            for(int i=0;i<8;i++){
                cout<<profile1[i]<<" = "<<profile2[i]<<endl;
                cout<<"---------------------------"<<endl;
            }
            system("pause");
            system("cls");
            break;

        case 2:
            cout<<endl<<endl;
            cout<<"--------ROOMS---------"<<endl<<endl;
            for(int i=0;i<8;i++){
                cout<<rooms1[i]<<" == "<<rooms2[i]<<endl;
                cout<<"--------------------------------"<<endl;
            }
            system("pause");
            system("cls");
            break;

        case 3:
            cout<<endl<<endl;
            cout<<"----------DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING-----------"<<endl<<endl;
            for(int i=0;i<8;i++){
                cout<<department1[i]<<" == "<<department2[i]<<endl;
                cout<<"------------------------------------------"<<endl;
            }

            system("pause");
            system("cls");
            break;
        
        case 4:
            cout<<endl<<endl;
            cout<<"------------CALENDER-------------"<<endl;
            cout<<endl;
            for(int i=0;i<10;i++){
                cout<<calender1[i]<<" == "<<calender2[i]<<endl;
                cout<<"------------------------------------"<<endl;
            }

            system("pause");
            system("cls");
            break;

        default:
            cout<<"WRONG INPUT"<<endl;
            break;
        }
    }
}

void add(linkedList* &head, linkedList* &tail){
    int count = 1;
    while(count){
        string fname;
        cout<<"enter the first name of the student : ";
        cin>>fname;

        string lname;
        cout<<"enter the last name of the student : ";
        cin>>lname;

        long long int mob;
        cout<<"enter mob no of student : ";
        cin>>mob;

        string branch;
        cout<<"enter branch of student : ";
        cin>>branch;

        string course;
        cout<<"enter course of student : ";
        cin>>course;

        long long int regNo;
        cout<<"ENTER REGnO OF THE STUDENT : ";
        cin>>regNo;

        admission(fname, lname, mob, branch, course, regNo, head, tail);

        cout<<endl<<endl<<endl;

        // showDetails(head); ===============================================

        // collegeInfo(); ==============================================
        count--;
    }
    system("cls");
}

void loginAsManager(linkedList* &head, linkedList* &tail){
    system("cls");
    while(true){
        cout<<"1. ADMISSION"<<endl;
        cout<<"2. SHOW DETAILS"<<endl;
        cout<<"0. GO BACK"<<endl;

        int choice3;
        cout<<"ENTER YOUR CHOICE :";
        cin>>choice3;

        system("cls");

        if(choice3 == 0){
            system("cls");
            return;
        }

        switch (choice3)
        {
        case 1:
            add(head, tail);
            break;
        case 2:
            showDetails(head);
        default:
            break;
        }
    }
}

class ERP{
    public:
        
        ERP(){
            linkedList* head = NULL;
            linkedList* tail = NULL;

            while(true){
                cout<<"1. LOGIN AS ERP MANAGER"<<endl;
                cout<<"2. LOGIN AS STUDENT"<<endl;
                cout<<"0. EXIT"<<endl;
                
                int choice2;
                cout<<"ENTER YOUR CHOICE : ";
                cin>>choice2;

                if(choice2 == 0){
                    cout<<"THANK YOU FOR VISITING"<<endl;
                    break;
                }

                switch (choice2)
                {
                case 1:
                    loginAsManager(head, tail);
                    break;
                
                default:
                    break;
                }
            }
        }
};

int main(){
    system("cls");
    ERP E1;
    
    return 0;
}