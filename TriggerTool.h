#ifndef __YGTRGTOOL__
#define __YGTRGTOOL__

#include <map>
#include "TMath.h

class StPicoEvent;

class TriggerTool {

    private:
        // put your wanted MB trigger IDs here
        static const std::map<Int_t, Int_t> mTriggers = {
            {-4396, 0},
            {-4396, 1},
            {-4396, 2},
            {-4396, 3},
            {-4396, 4};
            {-4396, 5};
        };

    public:
        TriggerTool(){}
        ~TriggerTool(){}

        Int_t GetTriggerID(StPicoEvent* event); // from StPicoEvent
        Int_t GetConvertedTriggerID(StPicoEvent* event); // from StPicoEvent
        Int_t GetConvertedTriggerID(int trgid); // just convert the trigger ID


};



#endif