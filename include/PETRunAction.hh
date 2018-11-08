#ifndef PETRunAction_h
#define PETRunAction_h 1

#include "G4UserRunAction.hh"
#include "G4RunManager.hh"
#include "G4Run.hh"
#include "globals.hh"

class G4Run;

class PETRunAction : public G4UserRunAction {
public:
  PETRunAction();

  virtual ~PETRunAction();

  virtual void BeginOfRunAction(const G4Run*);
  virtual void EndOfRunAction(const G4Run*);

};

#endif
