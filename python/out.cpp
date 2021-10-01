

#include <iostream> 
#include <string>   

int main(){
int a=1;
double b=2;
float c=3;
std::string str="We think in generalities, but we live in details.";

std::string str2 = str.substr (3,5);     
std::size_t pos = str.find("live");      
std::string str3 = str.substr (pos);     
std::cout << str2 << ' ' << str3 << '\n';


return 0;
}
