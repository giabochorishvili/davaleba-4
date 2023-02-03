#include <iostream>
using namespace std;

int main(){
    
    /* workshop 1 :  Write a C++ program to find the average of 5 numbers. */

    // double FirstNumber , SecondNumber , ThirdNumber , FourthNumber , Fifthnumber ;
    // double average ;

    // cout << "Enter your numbers: " ;
    // cin >>  FirstNumber >> SecondNumber >> ThirdNumber >> FourthNumber >> Fifthnumber ;
    
    // average = (FirstNumber + SecondNumber + ThirdNumber + FourthNumber + Fifthnumber)/5;


    // cout << "average: " << average ; 


    double number;
    cout << "enter your number:   " << endl;
    cin  >> number;


    double masiv[5][5]={
        {145,78,2,189,1},
        {54,78,8,140 , 7},
        {154,15,81,578, 4},
        {153,89,12,895, 5},
        {151,98,10,485, 6}
    };

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (masiv[i][j]<number)
            {
                cout << masiv[i][j]+masiv[i][j];
                break;
            }
            
        }
        
    }
    
        
    
    


    cin.get();
    return 0;
}