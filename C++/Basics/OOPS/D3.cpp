//Friend Function 
//Properties of friend function-
//1.Not in the scope of class.
//2.Since it is not in the scope of class it can be called from the object of that class for sumcomplex() is invalid.
//3.A friend function can be invoked with the help of any object.
//4.Usually contain object as arguments.
//5.Can be declared under the public or private access modifier,it will not make any difference.
//6.It cannot access the members directly by the name, it needs(object_name.member_name) to access any member.
// #include<bits/stdc++.h>
// using namespace std;
// class complexc
// {
//     int a,b;
//     friend complexc sumcomplex(complexc o1,complexc o2);
//     public:
//         void setnumber(int n1,int n2)
//         {
//             a=n1;
//             b=n2;
//         }
//         void printnumber()
//         {
//             cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
//         }
// };
// complexc sumcomplex(complexc o1, complexc o2)
// {
//     complexc o3;
//     o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }
// int main()
// {
//     complexc c1,c2,sum;
//     c1.setnumber(1,4);
//     c1.printnumber();
//     c2.setnumber(5,8);
//     c2.printnumber();
//     sum=sumcomplex(c1,c2);
//     sum.printnumber();
//     return 0;
// }

//Constructor in C++
//Constructor is a special member function with the same name as of the class.It is used to initialize the objects of its class.It is automatically invoked whenever an object is created.
// #include<bits/stdc++.h>
// using namespace std;
// class complexc
// {
//     int a,b;
//     public:
//     complexc(); //-------------->constructor declaration
//     void printnumber()
//     {
//         cout<<"Your number is :"<<a<<"+"<<b<<"i"<<endl;
//     }
// };
// complexc::complexc() //----------->Default Constructor
// {
//     a=0;
//     b=0;

// }
// int main()
// {
//     complexc c1,c2,c3;
//     c1.printnumber();
//     c2.printnumber();
//     c3.printnumber();
//     return 0;
// }
//Characteristics of constructors
//1.It should be strored in the public section of the class.
//2.They are automatically invoked whenever the object is created.
//3.They cannot return values and do not have return types.
//4.It can have a default argument.
//5.We cannot refer to their address.

//Parameteized and Default constructor
// #include<bits/stdc++.h>
// using namespace std;
// class complexc
// {
//     int a,b;
//     public:
//         complexc(int,int); //Constructor declaration
//         void printnumber()
//         {
//             cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
//         }
// };
// complexc::complexc(int x,int y)//Parameterized constructor
// {
//     a=x;
//     b=y;
// }
// int main()
// {
//     complexc a(4,6); //Implicit call
//     a.printnumber();
//     complexc b = complexc(5,7); //Explicit call
//     b.printnumber();
//     return 0;
// } 

//Constructor Overloading
// #include<bits/stdc++.h>
// using namespace std;
// class complexc
// {
//     int a,b;
//     public:
//         complexc()
//         {
//             a=0;
//             b=0;
//         }
//         complexc(int x,int y)
//         {
//             a=x;
//             b=0;
//         }
//         void printnumber()
//         {
//             cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
//         }
// };
// int main()
// {
//     complexc c1(4,6);
//     c1.printnumber();
//     complexc c2;
//     c2.printnumber();
//     return 0;
// }

//Constructor with default arguments in C++ 
// #include<bits/stdc++.h>
// using namespace std;
// class simple
// {
//     int data1;
//     int data2;
//     int data3;
//     public:
//         simple(int a,int b=9,int c=8)
//         {
//             data1=a;
//             data2=b;
//             data3=c;
//         }
//         void printdata();
// };
// void simple::printdata()
// {
//     cout<<"The value of data1,data2,data3 is:"<<" "<<data1<<" "<<data2<<" "<<data3<<endl;
// }
// int main()
// {
//     simple s(12,13);
//     s.printdata();
//     //simple(12,13).printdata();
//     return 0;
// }

