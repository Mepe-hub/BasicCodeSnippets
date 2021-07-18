
#include <iostream>
#include <string>
#include "add.hpp"
#include "Object.hpp"
#include <map>
#include <vector>
#include <sstream>
#include "Student.hpp"
#include "ShapeBox.h"
#include <algorithm>
#include <cmath>
#include <iomanip>


//MARK: Vectors
//function to print vector using *pointer
//void print_vector(std::vector<std::string> *str_v)
//{
//    for( int i = 0; i < str_v->size(); i++)
//    {
//        std::cout << "Element of vector: " << str_v -> at(i) << std::endl;
//    }
//}
//
//int main()
//{
//    std::vector<std::string> str_v ={"What", "The", "Fox"};
//
//    //print_vector(&str_v);
//
//    //doing things to vector
//    str_v.push_back("new element"); //puts element at end of list
//    str_v.erase(str_v.begin()+2); //erases third element from list = "Fox"
//
//    print_vector(&str_v); //Output: What, The, new element
//    return 0;
//}

///MARK: Maps and vectors
//
//int main()
//{
//    std::map<int, std::string> numbers;
//    numbers.insert(std::pair<int, std::string>(0, "zero"));
//    numbers.insert(std::pair<int, std::string>(1, "one"));
//    numbers.insert(std::pair<int, std::string>(2, "two"));
//    numbers.insert(std::pair<int, std::string>(3, "three"));
//    numbers.insert(std::pair<int, std::string>(4, "four"));
//
//
//    //std::map<int, std::string>::iterator itr = numbers.begin(); //iterator for map
//
//    std::vector<std::string> str_v ={"10", "What", "The", "3", "4", "12"};
//
//    //looping the vector and find numer in vector!
//    for (auto &item : str_v)
//    {
//        int key;
//        std::stringstream ss(item);
//        if (ss >> key)
//        {
//            auto itr = numbers.find(key);
//            if (itr != numbers.end())
//                item = itr->second;
//        }
//        std::cout << item << std::endl;
//    }
//
//    return 0;
//}


//
//int main()
//{
//    std::map<std::string, int> map;
//    map["Andi"] = 1;
//    map["Mepe"] = 2;
//    map["Fendt"] = 3;
//    map["Best"] = 5;
//
//    //using namespace to shorten things
//
//    using Scoremap = std::map<std::string, int>;
//    //iterating through the map
//    //1 using iterator
//
//    for(Scoremap::iterator it = map.begin(); it != map.end(); it++)
//    {
//        auto& key = it->first;
//        auto& value = it->second;
//        std::cout << key << " = " << value << std::endl; //Prints out ordered by first letter of Key!!! A.. B.. F.. M
//    }
//
//    //2 using auto range loop
//
//    for(auto kv : map)
//    {
//        auto& key = kv.first;
//        auto& value = kv.second;
//        std::cout << key << " = " << value << std::endl;
//    }
//
//    //3 using structured bindings - decomposition declaration as of c++ 17
//
//    for(auto [key, value]:map)
//        std::cout << key << " = " << value << std::endl;
//    return 0;
//}




//MARK: function stuff and how constructor works
//int main(){
//
//    std::cout << add(3,4);
//    Object obj1;
//    std::cout << obj1.multi(2,3) << std::endl;
//    obj1.print(12, 22);
//
//}
//int main(){
//    int x = 4;
//    while(x > -3 && std::cout << x--){
//    }
//}

