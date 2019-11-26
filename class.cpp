#include <iostream>
#include <string>
class test;
class test{
    public:
     std::string country;
    void getString(){
          std::cout << "Which is your country? ";
      getline (std::cin, country);
    }
};
int main()
{
  test obj1; 
  obj1.getString();
  std::cout << "The entered country is ";
  std::cout<<obj1.country;
  return 0; 
}
