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
    Product()
    {
        cout<<"Inside Constructor";
    }
    Product(int id,char*n,int mrp,int selling_price)
    {
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        strcpy(name,n);
    }
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
    void showDetails()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Selling Price:"<<selling_price<<endl;
        cout<<"MRP:"<<mrp<<endl;
    }
};

int main()
{
     dfile();
     Product camera(101,"Sony",28000,26000);
     //cout<<sizeof(camera)<<endl;
     Product webcam(camera);
     camera.showDetails();
     webcam.showDetails();
     return 0;
}