#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

    string ffname111;
    string llname111;
    string fname111[5];
    string lname111[5];
    long long int regNOO[5];

    int q1111[5];
    int q2111[5];
    int q3111[5];
    int q4111[5];
    int q5111[5];

    string q11111[5] = {"TEACHER COVERS THE SYLABUS COMPLETELY IN TIME", "TEACHER COMES TO THE CLASS ON TIME", "TEACHING IS WELL PLANNED", "DID YOU FEEL ENCOURAGE TO ASK QUESTIONS", "AIMS AND OBJECTIVES MADE CLEAR"};
    
    string q22111 = "TEACHER COMES TO THE CLASS ON TIME";
    string q33111 = "TEACHING IS WELL PLANNED";
    string q44111 = "DID YOU FEEL ENCOURAGE TO ASK QUESTIONS";
    string q55111 = "AIMS AND OBJECTIVES MADE CLEAR";

    int q01111 = 0;
    int q02111 = 0;
    int q03111 = 0;
    int q04111 = 0;
    int q05111 = 0;
    

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

    system("cls");

    cout<<"\n==========================================================="<<endl;
    cout<<"-------------------<-ADMISSION DETAILS->-------------------"<<endl;
    cout<<"==========================================================="<<endl<<endl;
    cout<<endl;

    cout<<endl;
    cout<<"=============================================="<<endl;
    cout<<"|| 1. GET ALL STUDENTS INFORMATION          ||"<<endl;
    cout<<"|| 2. SHOW PERTICULAR STUDENT INFORMATION   ||"<<endl;
    cout<<"|| 0. GO BACK                               ||"<<endl;
    cout<<"=============================================="<<endl;
    cout<<endl;

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

        system("cls");

        cout<<"\n==========================================================="<<endl;
        cout<<"-------------------<-ADMISSION DETAILS->-------------------"<<endl;
        cout<<"==========================================================="<<endl<<endl;
        cout<<endl;

        while(temp != NULL){
            cout<<"================================="<<endl;
            cout<<"name = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
            cout<<"mob = "<<temp -> sMobNo<<endl;
            cout<<"branch = "<<temp -> branch<<endl;
            cout<<"course = "<<temp -> course<<endl;
            temp = temp -> next;
            cout<<"================================="<<endl;
        }

        cout<<endl;
        system("pause");
        system("cls");

        break;
    
    case 2:

        system("cls");

        cout<<"\n==========================================================="<<endl;
        cout<<"-------------------<-ADMISSION DETAILS->-------------------"<<endl;
        cout<<"==========================================================="<<endl<<endl;
        cout<<endl;

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
        cout<<endl;

        cout<<"----------------------------------"<<endl;

        cout<<"NAME = "<<temp -> sFName<<" "<<temp -> sLName <<endl;
        cout<<"MOBILE NO  = "<<temp -> sMobNo <<endl;
        cout<<"BRANCH = "<<temp -> branch <<endl;
        cout<<"COURSE = "<<temp -> course <<endl;
        cout<<"REG NO = "<<temp -> regNo <<endl;

        cout<<"*****************************"<<endl;
        cout<<endl<<endl;

        system("pause");
        system("cls");

        break;

    default:
        cout<<"WRONG INPUT"<<endl;
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

            cout<<"\n==================================================="<<endl;
            cout<<"----------------<-COLLEGE PROFILE->----------------"<<endl;
            cout<<"==================================================="<<endl;
            cout<<endl<<endl;

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

            cout<<"\n==================================================="<<endl;
            cout<<"------------<-INFORMATION OF ALL ROOMS->-----------"<<endl;
            cout<<"==================================================="<<endl;
            cout<<endl;

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

            system("cls");

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

            system("cls");

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

    system("cls");

    ofstream f1;
    f1.open("AdmissionData.txt", ios::app);

    cout<<"\n================================================="<<endl;
    cout<<"----------------ADMISSION SECTION----------------"<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;

    int count = 1;

    
    string fname;
    string lname;
    long long int mob;
    string branch;
    string course;
    long long int regNo;

    while(count){
        cout<<"ENTER FIRST NAME OF THE STUDENT : ";
        cin>>fname;

        cout<<"ENTER LAST NAME OF THE STUDENT : ";
        cin>>lname;


        while(true){

            cout<<"ENTER MOBILE NO OF STUDENT : ";
            cin>>mob;

            long long int tempMob = mob;
            int count1 = 0;

            while(tempMob){
                tempMob /= 10;
                count1++;
            }

            if(count1 == 10){
                break;
            }

            else{
                cout<<endl;
                cout<<"{----------------------------------------}"<<endl;
                cout<<"{---MOBILE NO MUST CONTAIN 10 DIGIT NO---}"<<endl;
                cout<<"{------PLEASE ENTER MOBILE NO AGAIN------}"<<endl;
                cout<<"{----------------------------------------}"<<endl;
                cout<<endl;
            }
        }
        // cout<<"enter mob no of student : ";
        // cin>>mob;

        cout<<"ENTER BRANCH OF STUDENT : ";
        cin>>branch;

        cout<<"ENTER COURSE OF STUDENT : ";
        cin>>course;


        while(true){

            cout<<"ENTER REGnO OF THE STUDENT : ";
            cin>>regNo;

            long long int temp = regNo;
            int count = 0;

            while(temp){
                temp /= 10;
                count++;
            }

            if(count == 12){
                break;
            }
            else{
                cout<<endl;
                cout<<"{--------------------------------------}"<<endl;
                cout<<"{<--REG. NO MUST CONTAIN 12 DIGIT NO-->}"<<endl;
                cout<<"{<-----PLEASE ENTER REG. NO AGAIN----->}"<<endl;
                cout<<"{--------------------------------------}"<<endl;
                cout<<endl;
            }

        }

        admission(fname, lname, mob, branch, course, regNo, head, tail);

        cout<<endl<<endl<<endl;

        cout<<"{<----ADMISSION SUCCESSFUL---->}"<<endl;

        // showDetails(head);

        // collegeInfo(); 


        count--;
    }

    f1 << "-----------------------------"<<endl;

    f1 << "NAME = " << fname << " ";
    f1 << lname << endl;

    f1 << "REG. NO = " << regNo << endl;
    
    f1 << "COURSE = " << course <<endl;

    f1 << "BRANCH = " << branch << endl;

    f1 << "MOBILE NO. = "<< mob << endl <<endl;
    
    f1 << "-----------------------------"<<endl;

    system("pause");
    system("cls");

}

