#include "TriggerTool.h"
#include "StPicoEvent/StPicoEvent.h"

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