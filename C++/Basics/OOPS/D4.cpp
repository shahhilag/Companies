//Polymorphism-
//One name many forms
//1.Compile Time Polymorphism(Early binding)-Binds the object to a function and takes decision during compile time.--------------->(i)Function Overloading (ii)Operator Overloading
//2.Run Time Polymorphism(Late binding)-Does not bind the object to the function and takes decision during run time.------------------->(i)Virtual Function 

//Pointers to derived class-
// #include<bits/stdc++.h>
// using namespace std;
// class base
// {
//     public:
//         int varb;
//         void display()
//         {
//             cout<<"Displaying base class variable "<<varb<<endl;
//         }
// };
// class derived:public base
// {
//     public:
//         int vard;
//         void display()
//         {
//             cout<<"Displaying base class variable "<<varb<<endl;
//             cout<<"Displaying derived class variable"<<vard<<endl;
//         }
// };
// int main()
// {
//     base *basep;
//     base b;
//     derived d;
//     basep=&d;//Pointing base class pointer to derived class pointer
//     basep->display();
//     basep->varb=3400;
//     basep->display();
//     derived *derivedp;
//     derivedp=&d;
//     derivedp->varb=9448;
//     derivedp->vard=98;
//     derivedp->display();
//     return 0;
// }

//Virtual Function-A vitual function is a member function which is declared within a base class and is redefined by a derived class.
// #include<bits/stdc++.h>
// using namespace std;
// class base
// {
//     public:
//         int varb=1;
//         virtual void display()
//         {
//             cout<<"Displaying base class variable "<<varb<<endl;
//         }
//         void show()
//         {
//             cout<<"Displaying base class variable "<<varb<<endl;
//         }
// };
// class derived:public base
// {
//     public:
//         int vard=2;
//         void display()
//         {
//             cout<<"Displaying base class variable "<<vard<<endl;
//         }
//         void show()
//         {
//             cout<<"Displaying base class variable "<<vard<<endl;
//         }
// };
// int main()
// {
//     base *b;
//     derived d;
//     b=&d;
//     b->display();//Making a function virtual decreases its priority.
//     b->show();
//     return 0;
// }

//Virtual Functions example
// #include<bits/stdc++.h>
// using namespace std;
// class CWH
// {
//     protected:
//         string title;
//         float rating;
//     public:
//         CWH(string s,float r)
//         {
//             title=s;
//             rating=r;
//         }
//         virtual void display()
//         {}
// };
// class CWHVideo : public CWH
// {
//     float v;
//     public:
//         CWHVideo(string s, float r, float vl):CWH(s,r)
//         {
//             v=vl;
//         }
//         void display()
//         {
//             cout<<"This is an amazing video with title"<<title<<endl;
//             cout<<"Ratings:"<<rating<<"out of 5 stars"<<endl;
//             cout<<"Length of this video is:"<<v<<"minutes"<<endl;
//         }
// };
// class CWHText:public CWH
// {
//     int words;
//     public:
//         CWHText(string s,float r,int wc):CWH(s,r)
//         {
//             words=wc;
//         }
//         void display()
//         {
//             cout<<"This is an amazing text tutorial with title"<<title<<endl;
//             cout<<"Ratings of this text tutorial"<<rating<<endl;
//             cout<<"No of words text tutorial is"<<words<<"words"<<endl;
//         }
// };
// int main()
// {
//     string title;
//     float rating,vlen;
//     int words;
//     title="Django tutorial";
//     vlen=4.56;
//     rating=4.89;
//     CWHVideo dj(title,rating,vlen);
//     title="Django tutorial Text";
//     words=433;
//     rating=4.19;
//     CWHText djText(title,rating,words);
//     CWH *tuts[2];
//     tuts[0]=&dj;
//     tuts[1]=&djText;
//     tuts[0]->display();
//     tuts[1]->display();
//     return 0;
// }

//char * vs string - char * has a limit of 256 characters whereas string does not worry about the length.

//Abstract Base Class and pure virtual function
//Pure Virtual function in C++ - Pure Virtual function is a virtual function declared =0.Pure virtual functions are declared in abstract class.
//Abstract Class in C++ - Abstract base class is a class that has at least one pure virtual function in its class.
//  class CWH
// {
//     protected:
//         string title;
//         float rating;
//     public:
//         CWH(string s,float r)
//         {
//             title=s;
//             rating=r;
//         }
//         virtual void display()=0;
// };
//Compulsory to declare display() function in inherited class.

//File IO-Usingg constructors

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="Hilag";
//     ofstream out("sample.txt"); //Hilag will be printed in sample.txt
//     out<<s;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s2;
//     ifstream in("sample.txt");
//     // in>>s2; //------------>One char
//     // getline(in,s2); //-------->Complete line
//     cout<<s2;
//     return 0;
// }

//File IO-using open(),eof()
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ofstream out;
//     out.open("sample.txt");
//     out<<"This is main \n";
//     out<<"This is also main";
//     out.close();
//     ifstream in;
//     string s;
//     in.open("sample.txt");
//     while(in.eof()==0)
//     {
//         getline(in,s);
//         cout<<s<<endl;
//     }
//     in.close();
//     return 0;
// }

//Templates(Parameterized classes) in C++
// #include<bits/stdc++.h>
// using namespace std;
// template <class T1,class T2>
// class myclass
// {
//     public:
//         T1 data1;
//         T2 data2;
//         myclass(T1 a,T2 b)
//         {
//             data1=a;
//             data2=b;
//         }
//         void display()
//         {
//             cout<<this->data1<<endl<<this->data2;
//         }
// };
// int main()
// {
//     myclass<int,float> obj(1,1.8);
//     obj.display();
//     return 0;
// }

//Function templates
// #include<bits/stdc++.h>
// using namespace std;
// template<class T1,class T2>
// float average(T1 a, T2 b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// int main()
// {
//     float a ;
//     a= average(5,2.4);
//     cout<<"The average of this number is "<<a;
//     return 0;
// }