void displayFeedback(linkedList* head, linkedList* &tail){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"-----------<-FEEDBACKS OF ALL STUDENTS->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    int start = 0;
    cout<<"-----------------------------"<<endl;
    cout<<"NAME = "<<fname111[start]<< fname111[start]<<endl;
    cout<<"q1 RATTING : "<<q1111[start]<<endl;
    cout<<"q2 RATTING : "<<q2111[start]<<endl;
    cout<<"q3 RATTING : "<<q3111[start]<<endl;
    cout<<"q4 RATTING : "<<q4111[start]<<endl;
    cout<<"q5 RATTING : "<<q5111[start]<<endl;
    cout<<"-----------------------------"<<endl;

    system("pause");
    system("cls");

}

void loginAsManager(linkedList* &head, linkedList* &tail){  ///=====================================================================================

    system("cls");

    cout<<endl;
    cout<<"==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    
        int ch;
        start:
        string user, pass;

    while(true){
        cout<<"Enter Loginid : ";
        cin>>user;
        cout<<"Enter Password : ";
        ch = getch();

        while(ch != 13){
            pass.push_back(ch);
            cout<<"*";
            ch = getch();
        }
        if(user == "erpmanagement" && pass == "erp1234"){
            time_t now;

            struct tm nowLocal;

            now = time(NULL);

            nowLocal = *localtime(&now);

            // cout<<"LOGIN DATE : "<<nowLocal.tm_mday<<" / "<<nowLocal.tm_mon+1<<" / "<<nowLocal.tm_year + 1900<<endl;
            // cout<<"LOGIN TIME : "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;

            ofstream f2;
            f2.open("ManagerLoginHistory.txt", ios::app);

            f2<<endl<<"-----------------------------"<<endl;
            f2<<"LOGIN DATE = "<<nowLocal.tm_mday<<" /"<<nowLocal.tm_mon+1<<" /"<<nowLocal.tm_year<<endl;
            f2<<"LOGIN TIME = "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;
            f2<<"-----------------------------"<<endl<<endl;

            break;
        }
        else{
            cout<<"wrong password"<<endl;
            goto start;
        }

        

    }

    while(true){

        cout<<endl;
        cout<<"====================================="<<endl;
        cout<<"|| 1. ADMISSION                    ||"<<endl;
        cout<<"|| 2. ADMISSION DETAILS            ||"<<endl;
        cout<<"|| 3. SEARCH DETAILS FOR A STUDNET ||"<<endl;
        cout<<"|| 0. LOG OUT                      ||"<<endl;
        cout<<"====================================="<<endl;
        cout<<endl;

        int choice3;
        cout<<"ENTER YOUR CHOICE :";
        cin>>choice3;

        linkedList* temp = head;


        system("cls");

        if(choice3 == 0){
            system("cls");
            return;
        }

        switch (choice3)
        {
        case 1:

            system("cls");
            add(head, tail);
            system("pause");
            system("cls");
            break;

        case 2:

            system("cls");
            showDetails(head);
            system("pause");
            system("cls");
            break;

        case 3:

            system("cls");
            long long int regNo;
            cout<<"ENTER REGISTRATION NO : ";
            cin>>regNo;

            while(temp != NULL && temp -> regNo != regNo){
                temp = temp -> next;
            }

            if(temp == NULL){
                cout<<"TEHRE IS NO STUDENT ID "<<regNo<<" IN THE ERP"<<endl;
                break;
            }

            else{

                cout<<"NAME = "<< temp -> sFName <<" "<< temp -> sLName <<endl;
                cout<<"MOB = "<< temp -> sMobNo <<endl;
                cout<<"BRANCH = "<< temp -> branch <<endl;
                cout<<"COURSE = "<< temp -> course <<endl;
                cout<<"REG. NO = "<< temp -> regNo << endl;
                break;

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

void assignments(linkedList* &head, linkedList* &tail){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ASSIGNMENT SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    string assignments1DT[5] = {"25/04/2022", "26/04/2022", "27/04/2022", "28/04/2022", "29/04/2022"};
    string assignments1Sub[5] = {"JAVA-TECHNOLOGIES", "DATA-STRUCTURES-AND-ALGORITHMS", "ADVANCED-WEB-PROGRAMMING", "INDUSTRIAL-IOT", "FORMAL-LANGUAGE-AND-AUTOMATA-THEORY"};
    string assignments1ASS[5] = {"ASSIGNMENT-1", "ASSIGNMENT-2", "ASSIGNMENT-3", "ASSIGNMENT-4", "ASSIGNMENT-5"};


    for(int i=0;i<5;i++){
        cout<<assignments1DT[i]<<" == "<<assignments1Sub[i]<<" == "<<assignments1ASS[i]<<endl;
        cout<<"--------------------------------------------------------"<<endl;
    }

    system("pause");
    system("cls");
}

void attendance(){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ATTENDANCE SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"------------------APRIL MONTH------------------"<<endl;
    cout<<"01--02--03--04--05--06--07--08--09--10--11--12"<<endl;
    cout<<"|A|-|A|-|p|-|p|-|p|-|A|-|p|-|p|-|A|-|p|-|p|-|A|"<<endl;
    cout<<"|A|-|A|-|A|-|A|-|p|-|p|-|A|-|p|-|p|-|A|-|A|-|p|"<<endl;
    cout<<"|P|-|p|-|p|-|A|-|p|-|p|-|p|-|p|-|p|-|p|-|p|-|p|"<<endl;
    cout<<"|P|-|A|-|p|-|p|-|p|-|p|-|p|-|p|-|A|-|p|-|p|-|p|"<<endl;
    cout<<"|P|-|A|-|p|-|A|-|p|-|p|-|A|-|p|-|A|-|p|-|p|-|A|"<<endl;
    cout<<"|P|-|A|-|A|-|p|-|p|-|A|-|p|-|A|-|p|-|p|-|p|-|p|"<<endl;
    cout<<endl;
    cout<<"OVERALL ATTENDANCE : 78/90 : "<<(78*100)/90<<"%";

    system("pause");
    system("cls");

}

void courses(){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"-----------------<-COURSE SECTION->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"---------------NAME---------------   SUBJECT    COURSES  CREDIT"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<"--------MAMATA-GARANAYAK----------   --DS---    THEORY   ---3--"<<endl;
    cout<<"---------NILAMADHAB-DASH----------   --AWP--    THEORY   ---3--"<<endl;
    cout<<"----------BUBUN-MOHANTA-----------   -FLAT--   PRACTICAL ---3--"<<endl;
    cout<<"-------SUVENDU-KUMAR-NAYAK--------   --OS---    THEORY   ---4--"<<endl;
    cout<<"----------SHIVANI-NANDA-----------   -OOPS--    THEORY   ---3--"<<endl;

    system("pause");
    system("cls");

}

void fee(linkedList* &head, linkedList* &tail, long long int reg){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"------------------<-FEE SECTION->------------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    linkedList* temp = head;
    cout<<"------------------------------------------"<<endl;
    while(temp != NULL && temp -> regNo != reg){
        temp = temp -> next;

    }
    
    cout<<"NAME = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
    cout<<"COURSE = "<<temp -> course<<endl;
    cout<<"BRANCH = "<<temp -> branch<<endl;
    cout<<"TOTAL FEE = "<<12500<<endl;
    cout<<"PAID = "<<60000<<endl;
    cout<<"AMOUNT TO PAY = "<< 12500 - 60000 <<endl;
    cout<<"--------------------------------"<<endl;
    cout<<endl<<endl;

    system("pause");
    system("cls");
}

void reportcard(linkedList* &head, linkedList* &tail, long long int reg){

    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-REPORT CARD SECTION->--------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    linkedList* temp = head;
    cout<<"---------------------------------"<<endl;
    while(temp != NULL && temp -> regNo != reg){
        temp = temp -> next;

    }
    
    cout<<"NAME = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
    cout<<"COURSE = "<<temp -> course<<endl;
    cout<<"BRANCH = "<<temp -> branch<<endl;

    float sem1 = 9.03;
    float sem2 = 9.40;
    float sem3 = 7.98;

    cout<<"SGPA IN 1ST SEM : "<<sem1<<endl;
    cout<<"SGPA IN 2ND SEM : "<<sem2<<endl;
    cout<<"SGPA IN 3RD SEM : "<<sem3<<endl;
    cout<<endl;

    cout<<"CGPA IN ALL : "<< (sem1+sem2+sem3)/3 <<endl;
    cout<<"-----------------------"<<endl;
    cout<<endl<<endl;

    system("pause");
    system("cls");
}

void performance(linkedList* &head, linkedList* &tail, long long int reg){
    
    system("cls");

    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-PERFORMANCE SECTION->--------------"<<endl;
	cout<<"==================================================="<<endl;
	cout<<endl;

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

    linkedList* temp = head;
    cout<<"---------------------------------"<<endl;
    while(temp != NULL && temp -> regNo != reg){
        temp = temp -> next;

    }

    cout<<"NAME = "<<temp -> sFName<<" "<<temp -> sLName<<endl;
    cout<<"COURSE = "<<temp -> course<<endl;
    cout<<"BRANCH = "<<temp -> branch<<endl;

    int ds = 10;
    int iot = 20;
    int flat = 7;
    int dymola = 9;
    int java = 10;

    cout<<"DATA STRUCTURE : "<<ds<<"/10"<<endl;
    cout<<"INDUSTRIAL IOT : "<<ds<<"/20"<<endl;
    cout<<"FORMAL LANGUAGE : "<<ds<<"/10"<<endl;
    cout<<"INTEGRATION DYMOLA : "<<ds<<"/10"<<endl;
    cout<<"JAVA TECHNOLOGY : "<<ds<<"/10"<<endl;
    
    cout<<endl;
    cout<<"TOTAL PERCENT : "<<((ds + iot + flat + dymola + java)*100)/5;

    cout<<endl;
    system("pause");
    system("cls");

}

void feedback(linkedList* &head, linkedList* &tail, long long int reg){



    string ffname111;
    string llname111;
    string fname111[5];
    string lname111[5];
    long long int regNOO[5];

    int q1111[5];
    int q2111[5];
    int q3111[5];
    int q4111[5];
    int q5111[5];

    linkedList* temp = head;

    cout<<"---------------------------------"<<endl;
    while(temp != NULL && temp -> regNo != reg){
        temp = temp -> next;

    }

    cout<<"ENTER YOUR FIRST NAME : ";
    cin>>ffname111;
    cout<<"ENTER YOUR LAST NAME : ";
    cin>>llname111;

    string q11111[5] = {"TEACHER COVERS THE SYLABUS COMPLETELY IN TIME", "TEACHER COMES TO THE CLASS ON TIME", "TEACHING IS WELL PLANNED", "DID YOU FEEL ENCOURAGE TO ASK QUESTIONS", "AIMS AND OBJECTIVES MADE CLEAR"};
    
    string q22111 = "TEACHER COMES TO THE CLASS ON TIME";
    string q33111 = "TEACHING IS WELL PLANNED";
    string q44111 = "DID YOU FEEL ENCOURAGE TO ASK QUESTIONS";
    string q55111 = "AIMS AND OBJECTIVES MADE CLEAR";

    int q01111 = 0;
    int q02111 = 0;
    int q03111 = 0;
    int q04111 = 0;
    int q05111 = 0;

    int count = 5;
    
    int start = 0;
    int n;

    fname111[start] = ffname111;
    lname111[start] = llname111;

    while(1){
        cout<<"TEACHER COVERS THE SYLABUS COMPLETELY IN TIME : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            q1111[start] = n;
            start++;
            break;

        }
    }

    while(1){
        cout<<"TEACHER COMES TO THE CLASS ON TIME : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            q2111[start] = n;

            start++;
            break;
        }
    }

    while(1){
        cout<<"TEACHING IS WELL PLANNED : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            q3111[start] = n;
            start++;
            break;
        }
    }

    while(1){
        cout<<"DID YOU FEEL ENCOURAGE TO ASK QUESTIONS : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            q4111[start] = n;
            start++;
            break;
        }
    }

    while(1){
        cout<<"AIMS AND OBJECTIVES MADE CLEAR : ";
        cin>>n;
        cout<<endl;
        if(n<6 && n>0){
            q5111[start] = n;
            start++;
            break;
        }
    }

}

