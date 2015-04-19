#include "Period.h"

Period::Period(int period_):period(period_)
{
    reset();
}


void Period::reset()
{
    time_last_reset = clock();
}



bool Period::is_over(){
    long t = clock();
    if (t - time_last_reset > period){
    return true;
    }
    else
    {
    return false;
    }

}


void Period::set_periode(int period_){
    period = period_;
}
