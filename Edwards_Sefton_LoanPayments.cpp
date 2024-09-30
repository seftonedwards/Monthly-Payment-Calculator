/**************************************************************************************************************************************************/
/* File Name: Edwards_Sefton_LoanPayments.cpp                                                                                                     */                                     
/* Lab/Project: CSC 1253 Fall 2024 Programming Assignment 1                                                                                       */                                  
/* Current Semester: Fall 2024                                                                                                                    */
/* Author(s): S. Edwards                                                                                                                          */
/* Purpose of Program: This program determines monthly payments for 3, 4, 5, and 6-year payment plans given the inputs of the loan amount and APR */
/* Input Variables: Amount of the loan and the annual percentage rate (APR)                                                                       */      
/* Output Variables: Number of years of the term and the monthly payment amount                                                                   */
/**************************************************************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    
    //Create varibables for LoanAmount, Annual Percentage Rate (APR), MonthlyPaymentAmount, NumberOfMonthlyPayments, and MonthlyInterestRate
        double LoanAmount, AnnualPercentageRate, MonthlyPaymentAmount, NumberOfMonthlyPayments, MonthlyInterestRate;
        
    
    //Explain the purpose of the program to the user
        cout << "Provide the loan amount and Annual Percentage Rate (APR) to determine monthly payments for 3, 4, 5, and 6-year payment plans" << endl;

    // Ask for the Loan Amount.
        cout << "How much is the loan amount in dollars?";
    // Get the Loan Amount
        cin >> LoanAmount;

    // Ask for the Annual Prcentage Rate (APR)
        cout << "How much is the Annual Percentage Rate (APR)?";
    // Get the Annual Percentage Rate (APR)
        cin >> AnnualPercentageRate;
        
    
    //Defining MonthlyInterestRate in terms of APR
        MonthlyInterestRate = (AnnualPercentageRate/100)/12;
        
    // Calculate the MonthlyPaymentAmount.
        // MonthlyPaymentAmount=((LoanAmount)*((MonthlyInterestRate*pow(1+MonthlyInterestRate,NumberOfMonthlyPayments))/(pow(1+MonthlyInterestRate,NumberOfMonthlyPayments)-1)))
        

    //Round all MonthlyPaymentAmount to two decimal places
        cout << fixed << setprecision(2);
    // Display the MonthlyPaymentAmount for 3-year payment plan
        cout << "If you wish to pay off this loan in 3 years, you must make 36 monthly payments of $" << 
            ((LoanAmount)*((MonthlyInterestRate*pow(1+MonthlyInterestRate,36))/(pow(1+MonthlyInterestRate,36)-1))) << endl;
    // Display the MonthlyPaymentAmount for 4-year payment plan
        cout << "If you wish to pay off this loan in 4 years, you must make 48 monthly payments of $" << 
            ((LoanAmount)*((MonthlyInterestRate*pow(1+MonthlyInterestRate,48))/(pow(1+MonthlyInterestRate,48)-1))) << endl;
    // Display the MonthlyPaymentAmount for 5-year payment plan
        cout << "If you wish to pay off this loan in 5 years, you must make 60 monthly payments of $" << 
            ((LoanAmount)*((MonthlyInterestRate*pow(1+MonthlyInterestRate,60))/(pow(1+MonthlyInterestRate,60)-1))) << endl;
    // Display the MonthlyPaymentAmount for 6-year payment plan
        cout << "If you wish to pay off this loan in 6 years, you must make 72 monthly payments of $" << 
            ((LoanAmount)*((MonthlyInterestRate*pow(1+MonthlyInterestRate,72))/(pow(1+MonthlyInterestRate,72)-1))) << endl;


    return 0;