//std::string date_convert(std::string &str)
//{
//    std::size_t found1 = str.find_first_of("/");
//    std::size_t found2 = str.find_last_of("/");
//
//    for(unsigned int i = 0; i < str.size(); i++)
//        {
//            if((str[i] <= '9' && str[i] >= '1') || str[i] == '/')
//            {
//
//            if(found1 == 1 && found2 == 4)
//                        {
//                            char b, x, y;
//                            b = str[i];
//                            x = str[i+2];
//                            y = str[i+3];
//                            str[i] = x;
//                            str[i+1] = y;
//                            str[i+2] = '/';
//                            str[i+3] = b;
//
//                            break;
//                        }
//           else if(found1 == 1 && found2 == 3)
//                        {
//                            char b, x;
//                            b = str[i];
//                            x = str[i+2];
//                            str[i] = x;
//                            str[i+2] = b;
//
//                            break;
//                        }
//            else if(found1 == 2 && found2 == 4)
//            {
//                char b, c, x;
//                b = str[i];
//                c = str[i+1];
//                x = str[i+3];
//                str[i+2] = b;
//                str[i+3] = c;
//                str[i+1] = '/';
//                str[i] = x;
//                break;
//            }
//            else if(found1 == 2 && found2 == 5)
//            {
//                char b, c, x, y;
//                b = str[i];
//                c = str[i+1];
//                x = str[i+3];
//                y = str[i+4];
//                str[i+3] = b;
//                str[i+4] = c;
//                str[i+1] = y;
//                str[i] = x;
//                break;
//            }
//
//
//        }
//
//        //month names
//        else
//            if(str[i] == 'J' && str[i+1] == 'a') //January
//            {
//                str.replace(str.end()-6, str.end()-4, "/1/");
//                str.erase(str.begin(), str.begin()+8);
//                break;
//            }
//            else
//                if(str[i] == 'F') //Febuary
//                {
//                    str.replace(str.end()-6, str.end()-4, "/2/");
//                    str.erase(str.begin(), str.begin()+8);
//                    break;
//                }
//                else
//                    if(str[i] == 'M' && str[i+1] == 'a' && str[i+2] == 'r') //March
//                    {
//                        str.replace(str.end()-6, str.end()-4, "/3/");
//                        str.erase(str.begin(), str.begin()+7);
//                        break;
//                    }
//                    else
//                        if(str[i] == 'A' && str[i+1] == 'p') //April
//                        {
//                            str.replace(str.end()-6, str.end()-4, "/4/");
//                            str.erase(str.begin(), str.begin()+6);
//                            break;
//                        }
//                        else
//                            if(str[i] == 'M' && str[i+1] == 'a' && str[i+2] == 'y') //May
//                            {
//                                str.replace(str.end()-6, str.end()-4, "/5/");
//                                str.erase(str.begin(), str.begin()+4);
//                                break;
//                            }
//                            else
//                                if(str[i] == 'J' && str[i+1] == 'u' && str[i+2] == 'n') //June
//                                {
//                                    str.replace(str.end()-6, str.end()-4, "/6/");
//                                    str.erase(str.begin(), str.begin()+5);
//                                    break;
//                                }
//                                else
//                                    if(str[i] == 'J' && str[i+1] == 'u' && str[i+2] == 'l') //July
//                                    {
//                                        str.replace(str.end()-6, str.end()-4, "/7/");
//                                        str.erase(str.begin(), str.begin()+5);
//                                        break;
//                                    }
//                                    else
//                                        if(str[i] == 'A' && str[i+1] == 'u') //August
//                                        {
//                                            str.replace(str.end()-6, str.end()-4, "/8/");
//                                            str.erase(str.begin(), str.begin()+7);
//                                            break;
//                                        }
//                                        else
//                                            if(str[i] == 'S') //September
//                                            {
//                                                str.replace(str.end()-6, str.end()-4, "/9/");
//                                                str.erase(str.begin(), str.begin()+10);
//                                                break;
//                                            }
//                                            else
//                                                if(str[i] == 'O') //October
//                                                {
//                                                    str.replace(str.end()-6, str.end()-4, "/10/");
//                                                    str.erase(str.begin(), str.begin()+8);
//                                                    break;
//                                                }
//                                                else
//                                                    if(str[i] == 'N') //November
//                                                    {
//                                                        str.replace(str.end()-6, str.end()-4, "/11/");
//                                                        str.erase(str.begin(), str.begin()+9);
//                                                        break;
//                                                    }
//                                                    else
//                                                        if(str[i] == 'D') //December
//                                                        {
//                                                            str.replace(str.end()-6, str.end()-4, "/12/");
//                                                            str.erase(str.begin(), str.begin()+9);
//                                                            break;
//                                                        }
//
//    }
//
//    return str;
//}
//
//int main()
//{
//
//    std::string test = "December 23, 2001";
//
//    std::cout << date_convert(test);
//
//}



//MARK: Increments ints

//int main(){
//    int x = 2, y = 2;
//    int b = ++x;
//    std::cout << b;
//    int a = y++;
//    std::cout << a;
//    //output: 32
//}

//MARK: Loops of all kinds
//int main() {
//    for(int x = 0; x < 4; x++)
//    {
//
//        for(int y = 0; y < 10; y++)
//        {
//            std::cout << "+";
//        }
//        std::cout << std::endl;
//    }
//
//} //Output: box of width = 10, height = 4

//int main()
//{
//    int y = 3;
//    bool x = y=3;
//    while(x)
//    {
//        x = y ==3;
//        y--;
//        std::cout << y;
//    }
//    std::cout << y;
//} //OUtput: 211 because bool x becomes false

//MARK: Arrays and stuff

