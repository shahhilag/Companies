//Datatypes-
//Buit in : int,float,bool,double,char
//User defined-struct,union,enum
//Derived-Array,Functions,Pointer

//Declaring a global variable and outputing it. 
// #include<bits/stdc++.h>
// using namespace std;
// int c=45;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter value of a :";
//     cin>>a;
//     cout<<"Enter value of b:";
//     cin>>b;
//     c=a+b;
//     cout<<"The sum is:"<<c;
//     cout<<"The global variable is:"<<::c;
//     return 0;
// }

//Reference variable
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x=455;
    // float &y=x; //------------------------------->Multiple names of same variable x
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }

//Typecasting
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=45;
//     float b=45.46;
//     cout<<"The value of a is:"<<(float)a<<endl;
//     cout<<"The value of a is:"<<float(a)<<endl;
//     cout<<"The value of b is:"<<(int)b<<endl;
//     cout<<"The value of b is:"<<int(b)<<endl;
//     return 0;
// }


//const keyword
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     const int a=45;
//     cout<<"The value of a is:"<<endl;
//     a=35;
//     cout<<"The value of a is:"<<endl;
//     return 0;
// }

//Manipulators
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<setw(3)<<"3"<<endl;
//     cout<<setw(2)<<"78"<<endl;
//     cout<<setw(1)<<"1233"<<endl;
//     return 0;
// }

//switch statement
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age;
//     cin>>age;
//     switch(age)
//     {
//         case 18:
//             cout<<"You can vote";
//             break;
//         default:
//             cout<<"You cannot vote";
//             break;
//     }
//     return 0;
// }

//Pointers
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=3;
//     int * b=&a;
//     cout<<b<<endl;
//     cout<<*b<<endl;
//     cout<<&b<<endl;
//     int **c=&b;
//     cout<<c<<endl;
//     cout<<*c<<endl;
//     cout<<**c<<endl;
//     return 0;
// }

//Arrays-Intro
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[4]={1,2,3,4};
    // cout<<a<<endl;     //------------------->array address 
    // cout<<a[1]<<endl; //-------------------->2
    // cout<<&a<<endl;   //-------------------->array address: similar to a  
//     return 0;
// }

//Pointers and Arrays
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[4]={1,2,3,4};
//     int * p=a;
//     cout<<*p<<endl; //------------------>1
//     cout<<*(p+1)<<endl; //-------------->2
//     cout<<*(p+2)<<endl; //-------------->3
//     return 0;
// }

//Structure------->Arrays are used to store similar datatype items whereas structures are used to store different items
// #include<bits/stdc++.h>
// using namespace std;
// struct employee
// {
//     int eid;
//     char favchar;
//     float salary;
// };
// int main()
// {
//    struct employee abc;
//     abc.eid=1;
//     abc.favchar='a';
//     abc.salary=123000;
//     cout<<abc.salary<<endl;
//     cout<<abc.favchar<<endl;
//     return 0;
// }

//Union --------->Similar to struct with memory managenent(only one element at time can be accessed.)
// #include<bits/stdc++.h>
// using namespace std;
// union employee
// {
//     int eid;
//     char favchar;
//     float salary;
// };
// int main()
// {
//    union employee abc;
//     abc.eid=1;
//     abc.favchar='a';
//     abc.salary=123000;
//     cout<<abc.salary<<endl;
    // cout<<abc.favchar<<endl; //------------------>no output shown
//     return 0;
// }

//Enum--------->number allocated to each object
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     enum employee
// {
//     eid,favchar,salary
// };
//     employee e1=eid;
//     cout<<e1<<endl;  
//     return 0;
// }

//Type defination
// #include<bits/stdc++.h>
// using namespace std;
// struct employee
// {
//     int eid;
//     char favchar;
//     float salary;
// };
// int main()
// {
//     typedef struct employee ep;
//     ep abc;
//     abc.eid=1;
//     abc.favchar='a';
//     abc.salary=123000;
//     cout<<abc.salary<<endl;
//     cout<<abc.favchar<<endl;
//     return 0;
// }

