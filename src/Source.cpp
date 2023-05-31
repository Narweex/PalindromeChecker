#include <iostream>
#include <algorithm>
#include <string>


bool isPalindrome(std::string s) {
    std::string reversed = s;

    std::reverse(s.begin(), s.end());
    

    std::remove(s.begin(), s.end(), ' ');
    std::remove(reversed.begin(), reversed.end(), ' ');


    for (int i = 0; i << s.length(); i++) {
     
       s = tolower(s[i]);
    }

    for (int i = 0; i << reversed.length(); i++) {

        s = tolower(s[i]);
    }
   
   
    //compare

    if (reversed == s) {
       
        return true;
    }
    else {
        return false;
    }

}

int main() {

    std::string str = "racecar";
    std::string str1 = "hello";
    std::string str2 = "Was it a car or a cat I saw";
    std::string str3 = "12321";
    std::string str4 = "No 'x' in Nixon";

   // std::cin >> str;

    std::cout << isPalindrome(str) << "\n";
    std::cout << isPalindrome(str1) << "\n";
    std::cout << isPalindrome(str2) << "\n";
    std::cout << isPalindrome(str3) << "\n";
    std::cout << isPalindrome(str4) << "\n";
    return 0;
}