void loginAsStudent(linkedList* &head, linkedList* &tail){  // 


    long long int reg_no;
    long long int password;
    bool found = false;
    int n;
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    cout<<"enter your registration no : ";
    cin>>reg_no;

    linkedList* temp = head;
    while(temp != NULL && temp -> regNo != reg_no){
        temp = temp -> next;
    }

    if(temp == NULL){
        system("cls");
        cout<<endl;
        cout<<"========================"<<endl;
        cout<<"|| unknown user found ||"<<endl;
        cout<<"========================"<<endl;
        system("pause");
        return;
        system("cls");
    }

    else{
        cout<<"enter your password : ";
        cin>>password;
        if(password == reg_no){
            found = true;
        }
    }

    if(!found){
        cout<<endl;
        system("cls");
        cout<<"========================"<<endl;
        cout<<"|| unknown user found ||"<<endl;
        cout<<"========================"<<endl;
        return;
    }

    if(found){
        time_t now;

        struct tm nowLocal;

        now = time(NULL);
        nowLocal = *localtime(&now);

        // cout<<"LOGIN DATE : "<<nowLocal.tm_mday<<" / "<<nowLocal.tm_mon+1<<" / "<<nowLocal.tm_year + 1900<<endl;
        // cout<<"LOGIN TIME : "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;
        ofstream f3;
        f3.open("StudentLoginHistory.txt", ios::app);

        f3<<endl<<"-----------------------------"<<endl;
        f3<<"LOGIN DATE = "<<nowLocal.tm_mday<<" /"<<nowLocal.tm_mon+1<<" /"<<nowLocal.tm_year<<endl;
        f3<<"LOGIN TIME = "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;
        f3<<"-----------------------------"<<endl<<endl;


        while(true){
            system("cls");
            cout<<endl;
            cout<<"============================================================"<<endl;
            cout<<"|| 1. ASSIGNMENTS\t2. ATTENDANCE\t3. COLLEGE INFO   ||\n";
            cout<<"|| 4. COURSES\t\t5. FEES\t\t6. MY REPORT CARD ||"<<endl;
            cout<<"|| 7. PERFORMANCE\t8. FEEDBACK\t0. LOGOUT         ||"<<endl;
            cout<<"============================================================"<<endl;

            cout<<"\nEnter your choice : ";
            cin>>n;
            if(n == 0){
                cout<<"\nthank you for visiting\n";
                break;
            }

            system("cls");

            switch (n)
            {
            case 1:
                cout<<endl;
                assignments(head, tail);
                cout<<endl;
                break;
            case 2:
                cout<<endl;
                attendance();
                cout<<endl;
                break;
            case 3:
                cout<<endl;
                collegeInfo();
                cout<<endl;
                break;
            case 4:
                cout<<endl;
                courses();
                cout<<endl;
                break;
            case 5:
                cout<<endl;
                fee(head, tail, reg_no);
                cout<<endl;
                break;
            case 6:
                cout<<endl;
                reportcard(head, tail, reg_no);
                cout<<endl;
                break;
            case 7:
                cout<<endl;
                performance(head, tail, reg_no);
                cout<<endl;
                break;
            case 8:
                cout<<endl;
                feedback(head, tail, reg_no);
                cout<<endl;
                break;
            default:
                cout<<"\nenter the right key"<<endl<<endl;
            }
        }

        system("pause");
        system("cls");

    }
}