//Dynamic Initialization of objects using constraints
// #include<bits/stdc++.h>
// using namespace std;
// class bankdeposit
// {
//     int principal;
//     int years;
//     float interestRate;
//     float interestValue;
//     public:
//         bankdeposit(){}
//         bankdeposit(int p,int y,float r);
//         bankdeposit(int p,int y,int r);
//         void show();
// };
// bankdeposit::bankdeposit(int p,int y, float r)
// {
//     principal=p;
//     years=y;
//     interestRate=r;
//     interestValue=principal;
//     for(int i=0;i<y;i++)
//     {
//         interestValue=interestValue*(1+interestRate);
//     }
// }
// bankdeposit::bankdeposit(int p,int y,int r)
// {
//     principal=p;
//     years=y;
//     interestRate=float(r)/100;
//     interestValue=principal;
//      for(int i=0;i<y;i++)
//     {
//         interestValue=interestValue*(1+interestRate);
//     }
// }
// void bankdeposit::show()
// {
//     cout<<"Principal amount was"<<principal<<"return value after"<<years<<"years is"<<interestValue<<endl;
// }
// int main()
// {
//     bankdeposit bd1,bd2,bd3;
//     int p,y;
//     float r1;
//     int r2;
//     cout<<"Enter the value of p,y and r"<<endl;
//     cin>>p>>y>>r1;
//     bd1 = bankdeposit(p,y,r1);
//     bd1.show();
//     cout<<"Enter teh value of p,y and r"<<endl;
//     cin>>p>>y>>r2;
//     bd2 = bankdeposit(p,y,r2);
//     bd2.show();
//     return 0;
// }

// Copy constructor
// #include<bits/stdc++.h>
// using namespace std;
// class number
// {
//     int a;
//     public:
//         number()
//         {
//             a=0;
//         }
//         number(int num)
//         {
//             a=num;
//         }
//         number(number &obj)
//         {
//             cout<<"Copy constructor called!!!"<<endl;
//             a=obj.a;
//         }
//         void display()
//         {
//             cout<<"The number for this object is"<<a<<endl;
//         }
// };
// int main()
// {
//     number x,y,z(45),z2;
//     x.display();
//     y.display();
//     z.display();
//     number z1(z); //Copy constructor called
//     z1.display();
//     z2=z;
//     z2.display();
//     number z3=z; //Copy constructor called
//     z3.display();
//     return 0;
// }

//Destructor in C++
//Destructor never takes an argument nor does it return any value
// #include<bits/stdc++.h>
// using namespace std;
// int counter = 0;
// class num
// {
//     public:
//         num()
//         {
//             counter++;
//             cout<<"This is the time when constructor is called for object number "<<counter<<endl;
//         }
//         ~num()
//         {
//             cout<<"This is the time when destructor is called for object number"<<counter<<endl;
//             counter--;
//         }
// };
// int main()
// {
//     cout<<"We are inside our main function"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout<<"Enter this block"<<endl;
//         cout<<"Creating two more objects"<<endl;
//         num n2,n3;
//         cout<<"Exiting this block"<<endl;
//     }
//     cout<<"Back to main"<<endl;
//     return 0;
// }

//Inheritance in C++ - Supports Reusability
//1.Single Inheritance - A derived class with only one base class.
//2.Multiple inheritance - A derived with more than one base class.
//3.Hierarchical inheritance - Several derived classes from a single base class.
//4.Mutilevel Inheritance - Deriving a class from already derived class.
//5.Hybrid Inheritance - Combination of mutiple and multilevel inheritance

//Single inheritance
// #include<bits/stdc++.h>
// using namespace std;
// class base
// {
//     int data1;
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2();
// };
// void base::setdata()
// {
//     data1=10;
//     data2=20;
// }
// int base::getdata1()
// {
//     return data1;
// }
// int base::getdata2()
// {
//     return data2;
// }
// class derived:public base
// {
//     int data3;
//     public:
//         void process();
//         void display();
// };
// void derived::process()
// {
//     data3=data2*getdata1();
// }
// void derived::display()
// {
//     cout<<"value of data1"<<getdata1()<<endl;
//     cout<<"value of data2"<<data2<<endl;
//     cout<<"value of data3"<<data3<<endl;
// }
// int main()
// {
//     derived d;
//     d.setdata();
//     d.process();
//     d.display();
//     return 0;
// }

