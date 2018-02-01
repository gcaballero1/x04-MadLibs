//Authors: Gabriel Caballero
#include <iostream>
#include <string>

int main()
{
  std::string var1;
  std::string var2;
  int var3;
  char var4;

  std::cout<<"Input a name.\n";
  std::cin>>var1;
  std::cout<<"Input a object name.\n";
  std::cin>>var2;
  std::cout<<"Input a number(1-10).\n";
  std::cin>>var3;
  std::cout<<"Input a character mark.\n";
  std::cin>>var4;
  std::cout<<"On his way to School, "<<var1<<" saw a "<<var2<<" flying through the sky.\n"; 
  std::cout<<"He Began to chase it until he realized there were "<<var3<<" minutes until class.\n";
  std::cout<<"Oh shit "<<var4<<" he said.\n";

  return 0;
}
