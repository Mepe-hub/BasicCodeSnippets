
#include <iostream>

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
/*

//output: 4, 4, 0, -4, 1

int main() {

    char x[] = "Test";
        
    std::cout << sizeof(x); //Output: 5 because of NULL terminated string '\0'
}


//MARK: Pointers and reference

//pointers and reference
 int main(){
    int x = 3;
    int& ref = x;
    ref++;
    std::cout << ref << std::endl;
    int* ptr;
    ptr = &x; //ptr points to address of x
    std::cout << *ptr << std::endl; //ptr points to value of x which == ref++ (4)
    (*ptr)++;
    ref = *ptr;
    x *= *ptr;
    std::cout << "x: " << x << std::endl << "ref: " << ref << std::endl << "ptr: " << *ptr << std::endl; //output: 25, 25, 25
    *ptr = 5;
    std::cout << "x: " << x << std::endl << "ref: " << ref << std::endl << "ptr: " << *ptr << std::endl; //output: 5,5,5
}


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

//MARK: Switch case

int main() {
    int i = 2;
        switch (i) {
            case 1: std::cout << "1";   //if no "break" = fallthrough
            case 2: std::cout << "2";   //execution starts at this case label
            case 3: std::cout << "3";
            case 4:
            case 5: std::cout << "45";
                    break;              //execution of subsequent statements is terminated
            case 6: std::cout << "6";
        }
     
        std::cout << '\n';
     
        switch (i) {
            case 4: std::cout << "a";
            default: std::cout << "d" << std::endl; //there are no applicable constant_expressions
                                       //therefore default is executed
        }
     //output: 2345, d */

//MARK: CLasses

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

/**************************/
/*#define x 5+2
int main(){
    int i;
    i = x*x;
    std::cout << i;
    return 0;
} //Output: 17 because 5+2*5+2 = 17!!
*/


//MARK: Templates
/*
template<typename T>
void fun(const T& x) {
    static int i = 1;
    std::cout << ++i;
    return;
}
int main(){
   // fun<int>(1);
    //fun<double>(1);
    fun<int>(2);
    fun<int>(2);
    fun<float>(4);
    fun<int>(6);
    fun<int>(3);
    return 0;
} output: 232456 because const T& x, everytime it gets called with same parameter it adds up */


