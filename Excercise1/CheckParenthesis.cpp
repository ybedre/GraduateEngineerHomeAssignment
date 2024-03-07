#include <iostream>
#include <string>

bool checkParenthesis(const std::string& s) 
{
    int balance = 0; // tracker for parentheses count
    for (char c : s) 
    {
        if (c == '(') 
        {
            balance++; // Incrementing for open parenthesis
        } 
        else if (c == ')') 
        {
            balance--; // Decrementing for close parenthesis
            if (balance < 0) 
            {
                return false; // Number of closing parentheses > opening ones
            }
        }
    }

    // Check if there's any remaining opening parentheses
    return balance == 0;
}

int main() 
{
    std::string testCases[] = {"()", "()((()()))", ")(", "((())", "(()()))("};
    for (const std::string& testCase : testCases) 
    {
        std::cout << "Expression: " << testCase << " : ";
        if (checkParenthesis(testCase)) 
        {
            std::cout << "OK\n";  //Displays OK only if expression is valid
        } 
        else 
        {
            std::cout << "NOT OK\n";  //Displays NOT OK if expression is invalid
        }
    }
    return 0;
}