#include<iostream>
using namespace std;

class Distance {
    public :
    int km, meter;

public:
    
    void readDistance()
    {
        cout<<"Enter km =  ";
        cin>>km;
        cout<<"Enter meter = ";
        cin>>meter;
    }

   
    void dispDistance()
    {
        cout<<"km = "<<km<<"\t"
             <<"meter = "<<meter<<endl;
    }

    
    Distance operator+(Distance& dist1)
    {
        Distance tempD; 
        tempD.meter = meter + dist1.meter;
        tempD.km = km + dist1.km + (tempD.meter/1000);
        tempD.meter = tempD.meter % 1000;
        return tempD;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout<<"Enter first distance = "<<endl;
    D1.readDistance();
    cout<<endl;

    cout<<"Enter second distance = "<<endl;
    D2.readDistance();
    cout<<endl;

   
    D3 = D1 + D2;

    cout<<"total distance is = "<<endl;
    D3.dispDistance();

    cout<<endl;

    return 0;
}

