//
//  airplane.h
//  CsProject
//
//  Created by Youssef Aglan on 24/04/2023.
//

#ifndef airplane_h
#define airplane_h

class Airplane {
private:
   
    int ID;
    
    int ArrivalT;
    
    int WaitT;
    
    int TakeoffT;
    
public:
    
    Airplane(int ID, int ArrivalT);
    
    int GetID();
    
    int GetAT();
    
    void SetWT(int WaitT);
    
    int GetWT();
    
    void SetTT(int TakeoffT);
    
    int GetTT();
};

#endif /* airplane_h */