void giveassign(){

    cout<<endl;
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-GIVE ASSIGNMENT->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    
    string date;
    string subject;
    string assignmentno;

    ofstream give;
    give.open("ASSIGNMENTS.TXT", ios::app);

    cout<<"enter date : ";
    cin>>date;
    give<<date<<"\t";

    cout<<"enter subject name : ";
    cin>>subject;
    give<<subject<<"\t";

    cout<<"enter assignment no : ";
    cin>>assignmentno;
    give<<assignmentno<<"\n";

    give.close();

    system("pause");
    system("cls");

}

void assignment(linkedList* &head, linkedList* &tail){

    system("cls");

    cout<<endl;
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ASSIGNMENT SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while (true){

        cout<<endl;
        cout<<"==============================="<<endl;
        cout<<"|| 1. SHOW ASSIGNMENTS GIVEN ||"<<endl;
        cout<<"|| 2. GIVE ASSIGNMENTS       ||"<<endl;
        cout<<"|| 0. GO BACK                ||"<<endl;
        cout<<"==============================="<<endl;

        int n;
        cout<<"\nenter your choice : ";
        cin>>n;

        if(n == 0){
            system("cls");
            break;
        }

        switch (n)
        {
        case 1:

            cout<<endl;
            assignments(head, tail);
            cout<<endl;
            break;

        case 2:

            cout<<endl;
            giveassign();
            cout<<endl;
            break;

        default:
            break;
        }
    }


}

