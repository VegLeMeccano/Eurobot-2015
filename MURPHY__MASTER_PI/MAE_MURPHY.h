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

        // the current state doesn't manage the event time_out, give it to the upper state
        virtual void time_out(MAE_MURPHY & stm);

        // the current state doesn't manage the event blocage, give it to the upper state
        virtual void blocage(MAE_MURPHY & stm);

        // the current state doesn't manage the event start_enleve, give it to the upper state
        virtual void start_enleve(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_distrib, give it to the upper state
        virtual void mission_distrib(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_depot_tour, give it to the upper state
        virtual void mission_depot_tour(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_zone_ennemie, give it to the upper state
        virtual void mission_zone_ennemie(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_chiage, give it to the upper state
        virtual void mission_chiage(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_zone_centrale, give it to the upper state
        virtual void mission_zone_centrale(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_depot_estrade, give it to the upper state
        virtual void mission_depot_estrade(MAE_MURPHY & stm);

        // the current state doesn't manage the event mission_claps, give it to the upper state
        virtual void mission_claps(MAE_MURPHY & stm);

        // the current state doesn't manage the event pince_ouverte, give it to the upper state
        virtual void pince_ouverte(MAE_MURPHY & stm);

        // the current state doesn't manage the event pince_stand_by, give it to the upper state
        virtual void pince_stand_by(MAE_MURPHY & stm);

        // the current state doesn't manage the event distrib_deboite, give it to the upper state
        virtual void distrib_deboite(MAE_MURPHY & stm);

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

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

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
            
            // implement the state coup de patte cote escalier pour confirmer le sens
            class coup_de_patte_cote_escalier_pour_confirmer_le_sens_State : public AnyState {
              public:
                virtual ~coup_de_patte_cote_escalier_pour_confirmer_le_sens_State();

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                virtual bool _completion(MAE_MURPHY & stm);

            };
            
            // implement the state set X Y CAP
            class set_X_Y_CAP_State : public AnyState {
              public:
                virtual ~set_X_Y_CAP_State();

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

            // memorize the instance of the state avance, internal
            avance_State _avance_state;

            // to manage the event create
            virtual void create(MAE_MURPHY & stm);

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

            // memorize the instance of the state coup de patte cote escalier pour confirmer le sens, internal
            coup_de_patte_cote_escalier_pour_confirmer_le_sens_State _coup_de_patte_cote_escalier_pour_confirmer_le_sens_state;

            // memorize the instance of the state set X Y CAP, internal
            set_X_Y_CAP_State _set_x_y_cap_state;

            // to manage the exit point 'sortie recalage', defined because probably shared
            void _exit12(MAE_MURPHY & stm);

        };
        
        // implement the state Evitement
        class Evitement_State : public AnyState {
          public:
            // implement the state faire des maneuvre
            class faire_des_maneuvre_State : public AnyState {
              public:
                virtual ~faire_des_maneuvre_State();

                virtual bool _completion(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

            };
            
            virtual ~Evitement_State();

            // perform the 'entry behavior'
            void _doentry(MAE_MURPHY & stm);

            // returns the state containing the current
            virtual AnyState * _upper(MAE_MURPHY & stm);

            // memorize the instance of the state faire des maneuvre, internal
            faire_des_maneuvre_State _faire_des_maneuvre_state;

            // implement a junction, through an operation because shared, internal
            void _junction1(MAE_MURPHY & stm);

            // to manage the exit point 'sortie evitement', defined because probably shared
            void _exit11(MAE_MURPHY & stm);

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
                
                // implement the state sortie zone
                class sortie_zone_State : public AnyState {
                  public:
                    virtual ~sortie_zone_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state rejoindre le point de depart mission
                class rejoindre_le_point_de_depart_mission_State : public AnyState {
                  public:
                    // implement the state orientation vers objectif
                    class orientation_vers_objectif_State : public AnyState {
                      public:
                        virtual ~orientation_vers_objectif_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state orientation cap mission
                    class orientation_cap_mission_State : public AnyState {
                      public:
                        virtual ~orientation_cap_mission_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF droite vers l'objectif
                    class BF_droite_vers_lobjectif_State : public AnyState {
                      public:
                        virtual ~BF_droite_vers_lobjectif_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    virtual ~rejoindre_le_point_de_depart_mission_State();

                    // memorize the instance of the state orientation vers objectif, internal
                    orientation_vers_objectif_State _orientation_vers_objectif_state;

                    // memorize the instance of the state BF droite vers l'objectif, internal
                    BF_droite_vers_lobjectif_State _bf_droite_vers_lobjectif_state;

                    // memorize the instance of the state orientation cap mission, internal
                    orientation_cap_mission_State _orientation_cap_mission_state;

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the exit point 'sortie', defined because probably shared
                    void _exit5(MAE_MURPHY & stm);

                };
                
                // implement the state vidage distributeur
                class vidage_distributeur_State : public AnyState {
                  public:
                    // implement the state BF Cap objectif
                    class BF_Cap_objectif_State : public AnyState {
                      public:
                        virtual ~BF_Cap_objectif_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

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
                    
                    // implement the state orientation vers sortie de zone
                    class orientation_vers_sortie_de_zone_State : public AnyState {
                      public:
                        virtual ~orientation_vers_sortie_de_zone_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state recule
                    class recule_State : public AnyState {
                      public:
                        virtual ~recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state pompage
                    class pompage_State : public AnyState {
                      public:
                        virtual ~pompage_State();

                        // to manage the event distrib_deboite
                        virtual void distrib_deboite(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // perform the 'exit behavior'
                        void _doexit(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state SET Y CAP
                    class SET_Y_CAP_State : public AnyState {
                      public:
                        virtual ~SET_Y_CAP_State();

                        virtual bool _completion(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF avance jusquau blocage
                    class BF_avance_jusquau_blocage_State : public AnyState {
                      public:
                        virtual ~BF_avance_jusquau_blocage_State();

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
                    
                    // implement the state BF droite sur distrib
                    class BF_droite_sur_distrib_State : public AnyState {
                      public:
                        virtual ~BF_droite_sur_distrib_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    virtual ~vidage_distributeur_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // memorize the instance of the state BF Cap objectif, internal
                    BF_Cap_objectif_State _bf_cap_objectif_state;

                    // memorize the instance of the state BF droite sur distrib, internal
                    BF_droite_sur_distrib_State _bf_droite_sur_distrib_state;

                    // memorize the instance of the state BF avance jusquau blocage, internal
                    BF_avance_jusquau_blocage_State _bf_avance_jusquau_blocage_state;

                    // memorize the instance of the state SET Y CAP, internal
                    SET_Y_CAP_State _set_y_cap_state;

                    // memorize the instance of the state pompage, internal
                    pompage_State _pompage_state;

                    // memorize the instance of the state recule, internal
                    recule_State _recule_state;

                    // memorize the instance of the state orientation vers sortie de zone, internal
                    orientation_vers_sortie_de_zone_State _orientation_vers_sortie_de_zone_state;

                    // memorize the instance of the state avance, internal
                    avance_State _avance_state;

                    // to manage the exit point 'sortie pompage', defined because probably shared
                    void _exit4(MAE_MURPHY & stm);

                };
                
                // implement the state capture stand bordure
                class capture_stand_bordure_State : public AnyState {
                  public:
                    // implement the state BF cap vers objectif
                    class BF_cap_vers_objectif_State : public AnyState {
                      public:
                        virtual ~BF_cap_vers_objectif_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state recule
                    class recule_State : public AnyState {
                      public:
                        virtual ~recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state chope
                    class chope_State : public AnyState {
                      public:
                        virtual ~chope_State();

                        // to manage the event pince_stand_by
                        virtual void pince_stand_by(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF avance
                    class BF_avance_State : public AnyState {
                      public:
                        virtual ~BF_avance_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state ouverture pince cote bordure
                    class ouverture_pince_cote_bordure_State : public AnyState {
                      public:
                        virtual ~ouverture_pince_cote_bordure_State();

                        // to manage the event pince_ouverte
                        virtual void pince_ouverte(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF droite vers objectif
                    class BF_droite_vers_objectif_State : public AnyState {
                      public:
                        virtual ~BF_droite_vers_objectif_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    virtual ~capture_stand_bordure_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // memorize the instance of the state BF cap vers objectif, internal
                    BF_cap_vers_objectif_State _bf_cap_vers_objectif_state;

                    // memorize the instance of the state BF droite vers objectif, internal
                    BF_droite_vers_objectif_State _bf_droite_vers_objectif_state;

                    // memorize the instance of the state ouverture pince cote bordure, internal
                    ouverture_pince_cote_bordure_State _ouverture_pince_cote_bordure_state;

                    // memorize the instance of the state BF avance, internal
                    BF_avance_State _bf_avance_state;

                    // memorize the instance of the state chope, internal
                    chope_State _chope_state;

                    // memorize the instance of the state recule, internal
                    recule_State _recule_state;

                    // to manage the exit point 'sortie stand bordure', defined because probably shared
                    void _exit3(MAE_MURPHY & stm);

                };
                
                // implement the state capture stands cote escalier
                class capture_stands_cote_escalier_State : public AnyState {
                  public:
                    // implement the state BF cap initial 35deg
                    class BF_cap_initial_35deg_State : public AnyState {
                      public:
                        virtual ~BF_cap_initial_35deg_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state recule
                    class recule_State : public AnyState {
                      public:
                        virtual ~recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state chope 2
                    class chope_2_State : public AnyState {
                      public:
                        virtual ~chope_2_State();

                        // to manage the event pince_stand_by
                        virtual void pince_stand_by(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF avance seconde
                    class BF_avance_seconde_State : public AnyState {
                      public:
                        virtual ~BF_avance_seconde_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state ouverture pince cote escalier seconde
                    class ouverture_pince_cote_escalier_seconde_State : public AnyState {
                      public:
                        virtual ~ouverture_pince_cote_escalier_seconde_State();

                        // to manage the event pince_ouverte
                        virtual void pince_ouverte(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state chope 1
                    class chope_1_State : public AnyState {
                      public:
                        virtual ~chope_1_State();

                        // to manage the event pince_stand_by
                        virtual void pince_stand_by(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF avance
                    class BF_avance_State : public AnyState {
                      public:
                        virtual ~BF_avance_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state ouverture pince cote escalier
                    class ouverture_pince_cote_escalier_State : public AnyState {
                      public:
                        virtual ~ouverture_pince_cote_escalier_State();

                        // to manage the event pince_ouverte
                        virtual void pince_ouverte(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state BF droite vers gobelet
                    class BF_droite_vers_gobelet_State : public AnyState {
                      public:
                        virtual ~BF_droite_vers_gobelet_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    virtual ~capture_stands_cote_escalier_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // memorize the instance of the state BF cap initial 35deg, internal
                    BF_cap_initial_35deg_State _bf_cap_initial_35deg_state;

                    // memorize the instance of the state BF droite vers gobelet, internal
                    BF_droite_vers_gobelet_State _bf_droite_vers_gobelet_state;

                    // memorize the instance of the state ouverture pince cote escalier, internal
                    ouverture_pince_cote_escalier_State _ouverture_pince_cote_escalier_state;

                    // memorize the instance of the state BF avance, internal
                    BF_avance_State _bf_avance_state;

                    // memorize the instance of the state chope 1, internal
                    chope_1_State _chope_1_state;

                    // memorize the instance of the state ouverture pince cote escalier seconde, internal
                    ouverture_pince_cote_escalier_seconde_State _ouverture_pince_cote_escalier_seconde_state;

                    // memorize the instance of the state BF avance seconde, internal
                    BF_avance_seconde_State _bf_avance_seconde_state;

                    // memorize the instance of the state chope 2, internal
                    chope_2_State _chope_2_state;

                    // memorize the instance of the state recule, internal
                    recule_State _recule_state;

                    // to manage the exit point 'sortie chope stands escalier', defined because probably shared
                    void _exit2(MAE_MURPHY & stm);

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

                        // to manage the event create
                        virtual void create(MAE_MURPHY & stm);

                        // perform the 'entry behavior'
                        void _doentry(MAE_MURPHY & stm);

                        // returns the state containing the current
                        virtual AnyState * _upper(MAE_MURPHY & stm);

                    };
                    
                    // implement the state recule
                    class recule_State : public AnyState {
                      public:
                        virtual ~recule_State();

                        // to manage the event assFini
                        virtual void assFini(MAE_MURPHY & stm);

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

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // memorize the instance of the state recule, internal
                    recule_State _recule_state;

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

                // memorize the instance of the state sortie zone, internal
                sortie_zone_State _sortie_zone_state;

                // memorize the instance of the state rejoindre le point de depart mission, internal
                rejoindre_le_point_de_depart_mission_State _rejoindre_le_point_de_depart_mission_state;

                // to manage the exit point 'sortie pillage distrib', defined because probably shared
                void _exit6(MAE_MURPHY & stm);

            };
            
            // implement the state mission depot tour estrade
            class mission_depot_tour_estrade_State : public AnyState {
              public:
                // implement the state waypoint init
                class waypoint_init_State : public AnyState {
                  public:
                    virtual ~waypoint_init_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                };
                
                // implement the state preparation
                class preparation_State : public AnyState {
                  public:
                    virtual ~preparation_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state sortie douce
                class sortie_douce_State : public AnyState {
                  public:
                    virtual ~sortie_douce_State();

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state depot double
                class depot_double_State : public AnyState {
                  public:
                    virtual ~depot_double_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state depot solo
                class depot_solo_State : public AnyState {
                  public:
                    virtual ~depot_solo_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                virtual ~mission_depot_tour_estrade_State();

                // memorize the instance of the state waypoint init, internal
                waypoint_init_State _waypoint_init_state;

                // memorize the instance of the state depot solo, internal
                depot_solo_State _depot_solo_state;

                // memorize the instance of the state depot double, internal
                depot_double_State _depot_double_state;

                // memorize the instance of the state sortie douce, internal
                sortie_douce_State _sortie_douce_state;

                // memorize the instance of the state preparation, internal
                preparation_State _preparation_state;

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // to manage the exit point 'sortie', defined because probably shared
                void _exit10(MAE_MURPHY & stm);

            };
            
            // implement the state decision
            class decision_State : public AnyState {
              public:
                virtual ~decision_State();

                // to manage the event mission_distrib
                virtual void mission_distrib(MAE_MURPHY & stm);

                // to manage the event mission_depot_tour
                virtual void mission_depot_tour(MAE_MURPHY & stm);

                // to manage the event mission_zone_ennemie
                virtual void mission_zone_ennemie(MAE_MURPHY & stm);

                // to manage the event mission_chiage
                virtual void mission_chiage(MAE_MURPHY & stm);

                // to manage the event mission_zone_centrale
                virtual void mission_zone_centrale(MAE_MURPHY & stm);

                // to manage the event mission_depot_estrade
                virtual void mission_depot_estrade(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // to manage the event mission_claps
                virtual void mission_claps(MAE_MURPHY & stm);

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

                    virtual bool _completion(MAE_MURPHY & stm);

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

                    virtual bool _completion(MAE_MURPHY & stm);

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

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

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
            
            // implement the state mission depot de tour zone depart
            class mission_depot_de_tour_zone_depart_State : public AnyState {
              public:
                // implement the state way point initial
                class way_point_initial_State : public AnyState {
                  public:
                    virtual ~way_point_initial_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state sortie
                class sortie_State : public AnyState {
                  public:
                    virtual ~sortie_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state recule
                class recule_State : public AnyState {
                  public:
                    virtual ~recule_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state avance
                class avance_State : public AnyState {
                  public:
                    virtual ~avance_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state depot une tour
                class depot_une_tour_State : public AnyState {
                  public:
                    virtual ~depot_une_tour_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state depot des deux tour
                class depot_des_deux_tour_State : public AnyState {
                  public:
                    virtual ~depot_des_deux_tour_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                virtual ~mission_depot_de_tour_zone_depart_State();

                // memorize the instance of the state way point initial, internal
                way_point_initial_State _way_point_initial_state;

                // memorize the instance of the state depot des deux tour, internal
                depot_des_deux_tour_State _depot_des_deux_tour_state;

                // memorize the instance of the state depot une tour, internal
                depot_une_tour_State _depot_une_tour_state;

                // memorize the instance of the state avance, internal
                avance_State _avance_state;

                // memorize the instance of the state recule, internal
                recule_State _recule_state;

                // memorize the instance of the state sortie, internal
                sortie_State _sortie_state;

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // to manage the exit point 'sortie ', defined because probably shared
                void _exit9(MAE_MURPHY & stm);

            };
            
            // implement the state mission rush zone centrale
            class mission_rush_zone_centrale_State : public AnyState {
              public:
                virtual ~mission_rush_zone_centrale_State();

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

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

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // to manage the exit point 'fin claps', defined because probably shared
                void _exit8(MAE_MURPHY & stm);

            };
            
            // implement the state mission attrap balle et chiage
            class mission_attrap_balle_et_chiage_State : public AnyState {
              public:
                // implement the state point de depart
                class point_de_depart_State : public AnyState {
                  public:
                    virtual ~point_de_depart_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the event assFini
                    virtual void assFini(MAE_MURPHY & stm);

                };
                
                // implement the state sortie
                class sortie_State : public AnyState {
                  public:
                    virtual ~sortie_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state drop gobelet
                class drop_gobelet_State : public AnyState {
                  public:
                    virtual ~drop_gobelet_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state drop pop corn
                class drop_pop_corn_State : public AnyState {
                  public:
                    virtual ~drop_pop_corn_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state capture de balle
                class capture_de_balle_State : public AnyState {
                  public:
                    virtual ~capture_de_balle_State();

                    virtual bool _completion(MAE_MURPHY & stm);

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                };
                
                // implement the state Recalage
                class Recalage_State : public AnyState {
                  public:
                    virtual ~Recalage_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the event blocage
                    virtual void blocage(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                };
                
                // implement the state orientation avant reculage
                class orientation_avant_reculage_State : public AnyState {
                  public:
                    virtual ~orientation_avant_reculage_State();

                    // to manage the event create
                    virtual void create(MAE_MURPHY & stm);

                    // returns the state containing the current
                    virtual AnyState * _upper(MAE_MURPHY & stm);

                    // to manage the event assFini
                    virtual void assFini(MAE_MURPHY & stm);

                    // perform the 'entry behavior'
                    void _doentry(MAE_MURPHY & stm);

                };
                
                virtual ~mission_attrap_balle_et_chiage_State();

                // to manage the event create
                virtual void create(MAE_MURPHY & stm);

                // perform the 'entry behavior'
                void _doentry(MAE_MURPHY & stm);

                // returns the state containing the current
                virtual AnyState * _upper(MAE_MURPHY & stm);

                // memorize the instance of the state point de depart, internal
                point_de_depart_State _point_de_depart_state;

                // memorize the instance of the state orientation avant reculage, internal
                orientation_avant_reculage_State _orientation_avant_reculage_state;

                // memorize the instance of the state Recalage, internal
                Recalage_State _recalage_state;

                // memorize the instance of the state capture de balle, internal
                capture_de_balle_State _capture_de_balle_state;

                // memorize the instance of the state drop pop corn, internal
                drop_pop_corn_State _drop_pop_corn_state;

                // memorize the instance of the state drop gobelet, internal
                drop_gobelet_State _drop_gobelet_state;

                // memorize the instance of the state sortie, internal
                sortie_State _sortie_state;

                // to manage the exit point 'sortie mission drop', defined because probably shared
                void _exit7(MAE_MURPHY & stm);

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

            // memorize the instance of the state mission depot de tour zone depart, internal
            mission_depot_de_tour_zone_depart_State _mission_depot_de_tour_zone_depart_state;

            // memorize the instance of the state decision, internal
            decision_State _decision_state;

            // memorize the instance of the state mission depot tour estrade, internal
            mission_depot_tour_estrade_State _mission_depot_tour_estrade_state;

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
  friend class MAE_MURPHY_State::Recalage_Initial_State::avance_State;
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
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::sortie_zone_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::point_de_depart_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::orientation_avant_reculage_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::Recalage_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::capture_de_balle_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_pop_corn_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::drop_gobelet_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_attrap_balle_et_chiage_State::sortie_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::way_point_initial_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_des_deux_tour_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::depot_une_tour_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::avance_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::recule_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State::sortie_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_de_tour_zone_depart_State;
    // the operation you call to signal the event mission_distrib
    bool mission_distrib();

    // the operation you call to signal the event mission_depot_tour
    bool mission_depot_tour();

    // the operation you call to signal the event mission_zone_ennemie
    bool mission_zone_ennemie();

    // the operation you call to signal the event mission_chiage
    bool mission_chiage();

    // the operation you call to signal the event mission_zone_centrale
    bool mission_zone_centrale();

    // the operation you call to signal the event mission_depot_estrade
    bool mission_depot_estrade();

  friend class MAE_MURPHY_State::Jeu_State::decision_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::waypoint_init_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_solo_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::depot_double_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::sortie_douce_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State::preparation_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_depot_tour_estrade_State;
  friend class MAE_MURPHY_State::Evitement_State::faire_des_maneuvre_State;
    // the operation you call to signal the event mission_claps
    bool mission_claps();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_vers_objectif_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::BF_droite_vers_lobjectif_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State::orientation_cap_mission_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::rejoindre_le_point_de_depart_mission_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::coup_de_patte_cote_escalier_pour_confirmer_le_sens_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_de_gobelet_escalier_State::recule_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_cap_initial_35deg_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_droite_vers_gobelet_State;
    // the operation you call to signal the event pince_ouverte
    bool pince_ouverte();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_State;
    // the operation you call to signal the event pince_stand_by
    bool pince_stand_by();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_1_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::ouverture_pince_cote_escalier_seconde_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::BF_avance_seconde_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::chope_2_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stands_cote_escalier_State::recule_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_cap_vers_objectif_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_droite_vers_objectif_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::ouverture_pince_cote_bordure_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::BF_avance_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::chope_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::capture_stand_bordure_State::recule_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_Cap_objectif_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_droite_sur_distrib_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::BF_avance_jusquau_blocage_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::SET_Y_CAP_State;
    // the operation you call to signal the event distrib_deboite
    bool distrib_deboite();

  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::pompage_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::recule_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::orientation_vers_sortie_de_zone_State;
  friend class MAE_MURPHY_State::Jeu_State::mission_pillage_distrib_State::vidage_distributeur_State::avance_State;
  friend class MAE_MURPHY_State::Recalage_Initial_State::set_X_Y_CAP_State;
};
// change the current state, internal
inline void MAE_MURPHY::_set_currentState(MAE_MURPHY::AnyState & st) {
    _current_state = &st;
}

#endif
