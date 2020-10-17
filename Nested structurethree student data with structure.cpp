/* MUHAMMAD JAWAD
   BSCS A1,
   NUML ISLAMBAD */
#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	string department,name,information1,information2;//years //one can be added as year for the age with years,
	
	struct student_age
	{
		int age,roll;
	}std;
	
	
} stud1={"BSCSA1", "LaibaIjaz", "2ndStudent","3rdStudent"};

int main()
{
        struct student stud2,stud3;
        stud1.std.age=17;
        stud1.std.roll=12450;
        cout<<"     Department    :        "<<stud1.department<<endl;
        cout<<"     Student Name  :        "<<stud1.name<<endl;
        cout<<"     Age           :        "<<stud1.std.age<<"years"<<endl;
        cout<<"     Roll No       :        "<<stud1.std.roll<<endl; 
        cout<<"\n\n";
         cout<<"           Now the Information of "<<stud1.information1<<endl;
         
           cout<<"\n\n";
         
        // now for second student with use putting values
      /*   cout<<"enter department="<<endl;
        cin>>stud2.department;
        cout<<"enter name="<<endl;
        cin>>stud2.name;
        cout<<"enter age="<<endl;
        cin>>stud2.age;
       cout<<"enter rollnumber="<<endl; 
         cin>>stud2.roll; */
         stud2.department="BSCSA1";
         stud2.name="RidaSadiq";
         stud2.std.age=18;
         stud2.std.roll=12449;
	    cout<<"     Department    :        "<<stud2.department<<endl;
        cout<<"     Student Name  :        "<<stud2.name<<endl;
        cout<<"     Age           :        "<<stud2.std.age<<"years"<<endl;
        cout<<"     Roll No       :        "<<stud2.std.roll<<endl; 
        cout<<"\n\n";
        cout<<"           Now the Information of "<<stud1.information2<<endl;
          cout<<"\n\n";
         stud3.department="BSCSA1";
         stud3.name="JawadAhmedJawad";
         stud3.std.age=19;
         stud3.std.roll=29853;
        cout<<"     Department    :        "<<stud3.department<<endl;
        cout<<"     Student Name  :        "<<stud3.name<<endl;
        cout<<"     Age           :        "<<stud3.std.age<<"years"<<endl;
        cout<<"     Roll No       :        "<<stud3.std.roll<<endl;  
	    
    
   return 0;	
}
