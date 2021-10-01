//Ref: http://www.cplusplus.com/reference/string/string/substr/
//Subject: string::substr
#include <iostream> //cout
#include <string>   //string, substr

int main(){
int a=1;double b=2;float c=3;
std::string str="We think in generalities, but we live in details.";
// (quoting Alfred N. Whitehead)
std::string str2 = str.substr (3,5);     // "think"
std::size_t pos = str.find("live");      // position of "live" in str
std::string str3 = str.substr (pos);     // get from "live" to the end
std::cout << str2 << ' ' << str3 << '\n';


return 0;
}
