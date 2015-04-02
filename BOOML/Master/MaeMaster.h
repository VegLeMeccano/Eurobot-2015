#ifndef _MAEMASTER_H
#define _MAEMASTER_H
#include <iostream>
using namespace std;


// implement the state machine Master
class Master {
  protected:
    // Mother class of all the classes representing states
    class AnyState {
      public:
        virtual ~AnyState();

        // return the upper state
        virtual AnyState * _upper(Master &) = 0;

        // perform the 'do activity'
        virtual void _do(Master &);

        virtual void create(Master &);

        // the current state doesn't manage the event stratEnleve, give it to the upper state
        virtual void stratEnleve(Master & stm);

        // the current state doesn't manage the event evitement, give it to the upper state
        virtual void evitement(Master & stm);

    };
    
    // implement the state Master
    class Master_State : public AnyState {
      public:
        // implement the state Attente
        class Attente_State : public AnyState {
          public:
            virtual ~Attente_State();

            // to manage the event stratEnleve
            virtual void stratEnleve(Master & stm);

            // perform the 'do activity'
            virtual void _do(Master & stm);

            // returns the state containing the current
            virtual AnyState * _upper(Master & stm);

        };
        
        // implement the state Evitement
        class Evitement_State : public AnyState {
          public:
            virtual ~Evitement_State();

            virtual bool _completion(Master & stm);

            // to manage the event create
            virtual void create(Master & stm);

            // perform the 'do activity'
            virtual void _do(Master & stm);

            // returns the state containing the current
            virtual AnyState * _upper(Master & stm);

        };
        
        // implement the state Jeu
        class Jeu_State : public AnyState {
          public:
            virtual ~Jeu_State();

            // to manage the event evitement
            virtual void evitement(Master & stm);

            // perform the 'do activity'
            virtual void _do(Master & stm);

            // returns the state containing the current
            virtual AnyState * _upper(Master & stm);

        };
        
        virtual ~Master_State();

        // memorize the instance of the state Attente, internal
        Attente_State _attente_state;

        // memorize the instance of the state Jeu, internal
        Jeu_State _jeu_state;

        // memorize the instance of the state Evitement, internal
        Evitement_State _evitement_state;

        // to manage the event create
        virtual void create(Master & stm);

        // returns the state containing the current
        virtual AnyState * _upper(Master &);

    };
    
    // memorize the instance of the state Master, internal
    Master_State _master_state;


  public:
    Master();

    virtual ~Master();

    // the operation you call to signal the event create
    bool create();

    // the operation you call to signal the event stratEnleve
    bool stratEnleve();

  friend class Master_State::Attente_State;
    // the operation you call to signal the event evitement
    bool evitement();

  friend class Master_State::Jeu_State;
  friend class Master_State::Evitement_State;
  friend class Master_State;
    // to execute the current state 'do activity'
    void doActivity();


  protected:
    // change the current state, internal
    inline void _set_currentState(AnyState & st);

    // execution done, internal
    void _final();

    // contains the current state, internal
    AnyState * _current_state;

};
// change the current state, internal
inline void Master::_set_currentState(Master::AnyState & st) {
    _current_state = &st;
}

#endif
