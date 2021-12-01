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
    int mrp;//4
    int selling_price;//4
public:
    //Setters
    void setMrp(int price)
    {
        if(price>0)
        {
            mrp=price;
        }
    }
    void setSellingPrice(int price)
    {
        if(price>mrp)
        {
            selling_price=mrp;
        }
        else
        {
            selling_price=price;
        }
    }
    //Getters
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }
};

int main()
{
     dfile();
     Product camera;
     cout<<sizeof(camera)<<endl;
     camera.setMrp(100);
     camera.setSellingPrice(200);
     cout<<"MRP:"<<camera.getMrp()<<endl;
     cout<<"Selling Price:"<<camera.getSellingPrice()<<endl;
     return 0;
}