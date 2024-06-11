#include "TableBasedAdjuster.h"

TableBasedAdjuster& TableBasedAdjuster::addBreakpoint(float x, float y) {
    breakpoints.insert(std::make_pair(x,y));
    return *this;
}

float TableBasedAdjuster::adjust(float value) const {
    if(breakpoints.empty()){
        return value;
    }
    float k_max = breakpoints.begin()->first;
    float k_min = breakpoints.rbegin()->first;
    float v_max = breakpoints.begin()->second;
    float v_min = breakpoints.rbegin()->second;
    float a = 0;

    if(value <= k_min)
    {
        a= v_min -(k_min -value);
    }
    else if (value >= k_max){
        a = v_max + (value - k_max);
    }
    for(auto it = breakpoints.begin(); it!= breakpoints.end();it++){
        float k_n = it->first;
        auto next_itr = std::next(it);
        float k_plus1 = next_itr->first;
        float v_n = it->second;
        float v_plus1 = next_itr->second;
        if(k_n < value && value <= k_plus1){
            a = (value - k_n) / (k_plus1 - k_n) * (v_plus1 - v_n) + v_n;
        }
    }
    return a;


}
