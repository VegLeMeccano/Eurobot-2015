#ifndef _MAE_MURPHY_H
#define _MAE_MURPHY_H

#include <iostream>
using namespace std;


// implement the state machine MAE_MURPHY
class MAE_MURPHY {
  protected:
    // Mother class of all the classes representing states
    class AnyState {
      public:
        virtual ~AnyState();

        // return the upper state
        virtual AnyState * _upper(MAE_MURPHY &) = 0;

        // perform the 'do activity'
        virtual void _do(MAE_MURPHY &);

        virtual void create(MAE_MURPHY &);

        // the current state doesn't manage the event strat_mis, give it to the upper state
        virtual void strat_mis(MAE_MURPHY & stm);

        // the current state doesn't manage the event evitement, give it to the upper state
        virtual void evitement(MAE_MURPHY & stm);

        // the current state doesn't manage the event assFini, give it to the upper state
        virtual void assFini(MAE_MURPHY & stm);

        // the current state doesn't manage the event adversaire, give it to the upper state
        virtual void adversaire(MAE_MURPHY & stm);

        // the current state doesn't manage the event time_out, give it to the upper state
        virtual void time_out(MAE_MURPHY & stm);

        // the current state doesn't manage the event blocage, give it to the upper state
        virtual void blocage(MAE_MURPHY & stm);

        // the current state doesn't manage the event start_enleve, give it to the upper state
        virtual void start_enleve(MAE_MURPHY & stm);

    };
    
    // implement the state MAE_MURPHY
    class MAE_MURPHY_State : public AnyState {
      public:
        // implement the state Initialisation
        class Initialisation_State : public AnyState {
          public:
            virtual ~Initialisation_State();

            // to manage the event strat_mis
            virtual void strat_mis(MAE_MURPHY & stm);

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

        };
        
        // implement the state startin' block
        class startin_block_State : public AnyState {
          public:
            virtual ~startin_block_State();

            // to manage the event start_enleve
            virtual void start_enleve(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

        };
        
        // implement the state Recalage Initial
        class Recalage_Initial_State : public AnyState {
          public:
            // implement the state Recule
            class Recule_State : public AnyState {
              public:
                virtual ~Recule_State();

