//Just the header for the robot class
//shows all variables that are public
//Contributors: Nicole Maiello

#include <string>
#include <cstdlib>

#ifndef ROBOT
#define ROBOT

using namespace std;

class Robot{

  public:
    int max_ram; //ram is going to hold all registers
    uint16_t RAM[]; //ram for 16 bit integers
    int acceleration, turn_rate, crash_range, speed; //robot moving
    int shields, overburn, keepshift, cooling, scanrange;
    int x, y; //Robot coordinates
    int max_sonar, max_missiles, max_mines, max_queue, missile_spd, hit_range; //details
    int mines, shield, heatsinks;
    int kills, wins, deaths, hits, health; //stats variables, can add/remove
    double shotstrength, damageadj, speedadj;
    bool shields_up;
    string Name;



    Robot(string); //used to create robot
    void init_Robot(); //initializes robot - ported directly from Confer's code
    void robot_config(int, int, int, int, int, int, int);//note int order for this

  private:
    bool isLocked;
};

#endif // Robot