//int main() {
//
//    int arr[2][3]= {{3,5,1},{4,9,4}};
//    int brr[2][3] = {{2,5,8},{9,2,6}};
//    for (int i = 0; i <2; i++)
//    {
//        for (int j = 0; j <3; j++)
//        {
//            brr[i][j]+=arr[i][j];
//            std::cout << brr[i][j] << std::endl;
//        }
//    }
//    return 0;
//
//}
// char array
//int main() {
//
//    char x[] = {'a', 'b', 'c'};
//        char *p = x;
//        std::cout << "Ascii: " << x[0]/1 << "\t" << x+1 << "\t" << *p << "\t" << p << "\t" << ++p << std::endl;
//
//    return 0;
//
//    }


//output: 4, 4, 0, -4, 1

//int main() {
//
//    char x[] = "Test";
//
//    std::cout << sizeof(x); //Output: 5 because of NULL terminated string '\0'
//}
//
//
///MARK: Pointers and reference
//
////pointers and reference
// int main(){
//    int x = 3;
//    int& ref = x;
//    ref++;
//    std::cout << ref << std::endl;
//    int* ptr;
//    ptr = &x; //ptr points to address of x
//    std::cout << *ptr << std::endl; //ptr points to value of x which == ref++ (4)
//    (*ptr)++;
//    ref = *ptr;
//    x *= *ptr;
//    std::cout << "x: " << x << std::endl << "ref: " << ref << std::endl << "ptr: " << *ptr << std::endl; //output: 25, 25, 25
//    *ptr = 5;
//    std::cout << "x: " << x << std::endl << "ref: " << ref << std::endl << "ptr: " << *ptr << std::endl; //output: 5,5,5
//}


//pass-by-reference
//int x(int &a, int &b) {
//    a = 10;
//    b = 6;
//    return a;
//}
//int main() {
//    int a;
//    int c = x(a, a);
//    std::cout << a;
//
//    return 0;
//}


//void func(int& x){
//
//    x = 20;
//}
//int main()
//{
//    int x = 30;
//    func(x);
//    std::cout << x;
//}

// int f1(int x, int &y)
//{
//     x = 20;
//     y = 20;
//     return x,y;
//   
//}
//int main()
//{
//    int a = 40, b = 30;
//    f1(a,b);
//    std::cout << a << b << std::endl;
//    std::cout << f1(a,b);
//    return 0;
//}
////output: 4020, 20 - b is referenced so it changes
// 
//MARK: Switch case

//int main() {
//    int i = 2;
//        switch (i) {
//            case 1: std::cout << "1";   //if no "break" = fallthrough
//            case 2: std::cout << "2";   //execution starts at this case label
//            case 3: std::cout << "3";
//            case 4:
//            case 5: std::cout << "45";
//                    break;              //execution of subsequent statements is terminated
//            case 6: std::cout << "6";
//        }
//
//        std::cout << '\n';
//
//        switch (i) {
//            case 4: std::cout << "a";
//            default: std::cout << "d" << std::endl; //there are no applicable constant_expressions
//                                       //therefore default is executed
//        }
//     //output: 2345, d */

//MARK: CLasses
//
//class Entity
//{
//public:
//    int x, y; //reference these members with this!
//
//    Entity(int x, int y)
//    {
//        this->x = x;
//        (*this).y = y; //another way of referencing it
//    }
//
//};
//
//int main()
//{
//
// Entity(3,4);
//
//    std::cin.get();
//}

//int main()
//{
//    Student student1;
//    student1.setName("Andi");
//    student1.setId(1);
//    student1.setGradDate(1998);
//    student1.print(); //prints all the set data
//    std::cout << student1.getName(); //prints only the students name
//}

   /* class Base {
    protected:
        int x = 4;
    };
    class Derived: public Base {
    public:
        void func()
        {
            std::cout << x;
        }
    };
    
int main(){
    Derived d;
    d.func();
} Output: 4 */


/*class A {
public:
    ~A(){
        std::cout << 1;
    }
};
 
class B: A{
public:
    ~B(){
        std::cout <<3;
    }
};
 
int main(){
    B obj;
} Output: 31 because destructor comes last (~for B optional!)*/

//class Entity
//{
//    int x;
//    int y;
//public:
//    Entity(int in_x, int in_y)
//    {
//        x = in_x;
//        y = in_y;
//
//        std::cout << x << y;
//    }
//
//};
//
//int main()
//{
//    Entity e(2,3);
//
//} //Output: 23 because constructor initialized the value of x and y as in_x and in_y
//

/**************************/
//#define x 5+2
//int main(){
//    int i;
//    i = x*x;
//    std::cout << i;
//    return 0;
//} //Output: 17 because 5+2*5+2 = 17!!
//

