//
// Created by Addie Harrison on 11/13/19.
//

#include "Data.h"
using namespace std;
//constructors
Data::Data(){
    companyName="";
    diffMedianHourlyPercent=0.0;
    diffMeanHourlyPercent=0.0;
    companyNumber=" ";
}
Data::Data(string name, double median, double mean, string num){
    companyName=name;
    diffMedianHourlyPercent=median;
    diffMeanHourlyPercent=mean;
    companyNumber=num;
}
bool Data:: operator>(Data d){
    if(this->diffMeanHourlyPercent>d.diffMeanHourlyPercent){
        return true;
    }
    else{
        return false;
    }
}
bool Data:: operator<(Data d){
    if(this->diffMeanHourlyPercent<d.diffMeanHourlyPercent){
        return true;
    }
    else{
        return false;
    }
}
ostream& operator<<(ostream& os, const Data& data){
    os<< "Company: "<< data.companyName<<"  Company Number: "<<data.companyNumber<<"  Difference in Median Hourly Pay: "<<data.diffMedianHourlyPercent<<"  Difference in Mean Hourly Pay: "<<data.diffMeanHourlyPercent<<endl;
    return os;
}