//
//  runway.h
//  CsProject
//
//  Created by Youssef Aglan on 24/04/2023.
//

#ifndef runway_h
#define runway_h

class Runway {
private:
    
    bool status;
    
    int RemainingTime;
    
public:
    
    Runway();
    
    bool RunwayAvailability();
    
    void SetStatus(bool status);
    
    void SetRemainingTime(int RemainingTime);
    
    int GetRemainingTime();
    
    void DecrementRT();
};

#endif /* runway_h */


