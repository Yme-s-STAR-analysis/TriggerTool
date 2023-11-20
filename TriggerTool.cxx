#include "TriggerTool.h"
#include "StPicoEvent/StPicoEvent.h"

TriggerTool::TriggerTool() {
    mTriggers = std::map<Int_t, Int_t>{
        {640001, 0},
        {640011, 1},
        {640021, 2},
        {640031, 3},
        {640041, 4},
        {640051, 5}
    };
}

Int_t TriggerTool::GetTriggerID(StPicoEvent* event) {
    for (auto item : mTriggers) {
        if (event->isTrigger(item.first)) {
            return item.first;
        }
    }
    return -1;
}

Int_t TriggerTool::GetConvertedTriggerID(StPicoEvent* event) {
    for (auto item : mTriggers) {
        if (event->isTrigger(item.first)) {
            return item.second;
        }
    }
    return -1;
}

Int_t TriggerTool::GetConvertedTriggerID(int trgid) {
    for (auto item : mTriggers) {
        if (trgid == item.first) {
            return item.second;
        }
    }
    return -1;
}