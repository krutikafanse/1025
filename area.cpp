#include <iostream>
void area(int length,int breadth);            
void area(float length, float breadth); 
int main()
{
        int option=0;
        int lengthi,breadthi;
        float lengthf,breadthf;
        std::cout<<"******Menu*******";
        std::cout<<"\n1: Area using float values\n";
        std::cout<<"\n2: Area using Integer values\n";
        std::cin>>option;
        switch(option)
        {
                case 1:std::cout<<"\nEnter the length and breadth of the rectangle\n";
                           std::cin>>lengthf>>breadthf;
                           area(lengthf,breadthf);
                           break;
                case 2:std::cout<<"\nEnter the length and breadth of the rectangle\n";
                           std::cin>>lengthi>>breadthi;
                           area(lengthi,breadthi);
                           break;
                default:std::cout<<"\n Invalid selection\n";
        }
}
void area(int A,int b){
                int areai;
                areai=A*b;
                std::cout<<"\nThe area of the rectangle is " <<areai;
}
void area(float A, float b){
                float areaf;
                areaf=A*b;
                std::cout<<"\nThe area of the rectangle is " <<areaf;
}
