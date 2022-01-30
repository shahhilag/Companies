#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int main()
{
    dfile();
    unordered_map<string,int> menu;
    //Insert Key values inside a hashtable in O(1) operations
    menu["Maggi"]=15;
    menu["Colddrink"]=20;
    menu["Dosa"]=99;

    //Update Query
    menu["Dosa"]=(1+0.1)*menu["Dosa"];

    //Deletion
    menu.erase("Dosa");

    //Search an item
    string item;
    cin>>item;
    // if(menu.find(item)==menu.end())
    // {
    //     cout<<item<<" is not available"<<endl;
    // }
    // else
    // {
    //     cout<<item<<" is available,and its cost is"<<menu[item]<<endl;
    // }
    if(menu.count(item)==0)
    {
        cout<<item<<" is not available"<<endl;
    }
    else
    {
        cout<<item<<" is available,and its cost is "<<menu[item]<<endl;
    }

    //Iterate over all  the items in the hashtable
    for(auto item:menu)
    {
        cout<<item.first<<" - "<<item.second<<endl;
    }

    return 0;
}