//Mutilevel Inheritance
//Protected--->can only be accessed by descendents of the class.
//Public----->can only be accessed by the members of the class.
//Protected--->can be accessed from anywhere in global scope.
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     protected:
//         int roll;
//     public:
//         void setroll(int);
//         void getroll();
// };
// void student::setroll(int r)
// {
//     roll=r;
// }
// void student :: getroll()
// {
//     cout<<"The roll number is:"<<roll<<endl;
// }
// class exam:public student
// {
//     protected:
//         float maths;
//         float physics;
//     public:
//         void setmarks(float,float);
//         void getmarks();
// };
// void exam::setmarks(float m1,float m2)
// {
//     maths=m1;
//     physics=m2;
// }
// void exam::getmarks()
// {
//     cout<<"The marks obtained in mathematics:"<<maths<<endl;
//     cout<<"The marks obtained in physics:"<<physics<<endl;
// }
// class result:public exam
// {
//     float percentage;
//     public:
//         void display()
//         {
//             getroll();
//             getmarks();
//             cout<<"Your result is"<<(maths+physics)/2<<"%"<<endl;
//         }
// };
// int main()
// {
//     result harry;
//     harry.setroll(420);
//     harry.setmarks(94.0,99.0);
//     harry.display();
//     return 0;
// }

//Protected Access Modifier
// #include<bits/stdc++.h>
// using namespace std;
// class base
// {
//     protected:
//         int a;
//     private:
//         int b;
//     //For a protected member :
//     //           Public            Private           Protected
//     //Private    Not inherited     Not inherited     Not inherited
//     //Protected  Protected         Private           Protected
//     //Public     Public            Private           Protected    
// };
// class derived:protected base
// {

// };
// int main()
// {
//     base b;
//     derived d;
//     return 0;
// }

//Multiple inheritance
// #include<bits/stdc++.h>
// using namespace std;
// class base1
// {
//     protected:
//         int base1int;
//     public:
//         void setbase1(int a)
//         {
//             base1int=a;
//         }
// };
// class base2
// {
//     protected:
//         int base2int;
//     public:
//         void setbase2(int a)
//         {
//             base2int=a;
//         }
// };
// class base3
// {
//     protected:
//         int base3int;
//     public:
//         void setbase3(int a)
//         {
//             base3int=a;
//         }
// };
// class derived:public base1,public base2,public base3
// {
//     public:
//         void show()
//         {
//             cout<<base1int<<endl;
//             cout<<base2int<<endl;
//             cout<<base3int<<endl;
//             cout<<base1int+base2int+base3int<<endl;
//         }
// };
// int main()
// {
//     derived d;
//     d.setbase1(25);
//     d.setbase2(5);
//     d.setbase3(15);
//     d.show();
// }

//Ambiguity Resolution in Inheritance
// #include<bits/stdc++.h>
// using namespace std;
// class base1
// {
//     public:
//         void greet()
//         {
//             cout<<"How are you?"<<endl;
//         }
// };
// class base2
// {
//     public:
//         void greet()
//         {
//             cout<<"Kaise ho?"<<endl;
//         }
// };
// class derived:public base1,public base2
// {
//     int a;
//     public:
//         void greet()
//         {
//             base2::greet();
//         }
// };
// class b
// {
//     public:
//         void say()
//         {
//             cout<<"Hello World"<<endl;
//         }
// };
// class d:public b
// {
//     int a;
//     public:
//         void say()
//         {
//             cout<<"Hello friends"<<endl;
//         }
// };
// int main()
// {
//     //Ambiguity 1
//     // base1 b1;
//     // base2 b2;
//     // b1.greet();
//     // b2.greet();
//     // derived d1;
//     // d1.greet();
    
//     //Ambiguity 2
//     b b3;
//     b3.say();
//     d d2;
//     d2.say();
//     return 0;
// }

