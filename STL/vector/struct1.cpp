// Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission in Delhi University. A student is eligible for DU if he has scored 95 % or more in Best 4.
// Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.
#include <iostream>

using namespace std;
struct student
{
    char name[20] = "ansh";
    int roll;
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    int m6;

} std;
int first(struct student  std)
{
    if (std.m1 > std.m2)
    {
        if (std.m1 > std.m3)
        {
            if (std.m1 > std.m4)
            {
                if (std.m1 > std.m5)
                {
                    if (std.m1 > std.m6)
                    {
                        return std.m1;
                    }
                }
            }
        }
    }
}
int second(struct student std)
{
    if (std.m2> std.m1)
    {
        if (std.m2 > std.m3)
        {
            if (std.m2> std.m4)
            {
                if (std.m2 > std.m5)
                {
                    if (std.m2 > std.m6)
                    {
                        return std.m2;
                    }
                }
            }
        }
    }
}
int three(struct student std)
{
    if (std.m3 > std.m1)
    {
        if (std.m3 > std.m2)
        {
            if (std.m3 > std.m4)
            {
                if (std.m3 > std.m5)
                {
                    if (std.m3 > std.m6)
                    {
                        return std.m3;
                    }
                }
            }
        }
    }
}
int four(struct student std)
{
    if (std.m4 > std.m2)
    {
        if (std.m4 > std.m3)
        {
            if (std.m4 > std.m1)
            {
                if (std.m4 > std.m5)
                {
                    if (std.m4 > std.m6)
                    {
                        return std.m4;
                    }
                }
            }
        }
    }
}

int main()
{



    
    std.name;
    std.roll = 34;
    std.m1 = 80;
    std.m2 = 90;
    std.m3 = 96;
    std.m4 = 97;
    std.m5 = 99;
    std.m6 = 100;
    int fir,sec,third,fourth;
    fir=first(std);
    sec=second(std);
    third=three(std);
    fourth=four(std);
    cout<<fir<<endl;


    return 0;
}