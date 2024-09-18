#include<iostream>
#include<string>
using namespace std;
class date{
    public:
    date(int mes,int dia,int año):aye{año},me{mes},day{dia}{
        if(mes>=1 && mes<=12){
            me=mes;
        }
        else{
            me=1;
        }
    }
    void getyear(int año){
        aye=año;
    }
    int setyear()const{
        return aye;
    }
    void getdia(int dia){
        day=dia;
    }
    int setdia()const{
        return day;
    }
    int setmonth()const{
        return me;
    }
    void fecha()const{
        cout<<day<<"/"<<me<<"/"<<aye<<endl;
    }

    private:
    int aye;
    int me;
    int day;
};
