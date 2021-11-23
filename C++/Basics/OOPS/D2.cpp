//Function prototyping-Assures that a function is there after main
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int a,int b);
// int main()
// {
//     int num1,num2;  
//     cin>>num1;
//     cin>>num2;
    // cout<<sum(num1,num2); //-------------->Actual Parameters-used in main
//     return 0;
// }
// int sum(int a,int b) //------------------>Formal Parameters-used in function
// {
//     int c=a+b;
//     return c;
// }

//Use of pointers and references-Sometimes when we do not return the valur of a function and insted want its value directly in main then we need to use pointers else the output will not be desirable.

//Case 1 - Without using references
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int a,int b);
// int main()
// {
//     int num1,num2;  
//     cin>>num1;
//     cin>>num2;
//     cout<<"Before Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     swap(num1,num2);
//     cout<<"After Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     return 0;
// }
// void swap(int a,int b) 
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

//Case 2 - using Pointers
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int * a,int * b);
// int main()
// {
//     int num1,num2;  
//     cin>>num1;
//     cin>>num2;
//     cout<<"Before Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     swap(&num1,&num2);
//     cout<<"After Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     return 0;
// }
// void swap(int * a,int * b) 
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

//Case 3 - Using Reference
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a,int &b);
// int main()
// {
//     int num1,num2;  
//     cin>>num1;
//     cin>>num2;
//     cout<<"Before Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     swap(num1,num2);
//     cout<<"After Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     return 0;
// }
// void swap(int &a,int &b) 
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

//Return by Reference - 
// #include<bits/stdc++.h>
// using namespace std;
// int & swap(int &a,int &b);
// int main()
// {
//     int num1,num2;  
//     cin>>num1;
//     cin>>num2;
//     cout<<"Before Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     swap(num1,num2);
//     cout<<"After Swapping";
//     cout<<" "<<num1<<" "<<num2<<endl;
//     return 0;
// }
// int & swap(int &a,int &b) 
// {
//     int temp=a;
//     a=b;
//     b=temp;
//     return a,b;
// }

//Inline Functions-Inline functions are used when you want to call the function various times again and again.It replaces the code with the function call and saves our time.
// #include<bits/stdc++.h>
// using namespace std;
// inline int product(int a,int b);
// int main()
// {
//     int a=1,b=1;
//     cout<<product(a,b)*10;
//     return 0;
// }
// inline int product(int a,int b) 
// {
//     return a*b;
// }


//Default arguments-Default arguments which are set by default and if no argument is passed then default argument is passed.

//Note-Default arguments should always be written on the extreme right.
// #include<bits/stdc++.h>
// using namespace std;
// float totalmoney(int money,float interest=1.04) 
// {
//     return money*interest;
// }
// int main()
// {
//     int money=1000;
//      cout<<totalmoney(money,1.10)<<endl;
//      cout<<totalmoney(money)<<endl;
//     return 0;
// }

//Constant Arguments-Constant arguments are arguments which would not change in any case throughout the program.
//Mostly used with pointers and strings.
// #include<bits/stdc++.h>
// using namespace std;
// int  length(const char * p) //char * p vs char p[].The difference is that writing operation can be   performed in char p[] which is not allowed in char *.
// {
//     return strlen(p);
// }
// int main()
// {
//     char p[] = "Hilag";
//     cout<<length(p);
//     return 0;
// }

//Basic Concepts of OOPS-
//Classes-Basic template for creating objects.
//Objects-Basic runtime entities.
//Data Abstraction and Encapsulation - Wrapping Data and functions into a single unit.
//Inheritance-Properties of one class can be inheritated into other classes.
//Polymorphism-Ability to take more than one form.
//Dynamic Binding-Code which will execute is not known until the program runs.[virtual functions]
//Message passing - Objects communicate with one another by sending and receiving information to each other. A message for an object is a request for execution of a procedure and therefore will invoke a function in the receiving object that generates the desired results.