//Virtual Base Class
//A concept used so that multiple instances of one class does not get passed into inherited classes.
// #include<bits/stdc++.h>
// using namespace std;
// //Inheritance
// //student------->test
// //student------->sports
// //test---------->result
// //sports-------->result
// class student
// {
//     protected:
//         int roll;
//     public:
//         void setno(int a)
//         {
//             roll=a;
//         }
//         void printno()
//         {
//             cout<<"Your roll number is"<<roll<<endl;
//         }
// };
// class test:virtual public student
// {
//     protected:
//         float maths,physics;
//     public:
//         void setm(float m1, float m2)
//         {
//             maths=m1;
//             physics=m2;
//         }
//         void printm()
//         {
//             cout<<"Your result is here"<<endl;
//             cout<<"Maths"<<" "<<maths<<endl;
//             cout<<"Physics"<<" "<<physics<<endl;
//         }
// };
// class sports:virtual public student
// {
//     protected:
//         float score;
//     public:
//         void sets(float sc)
//         {
//             score=sc;
//         }
//         void prints()
//         {
//             cout<<"PT"<<score<<endl;
//         }
// };
// class result:public test,public sports
// {
//     private:
//         float total;
//     public:
//         void display()
//         {
//             total=maths+physics+score;
//             printno();
//             printm();
//             prints();
//             cout<<"Total"<<total<<endl;
//         }
// };
// int main()
// {
//     result r;
//     r.setno(420);
//     r.setm(78.9,99.5);
//     r.sets(9);
//     r.display();
//     return 0; 
// }

// #include<bits/stdc++.h>
// using namespace std;
// class simple
// {
//     int a,b;
//     public:
//         void getdata()
//         {
//             cout<<"Enter the value of a"<<endl;
//             cin>>a;
//             cout<<"Enter the value of b"<<endl;
//             cin>>b;
//         }
//         void operation()
//         {
//             cout<<"The value of a+b is: "<<a+b<<endl;
//             cout<<"The value of a-b is: "<<a-b<<endl;
//             cout<<"The value of a*b is: "<<a*b<<endl;
//             cout<<"The value of a/b is: "<<a/b<<endl;
//         }
// };
// class scientific
// {
//     int a,b;
//     public:
//             void getdatas()
//             {
//                 cout<<"Enter the value of a"<<endl;
//                 cin>>a;
//                 cout<<"Enter the value of b"<<endl;
//                 cin>>b;
//             }
//             void operations()
//             {
//                 cout<<"The value of cos(a) is"<<cos(a)<<endl;
//                 cout<<"The value of sin(a) is"<<sin(a)<<endl;
//                 cout<<"The value of exp(a) is"<<exp(a)<<endl;
//                 cout<<"The value of tan(a) is"<<tan(a)<<endl;
//             }
// };
// class hybrid:public simple,public scientific
// {

// };
// int main()
// {
//     hybrid h;
//     h.getdatas();
//     h.operations();
//     h.getdata();
//     h.operation();
//     return 0;
// }

//Constructors in derived class in cpp-
// #include<bits/stdc++.h>
// using namespace std;
// class base1
// {
//     int data1;
//     public:
//         base1(int i)
//         {
//             data1=i;
//             cout<<"Base 1 class constructor called"<<endl;
//         }
//         void printdata1()
//         {
//             cout<<"The value of data1 is"<<data1<<endl;
//         }
// };
// class base2
// {
//     int data2;
//      public:
//         base2(int i)
//         {
//             data2=i;
//             cout<<"Base 2 class constructor called"<<endl;
//         }
//          void printdata2()
//         {
//             cout<<"The value of data2 is"<<data2<<endl;
//         }
// };
// class derived:public base1,public base2
// {
//     int derived1,derived2;
//     public:
//         derived(int a,int b,int c,int d):base1(b),base2(a)
//         {
//             derived1=c;
//             derived2=d;
//             cout<<"Derived class constructor called"<<endl;
//         }
//          void printdata()
//         {
//             cout<<"The value of derived1 is"<<derived1<<endl;
//             cout<<"The value of derived2 is"<<derived2<<endl;
                
//         }
// };
// int main()
// {
//     derived d1(1,2,3,4);
//     d1.printdata1();
//     d1.printdata2();
//     d1.printdata();
//     return 0;
// }