void showattendance(linkedList* &head, linkedList* &tail){

    string date;
    string fname;
    string lname;
    
    string colon;
    char PorA;

    ifstream showatt;
    showatt.open("0_GIVEATTENDANCE.TXT", ios::app);

    cout<<"***********************************************"<<endl;
    bool found = false;

    while(showatt >> date >> fname >> lname >> colon >> PorA){
        cout<<date<<"      "<<fname<<" "<<lname<<"       "<<colon<<"       "<<PorA<<endl;
        found = true;
    }
    cout<<"_______________________________________________"<<endl;

    if(!found){
        cout<<"NO DATA PRESENT IN THE ATTENDANCE SECTION"<<endl;
    }

    showatt.close();

    system("pause");
    system("cls");

}

void giveattendance(linkedList* &head, linkedList* &tail){
    char PA;
    string fnam, lnam;
    long long int reg;

    string email;
    string course, branch;
    char sec;

    ofstream giveatten;
    giveatten.open("0_GIVEATTENDANCE.TXT", ios::app);
    
    cout<<"\n==================================================="<<endl;
    cout<<"----------------<-GIVE ATTENDANCE->----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    string colon = ":";
    string date;

    cout<<"date : ";
    cin>>date;

    linkedList* temp = head;

    while(temp != NULL){

        while(true){

            cout<<temp -> sFName<<" "<<temp->sLName<<"  :  "<<temp -> regNo<<" : (P/A) = ";
            cin>>PA;
            if(PA == 'p' || PA == 'P' || PA == 'A' || PA == 'a'){

                giveatten<<date<<"    "<<fnam<<" "<<lnam<<"    "<<colon<<"    "<<PA<<endl;
                temp = temp -> next;
                break;

            }

        }
    }

    giveatten<<endl<<endl;

    giveatten.close();

    system("pause");
    system("cls");

}