                // to manage the event blocage
                virtual void blocage(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state Re set x cap
            class Re_set_x_cap_State : public AnyState {
              public:
                virtual ~Re_set_x_cap_State();

                // to manage the event time_out
                virtual void time_out(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state set Y
            class set_Y_State : public AnyState {
              public:
                virtual ~set_Y_State();

                // to manage the event time_out
                virtual void time_out(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state avance un peu pour tourner
            class avance_un_peu_pour_tourner_State : public AnyState {
              public:
                virtual ~avance_un_peu_pour_tourner_State();

                // to manage the event assFini
                virtual void assFini(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state Recule depart
            class Recule_depart_State : public AnyState {
              public:
                virtual ~Recule_depart_State();

                // to manage the event blocage
                virtual void blocage(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // perform the 'do activity'
                virtual void _do(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state avance
            class avance_State : public AnyState {
              public:
                virtual ~avance_State();

                // to manage the event assFini
                virtual void assFini(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state BF -90 deg
            class BF_90_deg_State : public AnyState {
              public:
                virtual ~BF_90_deg_State();

                // to manage the event assFini
                virtual void assFini(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state Recule bordure claps
            class Recule_bordure_claps_State : public AnyState {
              public:
                virtual ~Recule_bordure_claps_State();

                // to manage the event blocage
                virtual void blocage(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // perform the 'do activity'
                virtual void _do(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state BF 90 deg vers les marches
            class BF_90_deg_vers_les_marches_State : public AnyState {
              public:
                virtual ~BF_90_deg_vers_les_marches_State();

                // to manage the event assFini
                virtual void assFini(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state set X CAP
            class set_X_CAP_State : public AnyState {
              public:
                virtual ~set_X_CAP_State();

                // to manage the event time_out
                virtual void time_out(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            virtual ~Recalage_Initial_State();

            // memorize the instance of the state Recule, internal
            Recule_State _recule_state;

            // memorize the instance of the state set X CAP, internal
            set_X_CAP_State _set_x_cap_state;

            // memorize the instance of the state BF 90 deg vers les marches, internal
            BF_90_deg_vers_les_marches_State _bf_90_deg_vers_les_marches_state;

            // memorize the instance of the state Recule bordure claps, internal
            Recule_bordure_claps_State _recule_bordure_claps_state;

            // memorize the instance of the state BF -90 deg, internal
            BF_90_deg_State _bf_90_deg_state;

            // memorize the instance of the state avance, internal
            avance_State _avance_state;

            // memorize the instance of the state Recule depart, internal
            Recule_depart_State _recule_depart_state;

            // memorize the instance of the state avance un peu pour tourner, internal
            avance_un_peu_pour_tourner_State _avance_un_peu_pour_tourner_state;

            // memorize the instance of the state set Y, internal
            set_Y_State _set_y_state;

            // memorize the instance of the state Re set x cap, internal
            Re_set_x_cap_State _re_set_x_cap_state;

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // to manage the exit point 'sortie recalage', defined because probably shared
            void _exit3(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

        };
        
        // implement the state Evitement
        class Evitement_State : public AnyState {
          public:
            virtual ~Evitement_State();

            virtual bool _completion(MAE_MURPHY & stm);

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

        };
        
        // implement the state Jeu
        class Jeu_State : public AnyState {
          public:
            // implement the state mission pillage distrib
            class mission_pillage_distrib_State : public AnyState {
              public:
                // implement the state sortie de la zone de depart
                class sortie_de_la_zone_de_depart_State : public AnyState {
                  public:
                    virtual ~sortie_de_la_zone_de_depart_State();

                    // to manage the event assFini
                    virtual void assFini(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state vidage distributeur
                class vidage_distributeur_State : public AnyState {
                  public:
                    virtual ~vidage_distributeur_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state capture stand bordure
                class capture_stand_bordure_State : public AnyState {
                  public:
                    virtual ~capture_stand_bordure_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state capture stands cote escalier
                class capture_stands_cote_escalier_State : public AnyState {
                  public:
                    virtual ~capture_stands_cote_escalier_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state capture de gobelet escalier
                class capture_de_gobelet_escalier_State : public AnyState {
                  public:
                    // implement the state deplacement cible
                    class deplacement_cible_State : public AnyState {
                      public:
                        virtual ~deplacement_cible_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event adversaire
                        virtual void adversaire(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF cap vers la zone de distrib
                    class BF_cap_vers_la_zone_de_distrib_State : public AnyState {
                      public:
                        virtual ~BF_cap_vers_la_zone_de_distrib_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state capture
                    class capture_State : public AnyState {
                      public:
                        virtual ~capture_State();

                        // to manage the event time_out
                        virtual void time_out(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    virtual ~capture_de_gobelet_escalier_State();

                    // memorize the instance of the state deplacement cible, internal
                    deplacement_cible_State _deplacement_cible_state;

                    // memorize the instance of the state capture, internal
                    capture_State _capture_state;

                    // memorize the instance of the state BF cap vers la zone de distrib, internal
                    BF_cap_vers_la_zone_de_distrib_State _bf_cap_vers_la_zone_de_distrib_state;

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // to manage the exit point 'sortie capture gobelet', defined because probably shared
                    void _exit1(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                virtual ~mission_pillage_distrib_State();

                // memorize the instance of the state sortie de la zone de depart, internal
                sortie_de_la_zone_de_depart_State _sortie_de_la_zone_de_depart_state;

                // memorize the instance of the state capture de gobelet escalier, internal
                capture_de_gobelet_escalier_State _capture_de_gobelet_escalier_state;

                // memorize the instance of the state capture stands cote escalier, internal
                capture_stands_cote_escalier_State _capture_stands_cote_escalier_state;

                // memorize the instance of the state capture stand bordure, internal
                capture_stand_bordure_State _capture_stand_bordure_state;

                // memorize the instance of the state vidage distributeur, internal
                vidage_distributeur_State _vidage_distributeur_state;

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state mission zone ennemie
            class mission_zone_ennemie_State : public AnyState {
              public:
                // implement the state waypoint initial
                class waypoint_initial_State : public AnyState {
                  public:
                    virtual ~waypoint_initial_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state faire chier en zizagant
                class faire_chier_en_zizagant_State : public AnyState {
                  public:
                    virtual ~faire_chier_en_zizagant_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state depot gobelet
                class depot_gobelet_State : public AnyState {
                  public:
                    virtual ~depot_gobelet_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state claps central
                class claps_central_State : public AnyState {
                  public:
                    virtual ~claps_central_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                virtual ~mission_zone_ennemie_State();

                // memorize the instance of the state waypoint initial, internal
                waypoint_initial_State _waypoint_initial_state;

                // memorize the instance of the state claps central, internal
                claps_central_State _claps_central_state;

                // memorize the instance of the state depot gobelet, internal
                depot_gobelet_State _depot_gobelet_state;

                // memorize the instance of the state faire chier en zizagant, internal
                faire_chier_en_zizagant_State _faire_chier_en_zizagant_state;

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state sortie de zone de depart
            class sortie_de_zone_de_depart_State : public AnyState {
              public:
                virtual ~sortie_de_zone_de_depart_State();

                // to manage the event assFini
                virtual void assFini(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state mission depot de tour
            class mission_depot_de_tour_State : public AnyState {
              public:
                virtual ~mission_depot_de_tour_State();

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state etat de decision
            class etat_de_decision_State : public AnyState {
              public:
                virtual ~etat_de_decision_State();

                virtual bool _completion(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state mission rush zone centrale
            class mission_rush_zone_centrale_State : public AnyState {
              public:
                virtual ~mission_rush_zone_centrale_State();

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state mission claps
            class mission_claps_State : public AnyState {
              public:
                // implement the state chope du stand sur la route
                class chope_du_stand_sur_la_route_State : public AnyState {
                  public:
                    virtual ~chope_du_stand_sur_la_route_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state pose seconde pile? zone de depart
                class pose_seconde_pile_zone_de_depart_State : public AnyState {
                  public:
                    virtual ~pose_seconde_pile_zone_de_depart_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state chope stand milieu
                class chope_stand_milieu_State : public AnyState {
                  public:
                    virtual ~chope_stand_milieu_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state pose pile
                class pose_pile_State : public AnyState {
                  public:
                    virtual ~pose_pile_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state decision
                class decision_State : public AnyState {
                  public:
                    virtual ~decision_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state chope stand pres estrade
                class chope_stand_pres_estrade_State : public AnyState {
                  public:
                    virtual ~chope_stand_pres_estrade_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state claps 2
                class claps_2_State : public AnyState {
                  public:
                    virtual ~claps_2_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state claps 1
                class claps_1_State : public AnyState {
                  public:
                    virtual ~claps_1_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state chope du gobelet et des stands
                class chope_du_gobelet_et_des_stands_State : public AnyState {
                  public:
                    virtual ~chope_du_gobelet_et_des_stands_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                virtual ~mission_claps_State();

                // memorize the instance of the state chope du stand sur la route, internal
                chope_du_stand_sur_la_route_State _chope_du_stand_sur_la_route_state;

                // memorize the instance of the state chope du gobelet et des stands, internal
                chope_du_gobelet_et_des_stands_State _chope_du_gobelet_et_des_stands_state;

                // memorize the instance of the state claps 1, internal
                claps_1_State _claps_1_state;

                // memorize the instance of the state claps 2, internal
                claps_2_State _claps_2_state;

                // memorize the instance of the state chope stand pres estrade, internal
                chope_stand_pres_estrade_State _chope_stand_pres_estrade_state;

                // memorize the instance of the state decision, internal
                decision_State _decision_state;

                // memorize the instance of the state pose pile, internal
                pose_pile_State _pose_pile_state;

                // memorize the instance of the state chope stand milieu, internal
                chope_stand_milieu_State _chope_stand_milieu_state;

                // memorize the instance of the state pose seconde pile? zone de depart, internal
                pose_seconde_pile_zone_de_depart_State _pose_seconde_pile_zone_de_depart_state;

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // to manage the exit point 'fin claps', defined because probably shared
                void _exit2(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            // implement the state mission attrap balle et chiage
            class mission_attrap_balle_et_chiage_State : public AnyState {
              public:
                virtual ~mission_attrap_balle_et_chiage_State();

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            virtual ~Jeu_State();

            // memorize the instance of the state mission pillage distrib, internal
            mission_pillage_distrib_State _mission_pillage_distrib_state;

            // memorize the instance of the state mission attrap balle et chiage, internal
            mission_attrap_balle_et_chiage_State _mission_attrap_balle_et_chiage_state;

            // memorize the instance of the state mission claps, internal
            mission_claps_State _mission_claps_state;

            // memorize the instance of the state mission rush zone centrale, internal
            mission_rush_zone_centrale_State _mission_rush_zone_centrale_state;

            // memorize the instance of the state etat de decision, internal
            etat_de_decision_State _etat_de_decision_state;

            // memorize the instance of the state mission depot de tour, internal
            mission_depot_de_tour_State _mission_depot_de_tour_state;

            // memorize the instance of the state sortie de zone de depart, internal
            sortie_de_zone_de_depart_State _sortie_de_zone_de_depart_state;

            // memorize the instance of the state mission zone ennemie, internal
            mission_zone_ennemie_State _mission_zone_ennemie_state;

            // to manage the event evitement
            virtual void evitement(MAE_MURPHY & stm);

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

        };
        
        virtual ~MAE_MURPHY_State();

        // memorize the instance of the state Initialisation, internal
        Initialisation_State _initialisation_state;

        // memorize the instance of the state Jeu, internal
        Jeu_State _jeu_state;

        // memorize the instance of the state Evitement, internal
        Evitement_State _evitement_state;

        // memorize the instance of the state Recalage Initial, internal
        Recalage_Initial_State _recalage_initial_state;

        // to manage the event create
        virtual void create(MAE_MURPHY & stm);

        // returns the state containing the current
        virtual AnyState * _upper(MAE_MURPHY &);

        // memorize the instance of the state startin' block, internal
        startin_block_State _startin_block_state;

    };
    
    // memorize the instance of the state MAE_MURPHY, internal
    MAE_MURPHY_State _mae_murphy_state;


  public:
    MAE_MURPHY();

    virtual ~MAE_MURPHY();

    // the operation you call to signal the event create
    bool create();

    // the operation you call to signal the event strat_mis
    bool strat_mis();

  friend class MAE_MURPHY_State::Initialisation_State;
    // the operation you call to signal the event evitement
    bool evitement();

    // the operation you call to signal the event assFini
    bool assFini();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_de_la_zone_de_depart_State;
    // the operation you call to signal the event adversaire
    bool adversaire();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::deplacement_cible_State;
    // the operation you call to signal the event time_out
    bool time_out();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::capture_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::BF_cap_vers_la_zone_de_distrib_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_stand_sur_la_route_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_du_gobelet_et_des_stands_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_1_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::claps_2_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_pres_estrade_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::decision_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_pile_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::chope_stand_milieu_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State::pose_seconde_pile_zone_de_depart_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_claps_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_rush_zone_centrale_State;
  friend class MAE_MURPHY_State::Jeu_State::etat_de_decision_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_State;
  friend class MAE_MURPHY_State::Jeu_State::sortie_de_zone_de_depart_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::waypoint_initial_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::claps_central_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::depot_gobelet_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State::faire_chier_en_zizagant_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_zone_ennemie_State;
  friend class MAE_MURPHY_State::Jeu_State;
  friend class MAE_MURPHY_State::Evitement_State;
    // the operation you call to signal the event blocage
    bool blocage();

  friend class MAE_MURPHY_State::Recalage_Initial_State::Recule_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::set_X_CAP_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_vers_les_marches_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::Recule_bordure_claps_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::BF_90_deg_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::avance_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::Recule_depart_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::avance_un_peu_pour_tourner_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::set_Y_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::Re_set_x_cap_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State;
  friend class MAE_MURPHY_State;
    // to execute the current state 'do activity'
    void doActivity();


  protected:
    // change the current state, internal
    inline void _set_currentState(AnyState & st);

    // execution done, internal
    void _final();

    // contains the current state, internal
    AnyState * _current_state;


  public:
    // the operation you call to signal the event start_enleve
    bool start_enleve();

  friend class MAE_MURPHY_State::startin_block_State;
};
// change the current state, internal
inline void MAE_MURPHY::_set_currentState(MAE_MURPHY::AnyState & st) {
    _current_state = &st;
}

#endif