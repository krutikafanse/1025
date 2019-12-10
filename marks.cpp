#include<iostream>
#include<cstring>
#include<algorithm>
class Grade{
          private:
                int mark1,mark2,mark3,mark4,mark5;
                float percentage;
                char grade[20];
          public:
          int hScore=0,lScore=0;
              void getMarks(){
                             std::cout<<"\nEnter Marks for five subject in any order\n **Please note Maximum mark is out of 50 for each subject\n";
                             std::cin>>mark1;
                             std::cin>>mark2;
                             std::cin>>mark3;
                             std::cin>>mark4;
                             std::cin>>mark5;

                   }
                   void displayGrade(){
                             std::cout<<grade;
                   }
                    void calculateGrade(){
                             float sum=mark1+mark2+mark3+mark4+mark5;
                             int minMax[5];
                             minMax[0]=mark1;
                             minMax[1]=mark2;
                             minMax[2]=mark3;
                             minMax[3]=mark4;
                             minMax[4]=mark5;
                             std::sort(minMax, minMax+5);
                             hScore=minMax[4];
                             lScore=minMax[0];
                             percentage=(sum/250)*100;
                            if(percentage<=100 && percentage>90)
                                      std::strcpy(grade,"A+");
                             else if(percentage<=90 && percentage>80)
                                      std::strcpy(grade,"A");
                             else if(percentage<=80 && percentage>70)
                                      std::strcpy(grade,"B");
                             else if(percentage<=70 && percentage>60)
                                      std::strcpy(grade,"C");
                             else if(percentage<=60 && percentage>50)
                                      std::strcpy(grade,"D");
                             else
                                      std::strcpy(grade,"F");
                   }
};
int main(){
        int i=0;
        Grade obj[5];
        for(i=0;i<5;i++)
        {
        std::cout<<"Enter marks of student "<< i+1;
        obj[i].getMarks();
        obj[i].calculateGrade();

        }
        for(i=0;i<5;i++)
        {
        std::cout<<"\nGrade of student "<<i+1<<" : ";
        obj[i].displayGrade();
        std::cout<<"\nMax :  "<<obj[i].hScore<<" Min : "<<obj[i].lScore;
        }

}