void attendance_T(linkedList* &head, linkedList* &tail){
    
    system("cls");

    cout<<endl;
    cout<<"\n==================================================="<<endl;
    cout<<"--------------<-ATTENDANCE SECTION->---------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;

    while (true){

        cout<<endl;
        cout<<"=============================="<<endl;
        cout<<"|| 1. SHOW ATTENDANCE GIVEN ||"<<endl;
        cout<<"|| 2. GIVE ATTENDANCE       ||"<<endl;
        cout<<"|| 0. GO BACK               ||"<<endl;
        cout<<"=============================="<<endl;

        int n;
        cout<<"\nenter your choice : ";
        cin>>n;
        if(n == 0){
            break;
        }

        switch (n)
        {
        case 1:

            system("cls");
            cout<<endl;
            showattendance(head, tail);
            cout<<endl;
            
            system("pause");
            system("cls");
            break;

        case 2:

            system("cls");
            cout<<endl;
            giveattendance(head, tail);
            cout<<endl;

            system("pasue");
            system("cls");
            break;

        default:

            cout<<"WRONG INPUT"<<endl;
            cout<<endl;
            system("pause");
            system("cls");
            break;

        }
    }
}

void loginAsTeacher(linkedList* &head, linkedList* &tail){
    
    system("cls");

    cout<<endl;
    cout<<"==================================================="<<endl;
    cout<<"----------<-WELCOME !! GOOD TO SEE YOU->-----------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<endl;
    
    int ch;
    start:
    string user, pass;

    while(true){

        cout<<"Enter Loginid : ";
        cin>>user;
        cout<<"Enter Password : ";
        ch = getch();

        while(ch != 13){
            pass.push_back(ch);
            cout<<"*";
            ch = getch();
        }

        if(user == "teacher" && pass == "teach1234"){
            time_t now;

            struct tm nowLocal;

            now = time(NULL);

            nowLocal = *localtime(&now);

            // cout<<"LOGIN DATE : "<<nowLocal.tm_mday<<" / "<<nowLocal.tm_mon+1<<" / "<<nowLocal.tm_year + 1900<<endl;
            // cout<<"LOGIN TIME : "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;

            ofstream f2;
            f2.open("TeacherLoginHistory.txt", ios::app);

            f2<<endl<<"-----------------------------"<<endl;

            f2<<"LOGIN DATE = "<<nowLocal.tm_mday<<" /"<<nowLocal.tm_mon+1<<" /"<<nowLocal.tm_year<<endl;
            f2<<"LOGIN TIME = "<<nowLocal.tm_hour<<" : "<<nowLocal.tm_min<<" : "<<nowLocal.tm_sec<<endl;

            f2<<"-----------------------------"<<endl<<endl;

            break;
        }

        else{

            cout<<"wrong password"<<endl;
            goto start;
        }

        system("cls");

    }

    while(true){

        system("cls");

        cout<<"====================="<<endl;
        cout<<"|| 1. ASSIGNMENTS  ||"<<endl;
        cout<<"|| 2. ATTENDANCE   ||"<<endl;
        cout<<"|| 3. COLLEGE INFO ||"<<endl;
        cout<<"|| 4. COURSES      ||"<<endl;
        cout<<"|| 0. LOG OUT      ||"<<endl;
        cout<<"====================="<<endl;
        
        int n;
        cout<<"\n\nENTER YOUR CHOICE : ";
        cin>>n;
        if(n == 0){
            break;
        }

        switch (n)
        {
        case 1:

            system("cls");

            cout<<endl;
            assignment(head, tail);
            cout<<endl;

            system("cls");
            break;

        case 2:

            system("cls");

            cout<<endl;
            attendance_T(head, tail);
            cout<<endl;

            system("cls");
            break;

        case 3:

            system("cls");

            cout<<endl;
            collegeInfo();
            cout<<endl;

            system("cls");
            break;

        case 4:

            system("cls");

            cout<<endl;
            courses();
            cout<<endl;

            system("cls");
            break;

        default:

            cout<<endl;
            cout<<"{---------------------------}"<<endl;
            cout<<"{<------WRONG CHOICE------->}"<<endl;
            cout<<"{<---RE-ENTER THE CHOICE--->}"<<endl;
            cout<<"{---------------------------}"<<endl;
            cout<<endl;

            system("pause");
            system("cls");
            break;

        }

    }

}