//Classes
//Structures are not safe as all the variables inside a structure can be accessed from anywhere and function cannot be created in a structure.
//Thus classes came into existence which are safe as variables can be encapsulated and also functions can be stored within them.
// #include<bits/stdc++.h>
// using namespace std;
// class Employee
// {
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int a1,int b1, int c1);
//         void getData()
//         {
//             cout<<"The value of a is"<<a<<endl;//--------------->1
//             cout<<"The value of b is"<<b<<endl;//--------------->2
//             cout<<"The value of c is"<<c<<endl;//--------------->4
//             cout<<"The value of d is"<<d<<endl;//--------------->Garbage
//             cout<<"The value of e is"<<e<<endl;//--------------->89
//         }
// };
// void Employee :: setData(int a1,int b1,int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main()
// {
//     Employee harry;
//     // harry.a;//------------------->Private cannot access
//     // harry.b=34;//------------------->Private cannot access
//     harry.e=89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }

//Nesting of memeber functions
// #include<bits/stdc++.h>
// using namespace std;
// class binary
// {
//     private:
//         string s;
//         void chk_bin();
//     public:
//         void read();
//         void ones_complement();
//         void display();
// };
// void binary::read()
// {
//     cout<<"Enter a binary number"<<endl;
//     cin>>s;
// }
// void binary::chk_bin()
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s.at(i)!='0' and s.at(i)!='1')
//         {
//             cout<<"Incorrect binary format"<<endl;
//             exit(0);
//         }
//     }
// }
// void binary::ones_complement()
// {
//     chk_bin();
//     for(int i=0;i<s.length();i++)
//     {
//         if(s.at(i)=='0')
//         {
//             s.at(i)='1';
//         }
//         else
//         {
//             s.at(i)='0';
//         }
//     }
// }
// void binary::display()
// {
//     cout<<"Displaying your binary number";
//     for(int i=0;i<s.length();i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }
// int main()
// {
//     binary b;
//     b.read();
//     //b.chk_bin();//--------------------->Inaccesible
//     b.display();
//     b.ones_complement();
//     b.display();
//     return 0;
// }

//Object Memory Allocation
//The way memory is allocated to variables and functions of the same class is different even though they both are from the same class.
//The memory is only allocated to the variables of the class when the object is created.The meemory is not allocated to the variables when the class is derived
//At the same time a single variable can have different values.But the memory is allocated to the function only once when the class is declared.So the objects don't have individual copy of the functions and only one coopy is shared among each object.
// #include<bits/stdc++.h>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
//     public:
//     void initcounter(){counter=0;}
//     void setprice();
//     void displayprice();
// };
// void shop::setprice()
// {
//     cout<<"Enter id of your item";
//     cin>>itemId[counter];
//     cout<<"Enter price of your item";
//     cin>>itemPrice[counter];
//     counter++;
// }
// void shop::displayprice()
// {
//     for(int i=0;i<counter;i++)
//     {
//         cout<<"The price of item with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.displayprice();
//     return 0;
// }

//Static variable-It is a class property and not an object propert.Thus the object initialized is the count of static variable.
//One variable is shared by all objects.
//Static function-It can only access static variable.
//If data member are not static then every object has an individual copy of the data member and it is not shared.
// #include<bits/stdc++.h>
// using namespace std;
// class Employee
// {
//     int id;
//     static int count;
//     public:
//         void setdata()
//         {
//             cout<<"Enter the id"<<endl;
//             cin>>id;
//             count++;
//         }
//         void getdata()
//         {
//             cout<<"The id of this employee is:"<<id<<"and the employee number is"<<count<<endl;
//         }
//         static void getcount()
//         {
//             cout<<"The value of count is:"<<count<<endl;
//         }
// };
// int Employee::count;
// int main()
// {
//     Employee harry,rohan,lovish;
//     harry.setdata();
//     harry.getdata();
//     Employee::getcount();
//     rohan.setdata();
//     rohan.getdata();
//     Employee::getcount();
//     lovish.setdata();
//     lovish.getdata();
//     Employee::getcount();
//     return 0;
// }

//Object Array and Arguments in OOPS-
// #include<bits/stdc++.h>
// using namespace std;
// class complexn
// {
//     int a;
//     int b;
//     public:
//         void setdata(int v1, int v2)
//         {
//             a=v1;
//             b=v2;
//         }
//         void setdatabysum(complexn o1, complexn o2)
//         {
//             a=o1.a+o2.a;
//             b=o1.b+o2.b;
//         }
//         void printnumber()
//         {
//             cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
//         }
// };
// int main()
// {
//     complexn c1,c2,c3;
//     c1.setdata(1,2);
//     c1.printnumber();
//     c2.setdata(2,4);
//     c2.printnumber();
//     c3.setdatabysum(c1,c2);
//     c3.printnumber();
//     return 0;
// }