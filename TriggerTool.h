#ifndef __YGTRGTOOL__
#define __YGTRGTOOL__

#include <map>
#include "TMath.h"

class StPicoEvent;

class TriggerTool {

    private:
        // put your wanted MB trigger IDs here
        std::map<Int_t, Int_t> mTriggers;

    public:
        TriggerTool();
        ~TriggerTool(){}

        Int_t GetTriggerID(StPicoEvent* event); // from StPicoEvent
        Int_t GetConvertedTriggerID(StPicoEvent* event); // from StPicoEvent
        Int_t GetConvertedTriggerID(int trgid); // just convert the trigger ID


};



#endif