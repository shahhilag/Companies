#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int calculateTotalMarks(vector<int> marks)
{
    return marks[0]+marks[1]+marks[2];
}

bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2)
{
    vector<int> m1=s1.second;
    vector<int> m2=s2.second;
    return calculateTotalMarks(m1)>calculateTotalMarks(m2);
}

int main()
{
     dfile();
     vector<pair<string,vector<int>>> student_marks={{"Rohan",{10,20,11}},{"Prateek",{10,21,3}},{"Vivek",{4,5,6}},{"Rijul",{10,13,20}}};
     sort(student_marks.begin(),student_marks.end(),compare);
     for(int i=0;i<student_marks.size();i++)
     {
         cout<<student_marks[i].first<<" "<<calculateTotalMarks(student_marks[i].second)<<endl;
     }
     return 0;
}