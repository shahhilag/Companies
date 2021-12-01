#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

class Product
{
private:
    int id;//4
    char name[100];//100
    // int mrp;//4
    // int selling_price;//4
public:
    int mrp;
    int selling_price;
};

int main()
{
     dfile();
     Product camera;
     cout<<sizeof(camera)<<endl;
     camera.mrp=100;
     camera.selling_price=200;
     cout<<"MRP:"<<camera.mrp<<endl;
     cout<<"Selling Price:"<<camera.selling_price<<endl;
     return 0;
}