class ERP{
    public:
        
        ERP(){

            cout<<endl;
            cout<<"  \t\t**************************************************************************************"<<endl;
            cout<<"    \t\t*  _           _   _______   _          ________   ______   _____   _____   _______  *"<<endl;
            cout<<"    \t\t* | |         | | |  _____| | |        |  ______| |  __  | |  _  | |  _  | |  _____| *"<<endl;
            cout<<"    \t\t* | |  _____  | | | |_____  | |        | |        | |  | | | | | |_| | | | | |_____  *"<<endl;
            cout<<"    \t\t* | | |  _  | | | |  _____| | |        | |        | |  | | | | |_____| | | |  _____| *"<<endl;
            cout<<"    \t\t* | |_| | | |_| | | |_____  | |______  | |______  | |__| | | |         | | | |_____  *"<<endl;
            cout<<"    \t\t* |_____| |_____| |_______| |________| |________| |______| |_|         |_| |_______| *"<<endl;
            cout<<"    \t\t*                                                                                    *"<<endl;
            cout<<"  \t\t**************************************************************************************"<<endl;
            cout<<endl;
            system("pause");
            system("cls");

            linkedList* head = NULL;
            linkedList* tail = NULL;

            

            while(true){

                cout<<endl<<endl;
                cout<<"\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
                cout<<"\t\t\t\t-------------<-ERP MANAGEMENT SYSTEM->-------------"<<endl;
                cout<<"\t\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
                cout<<endl;


                cout<<endl;
                cout<<"============================="<<endl;
                cout<<"|| 1. LOGIN AS ERP MANAGER ||"<<endl;
                cout<<"|| 2. LOGIN AS STUDENT     ||"<<endl;
                cout<<"|| 0. EXIT THE ERP         ||"<<endl;
                cout<<"============================="<<endl;
                
                int choice2;
                cout<<"ENTER YOUR CHOICE : ";
                cin>>choice2;
                system("cls");

                if(choice2 == 0){
                    cout<<"THANK YOU FOR VISITING"<<endl;
                    return;
                }

                switch (choice2)
                {
                case 1:

                    system("cls");

                    cout<<endl;
                    loginAsManager(head, tail);
                    cout<<endl;

                    system("pause");
                    system("cls");
                    break;

                case 2: 

                    cout<<endl;
                    loginAsStudent(head, tail);
                    cout<<endl;

                    system("pause");
                    system("cls");
                    break;

                case 3:

                    cout<<endl;
                    loginAsTeacher(head, tail);
                    cout<<endl;
                    
                    system("pause");
                    system("cls");
                    break;

                default:

                    cout<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<"----------WRONG INPUT-------------"<<endl;
                    cout<<"----------------------------------"<<endl;
                    cout<<endl;

                    system("pause");
                    system("cls");
                    break;
                }
            }

            system("cls");
        }
};

int main(){
    system("cls");

    ERP E1;
    
    return 0;
}