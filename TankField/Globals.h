#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 600

#define TANK1_WEAPON_POS_X 2
#define TANK1_WEAPON_POS_Y 42
#define TANK1_POS_Y 455
#define TANK1_POS_X 0

#define TANK2_WEAPON_POS_X -15
#define TANK2_WEAPON_POS_Y 42
#define TANK2_POS_Y 455
#define TANK2_POS_X 1100

#define TANK1_WEAPON_DEGREES 75
#define TANK2_WEAPON_DEGREES -75

#define WIND_DELAY 5
#define MISSILE_DELAY 10

#define MISSILE_FIRE_POWER 1100
#define GRAVITY 1100
#define WIND_POWER 150
#define HOST_IP "78.90.125.149"
//78.90.125.149
#define PACKET_SIZE 8

extern float wind;
//player turns
extern bool toChangeTurn;
extern bool firedMissile;
extern bool player1Turn;
extern bool player2Turn;
//gamemode 
extern bool isClient;
extern bool isServer;
extern bool singlePlayer;