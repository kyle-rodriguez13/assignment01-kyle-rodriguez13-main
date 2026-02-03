#include "functions.h"
#include <iostream>

int max(int x, int y) 
{
    //if the x value is greater than the y value than 
    if ( x > y ){
        return x ; 
    }
    else if (y > x){
        return y ; 
    }
    else {
        return x ;
    }
    
}
//The next code is the factorial code 

int factorial (int interger ){
    
    //For this code we multiple the starting number which is always 1
    //Then we multiply each number in front of it 
    int sum = 1 ;
    int answer= 0;
    for (int i = 1; i <= interger ; i++){
        sum *= i ; 

    }
    return sum ;
}

bool IsEven (int number ){
    //The % command means the reminder of the number, If the reminader divided by 2 is 0 then it is even 
    if (number % 2 == 0){
        return true ;
    }
    else {
        return false ;
    }
}
 int average ( int number1 , int number2){
    //Sums up two numbers and then divided by 2 to get the average 

    //Since we are not doing more than 2 numbers we can set the defualt for average to divide by 2 
    int sum1 = number1 + number2;
    int average1 = sum1 / 2 ;
    
    return average1;
 }

 //if a number is prime then their is only two divisble factors 1 and its self 

 bool isPrime(int num){
    //Ensures that the number is positive 
    if (num <= 1 ){
        return false ;
    }
    for( int i = 2 ; i < num ; i++) {
        //If the reminder of the number is 0 then it is even then it is divisble by another number meaning not prime 
        if (num % i == 0 ){
            return false ;
        }
    }

    return true ;
 }
  int gcd(int num1, int num2){
    //For greatest common factor we ensure that the numbers are not positive 
    if (num1 < 0){
        return -1 ; 
    }
    if (num2 < 0 ){
        return -1 ; 
    }
    //This was quick tricky to do 


    while ( num2 != 0 ){
        //we need to keep the numb

        //We need to kep num2 stored 
        //We get the reminder of num2 
        int numB = num2 ; 
        num2 = num1 % num2 ; 
        //The old value of num2 becomes the new num1 
        num1 = numB ;
    }
    return num1;

  }

  int lcm ( int num3 , int num4){
    //This was the 2nd hardest one for me 

    //For least common multiple we will follow the same forumla: (a * b)/GCD(a,b)
    return ((num3*num4)/gcd(num3,num4));

  }
  
  int countDigits (int allsum){
    if (allsum == 0){
        return 0 ;
    }
    int answer3 = 0;
    while (allsum != 0 ){
        answer3 = answer3 + 1;
        allsum /= 10;
    }
    return answer3 ; 
    //Ask Dr Soysal 
  }
  int sumOfDigits(int num8){
    if (num8 < 0){
        return 0;
    }
    int sum8 = 0 ; 
    // if their are no more number left then we have 0
    while ( num8 > 0){
        //The next line gets the last digit
        //Then we get the remainder with dividing by 10 to get the last digit 
        //Then we add it to the sum 
        sum8 += num8 % 10 ; 
        //Then to get rid of the last digit we divide by 10 to the real number not the sum
        num8/=10 ;

    }
    return sum8;
    //Comment

  }
  //Like the sumOfDigits this one was also hard

  int reverseNumber ( int num9){
    int reversesum = 0;

    while ( num9 > 0){
        
        //First we get the last digit in this case is moving to the decimal place


        int newnumber9 = num9 % 10 ;
        //Then we need to move the number to the front 
        //In this step we take the step and move it to the front by adding the total to the back which will eventually become the front 

        //Now that the value is in the front we can divide it again to get rid of the number 
        reversesum = reversesum * 10 + newnumber9; 

        num9 /= 10; 
        }
        
        return reversesum ;
  }
  //For the armstrong one this was the hardest to do
  //For a number to be an armstrong number we need to take the powers of the number of digits
  //We can use the count of digits to tell how many number of digits we have 
  //We also need to create the power function 
  //Lets do that first 

  int power ( int base, int expo){
    int result = 1; 
    for (int i = 0 ; i < expo ; i++){
        result *= base ; 

    }
    return result ;
  }

  //Now lets do the armstrong number 

  bool isArmStrong ( int num11){
    //First We need to keep the oringal number to see if the new number matches 
    int orignal = num11 ; 
    //Now we need to see the amount of digits we have 
    int numDigits = countDigits(num11);
    //This asks the new sum 
    int armSum = 0; 

    while (num11 > 0){
        //The first code line gets the specific digits 
        int digit = num11 % 10 ;
        //Now that we have the digits we take them to the power of how many digits the number has
    
        armSum += power (digit, numDigits);\
        //Now we get rid of the number 
        num11 /= 10 ; 
    }

    if (armSum == orignal){
        return true ;
    }
    else{
        return false ;
    }
    
  }

  //For the fibonacci we need to understand that the sum of a number is the sum of the two previous 
  //For example 0 1 1 2 means that (0 + 1 = 1) to (1+1 =2 ) to (2+1 = 3)

  int fibonacci (int interger12){
    //Ensures that we are only dealing with postiive numbers
    if (interger12 < 0){
        return -1 ;
    }
    //The first number of the fibnaccoi sequence is 0, if the first value is 0 then we will return the 0th place 
    if (interger12 == 0){
        return 0;
    }
    //If the number of the fibnaccoi sequence is 1 then that is the second value (index) of the nunber which will result in 1
    if(interger12 == 1){
        return 1;
    }
    int currentvalue = 0;
    //Now lets set all the values to the first two values 
    int previous1 = 0;
    int previous2 = 1;

    //We will use a for loop since we want a specific amount of times 
    for (int i = 0; i<= interger12; i++){
        //For this we add the the two previous numbers
        currentvalue = previous1 + previous2;
        //then change the 2nd previous number to the first previous number
        previous2 = previous1;
        //Then change the 1st previous number to the cuurent (past cuurent) value
        previous1 = currentvalue;
    }
    return currentvalue;
  }

  int numberOfDivisions( int num13){
    //We need the count to keep trach on how many times is it divisble
    int count13 = 0;

    //Here is why we are doing num13/2 
    //We cannot have a greater number than num13 so we need to cut it in half to make sure it can be divibele 
    for (int i = 1; i <= num13/2; i++){
        //We start with 1 as we cannot divide by 0
        //After that we see if it can be 
        if (num13 % i == 0){
            count13 = count13 + 1 ;
        }
       

    }
     return count13 ;

  }
  //For a number to be perfect the number needs to be the sum of all the previous divisors
  //For example 6 is perfect number because 6 has divisors 1, 2 and 3, 1+2+3 = 6
  //However 12 is not a perfect number because 12 has divisors of 1, 2,3, 4, -> 1+2+3+4+6 = 16 and that doesn't = 12

  bool isPerfect( int num14 ){
    //First anything below 1 is not possible since 1 is not a perfect number

    int count14 = 0 ;
    if (num14 <= 1){
        return false;
    }
    // We are using the num14/2 again 
    //We are using this because we cannot have a value greater than the greatest number divded by 2 
    for ( int i = 1 ; i <= num14/2 ;i++){
        if (num14 % i == 0){
            count14 = count14 +1 ; 
        }
    }
    if (count14 == num14){
        return true ;
    }
    else {
        return false ; 
    }

  }

  //For Palindrome the number has to be the same if the number is reverse 
  //For example the number 12321 is palidrome because when reversed it is 12321
  //But if we tke 6029 we will get 9206 in reverse which is not 
  //For this we can take the reverse number of it and compare to see if it is 

  bool isPalindrome(int num15){
    int orginal15 = num15 ; 

    int reversed15 = 0; 
    //Now we are going to pull out each digit from the back and then add them towards the front 
    
    int newdigit15 = 0; 

    while (num15 > 0){
        //This pushes the last value to the front as a stored value 
        newdigit15 = num15 % 10 ;
        //Now that we have the digit we then move the digit towards the front and multiply by 10 to lock it in place
        //Then we divided by 10 to get rid of the number 
        reversed15 = reversed15*10 + newdigit15 ;
        num15 /= 10;

    }
    if (orginal15 == reversed15){
        return true ;
    }
    else {
        return false ;
    }
  }