//Initialization list in constructors
// #include<bits/stdc++.h>
// using namespace std;
// class test
// {
//     int a;
//     int b;
//     public:
//         // test(int i,int j):a(i),b(j)
//         // test(int i,int j):a(i),b(i+j)
//         // test(int i,int j):a(i),b(2*j)
//         // test(int i,int j):a(i),b(a+j)
//         test(int i,int j):b(j),a(i+b)
//         {
//             cout<<"Constructor executed"<<endl;
//             cout<<"Value of a "<<a<<endl;
//             cout<<"Value of b "<<b<<endl;
//         }
// };
// int main()
// {
//     test t(4,6);
//     return 0;
// }

//new and delete keyword
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=4;
//     int *ptr = &a;
//     *ptr=999;
//     cout<<"The value of a is "<<*(ptr)<<endl;
//     // int *p = new int(40); //no need to create variable
//     // cout<<"The value of pointer p is "<<*(p)<<endl;
//     float *p = new float(40.37);
//     cout<<"The value of pointer p is "<<*(p)<<endl;
//     int * arr=new int[3];
//     arr[0]=10;
//     *(arr+1)=20;
//     arr[2]=30;
//      cout<<"The value of arr[0] is "<<arr[0]<<endl;
//      cout<<"The value of arr[1] is "<<arr[1]<<endl;
//      cout<<"The value of arr[2] is "<<arr[2]<<endl;
//      //delete[] arr;
//      delete arr;
//      cout<<"The value of arr[0] is "<<arr[0]<<endl;
//      cout<<"The value of arr[1] is "<<arr[1]<<endl;
//      cout<<"The value of arr[2] is "<<arr[2]<<endl;
//     return 0;
// }

//Pointers in C++
// #include<bits/stdc++.h>
// using namespace std;
// class complexc
// {
//     int real,imaginary;
//     public:
//         void getdata()
//         {
//             cout<<"The real part is:"<<real<<endl;
//             cout<<"The imaginary part is"<<imaginary<<endl;
//         }
//         void setdata(int a,int b)
//         {
//             real=a;
//             imaginary=b;
//         }
// };
// int main()
// {
//     // complexc c1;
//     // complexc *ptr=&c1;
//     // complexc *ptr= new complexc;
//     // (*ptr).setdata(1,54); //same as ptr->setdata()
//     // ptr->getdata();//same as *ptr.getdata()
//     complexc *ptr1 = new complexc[4];
//     ptr1->setdata(1,4);
//     ptr1->getdata();
//     return 0;
// }

//Array of objects using pointers in C++
// #include<bits/stdc++.h>
// using namespace std;
// class shop
// {
//     int id;
//     float price;
//     public:
//         void setdata(int a,int b)
//         {
//             id=a;
//             price=b;
//         }
//         void getdata()
//         {
//             cout<<"Item code is:"<<id<<endl;
//             cout<<"Item price is:"<<price<<endl;
//         }
// };
// int main()
// {
//     int size=3;
//     shop * ptr=new shop[size];
//     shop * ptrt=ptr;
//     int p,i;
//     float q;
//     for(i=0;i<size;i++)
//     {
//         cout<<"Enter the id and price of the item"<<i+1<<endl;
//         cin>>p>>q;
//         ptr->setdata(p,q);
//         ptr++;
//     }
//     for(i=0;i<size;i++)
//     {
//         cout<<"Item number: "<<i+1<<endl;
//         ptrt->getdata();
//         ptrt++;
//     }
//     return 0;
// }

//this pointer in C++
// #include<bits/stdc++.h>
// using namespace std;
// class A
// {
//     int a;
//     public:
//         // A & setdata(int a)
//         // {
//         //     this->a=a;
//         //     return *this;
//         // }
//         void setdata(int a)
//         {
//             this->a=a;
//         }
//         void getdata()
//         {
//             cout<<"The value of a is "<<a<<endl;
//         }
// };
// int main()
// {
//     A a;
//     // a.setdata(4).getdata();//----------->this keyword cretaes an object.
//     a.setdata(4);
//     a.getdata();
//     return 0;
// }