/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

double convertNum(string str) {

  double num; 

  if (str=="zero" || str == "0"){
    num = 0;
  } 
  else if (str == "one" || str == "1") {
    num = 1;
  } 
  else if (str == "two" || str == "2") {
    num = 2;
  } 
  else if (str == "three" || str == "3") {
    num = 3;
  } 
  else if (str == "four" || str == "4") {
    num = 4;
  } 
  else if (str == "five" || str == "5") {
    num = 5;
  } 
  else if (str == "six" || str == "6") {
    num = 6;
  } 
  else if (str == "seven" || str == "7") {
    num = 7;
  } 
  else if (str == "eight" || str == "8") {
    num = 8;
  } 
  else if (str == "nine" || str == "9") {
    num = 9;
  } 
  else {
    num = stod(str);
    cout << "Please enter a single digit number";
    exit(0);
  }
return num;
}

int main() {
  string operation, str1, str2;
  double op1, op2;

  cout << "Enter two operands and an operation: ";
  cin >> str1 >> str2 >> operation;

  op1 = convertNum(str1);
  op2 = convertNum(str2);
  
  if (operation == "+" || operation == "plus")
  {
    cout <<"The sum of "<< op1 <<" and "<< op2 <<" is "<<(op1+op2);
  }
  else if (operation == "-" || operation == "minus")
  {
    cout <<"The difference between "<< op1 <<" and "<< op2 <<" is "<<(op1+op2);
  }
  else if (operation == "*" || operation == "mul")
  {
    cout << op1 <<" times "<<op2<<" is equal to "<< (op1*op2);
  }
  else if (operation == "/" || operation == "div")
  {
    cout << op1 <<" divided by "<< op2 <<" is equal to "<< (op1/op2);
  }
  else
  {
    cout <<"Invalid input";
  }
}