#include <iostream>
using namespace std;

class Boy{
    public:
      Boy(double mount){
        this->m_money = mount;
      }
     ~Boy(){}
      double getMoney(){
         return m_money;
     }
     void Disp();
    private:
      double m_money;
};

class Girl{
   public: 
      Girl():m_money(10){}
      ~Girl(){}
      double getmoney(){
           return m_money;
      }
      friend void Boy::Disp();
   private:
      double m_money;
      

};

void Boy::Disp()
{
    Girl g;
    cout <<"g.m_money: "<< g.m_money<<endl;
}

void get(Boy &b)
{
//    cout <<b.m_money << endl;
}


int main(void)
{
    Boy boy(100);
   // cout <<boy.getMoney()<< endl;
   // get(boy);
    Girl girl;
   // girl.getmoney();
    boy.Disp();
    return 0;
}




