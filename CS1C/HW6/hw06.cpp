#include <string>
#include <iostream>

using std::string;

// pre-conditions - parameters are passed in by value 
// post conditions - reversed string is returned
string reverse(string str, int begin, int end)
{
    char temp;

    if(begin >= end)
    {
        return(str);
    }
    else
    {
        temp = str[begin];
        str[begin] = str[end];
        str[end] = temp;
    }

    return reverse(str, begin+1, end-1);
}

// pre-conditions - parameters are passed in by value 
// post conditions - reversed string is returned
string reverseL(string str, int begin, int end)
{
    char temp;

    if(begin >= end)
    {
        return(str);
    }
    else
    {
        while(begin < end)
        {
            temp = str[begin];
            str[begin] = str[end];
            str[end] = temp;
            begin++;
            end--;
        }
    }

    return str;
}

// EC QUESTION:
// What are the differences between the recursive and iterative approaches?
//   The Recursive function makes multiple function calls to achieve the final output
//   The Looping function uses a while loop and only makes one function call 
/*
 * This program will reverse the characters in the alphabet within the specified range
 * using a recursive implimentation and a looping implimentation
 */

int main()
{
    int begin, end;
    string abcs = "abcdefghijklmnopqrstuvwxyz";

    //run recursive reverse() 3 times
    for(int i = 0; i < 3; i++)
    {
        std::cout << "recursive function:\n\n";
        std::cout << "enter starting letter num: ";
        std::cin >> begin;
        std::cout << "enter ending letter num: ";
        std::cin >> end;
        std::cout << std::endl << "reversed str:\n" << reverse(abcs, begin-1, end-1) << std::endl << std::endl;
    }

    //run looping reverse() 3 times
    for(int i = 0; i < 3; i++)
    {
        std::cout << "looping function:\n\n";
        std::string abcs = "abcdefghijklmnopqrstuvwxyz";
        std::cout << "enter starting letter num: ";
        std::cin >> begin;
        std::cout << "enter ending letter num: ";
        std::cin >> end;
        std::cout << std::endl << "reversed str:\n" << reverseL(abcs, begin-1, end-1) << std::endl << std::endl;
    }
}   

