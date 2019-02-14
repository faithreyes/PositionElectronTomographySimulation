//
// Created by Dung Phan on 3/19/18.
//

#ifndef PETSIM_PETSTEPPINGACTION_HH
#define PETSIM_PETSTEPPINGACTION_HH

#include "G4UserSteppingAction.hh"
#include "PETRunAction.hh"

#include "TTree.h"
#include "TBranch.h"

class G4Track;
class G4StepPoint;
class G4OpBoundaryProcess;

class PETDetectorConstruction;

class PETSteppingAction : public G4UserSteppingAction {
public:
  PETSteppingAction(PETDetectorConstruction*);
  virtual ~PETSteppingAction();

  virtual void UserSteppingAction(const G4Step*);





private:
  G4OpBoundaryProcess* fOpProcess;
  PETDetectorConstruction* fDetector;
  PETRunAction *fRunAction;


};


#endif //PETSIM_PETSTEPPINGACTION_HH