//int main()
//{
//    ShapeBox box1(4,5);
//    ShapeBox box2(6,3);
//
//    if(box1.compareWithThis(box2))
//    {
//        std::cout << "Box 1 is bigger than box 2" << std::endl;
//    }
//    else
//        std::cout << "Box 2 is bigger than box 1" << std::endl;
//
//    if(box1.compare(box2))
//    {
//        std::cout << "Box 1 is bigger than box 2" << std::endl;
//    }
//    else
//        std::cout << "Box 2 is bigger than box 1" << std::endl;
//}

//MARK: Templates

//template<typename T>
//void fun(const T& x) {
//    static int i = 1;
//    std::cout << ++i;
//    return;
//}
//int main(){
//    fun<int>(1);
//    fun<double>(1);
//    fun<int>(2);
//    fun<int>(2);
//    fun<float>(1);
//    fun<int>(1);
//    fun<int>(1);
//    return 0;
//} //output: 2232456 because const T& x, everytime it gets called with same parameter it adds up, value in brackets does not matter!

//MARK: conversion of char to int
//int main() {
//    std::string s = "abc";
//    int x = 'a';
//    int y = 'b';
//    if(s[1] == 'b')
//        std::cout << y+x;
//} //Output: 195 (a = 97, b = 98)
//

//int x = 6;
//void fun() {
//    //int x = 2;
//    {
//        int x = 3;
//        std::cout << ::x; // Scope resolution operator ::, so x = 6!
//    }
//}
//int main(){
//    fun();
//    return 0;
//
//}

//std::string seriesSum(int n)
//{
//    double sum = 1.0;
//    double count = 4.0;
//    std::string str;
//  if(n == 0)
//  str ="0.00";
//  else
//  {
//      for(double i = 1; i < n; i++)
//            {
//            sum+=(1.0/count);
//            count+=3.0;
//           }
//      sum = std::round(sum*100)/100;
//      str = std::to_string(sum);
//      str.erase(str.begin()+4, str.end());
//  }
//    return str;
//}
//
//int main()
//{
//    std::cout << seriesSum(5);
//}


//MARK:Strings and Chars

//int main(){
//    std::string x = "hi";
//    std::string y = "hi";
//    std::cout << (x==y) << std::endl;
//
//    char t[] = "ho";
//    char s[] = "ho";
//    std::cout << (s==t);
//}


//Find middle characters in string
//std::string get_middle(std::string str)
//{
//    std::string str1;
//
//    if(str.size()%2 == 0)
//    {
//        str1 = str.substr((str.size()/2)-1,2);
//        return str1;
//    }
//
//    else
//        str1 = str.substr(str.size()/2, 1);
//        return str1;
//
//}
//int main()
//{
//    std::string test = "testtes";
//   std::cout << get_middle(test);
//}

//function to reverse alphabetical order in lower case!
//void letter(char &c)
//{
//    int x = 0;
//    if((int)c >=65 && (int)c <=92)
//    {
//        x = 90 -((int)c-97);
//    }
//    else if (c == ' '){
//        std::cout << ' ';
//    }
//   else
//   {
//       x = 122 - ((int)c - 97);
//   }
//    std::cout << (char)x;
//}
//int main()
//{
//    std::string str = "Hello Uou";
//    std::string test;
//    std::getline(std::cin, test);
//
//    for(int i = 0; i < test.size(); i++)
//    {
//        letter(test[i]);
//    }
//
//}


//Use of stringstream - automatically tokenizes a string at space! - using vector function
//std::vector<std::string> split(std::string strToSplit, char delimeter)
//{
//    std::stringstream ss(strToSplit);
//    std::string item;
//    std::vector<std::string> splittedStrings;
//    while (std::getline(ss, item, delimeter))
//    {
//       splittedStrings.push_back(item);
//    }
//    reverse(splittedStrings.begin(), splittedStrings.end());
//
//    return splittedStrings;
//}
//int main()
//{
//    std::string str = "This is  a test";
//    reverse(str.begin(), str.end());
//
//   std::vector<std::string> after = split(str, ' ');
//
//    for(auto it = after.begin(); it != after.end(); it++)
//    {
//        std::cout << *it << " ";
//    }
//    //Output: separate words in reverse letters
//
//}

//Solution function - returns string
//std::string reverse_words(std::string str)
//{
//  std::string out;
//  std::string cword;
//  for (char &c : str) {
//    if (c == ' ') {
//      out += cword;
//      out += c;
//      cword = "";
//      continue;
//    }
//    cword = c + cword;
//  }
//  out += cword;
//  return out;
//}
//
//int main()
//{
//    std::string str = "What a  string!";
//    std::cout << reverse_words(str);
//}


int main()
{
    std::string str1 = "Hello";
    std::string str2 = "World";

    str1+=str2;
    std::cout << str1;
}
