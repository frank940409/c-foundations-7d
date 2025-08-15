#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

/*Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process: 
Starting with any positive integer, replace the number by the sum of the squares of 
its digits, and repeat the process until the number equals 1 (where it will stay), 
or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers.*/

bool isHappy(int n);
int find_next_n(int n);


int main(){
    int num = 0;
    printf("Enter happy test number: ");
    scanf("%d", &num);

    if (isHappy(num) == true)
    {
        printf("Yea U Found the happy number!");
    }else if (isHappy(num) == false)
    {
        printf("NOOOOOOOO!");
    }
    return 0;
}

bool isHappy(int n){
    int fast = n;
    int slow = n;
    do
    {
        slow = find_next_n(slow);
        fast = find_next_n(find_next_n(fast));
    } while (fast != slow);
    
    if (fast == 1)
    {
        return true;
    }else{
        return false;
    }
    
    
    
}
int find_next_n(int n){

    int r = 0;
    while (n != 0)
    {
        int d = 0;
        d = n % 10;
        r += d * d;
        n /= 10;
    }
    n = r;
    return n;
}
