#include "Globals.h"

float wind = 0.0f;
bool toChangeTurn = false;
bool firedMissile = false;
bool player1Turn = true;
bool player2Turn = false;
bool inGame = false;
//#ifdef _DEBUG
bool isClient = false;
bool isServer = false;
bool isVersus = false;
bool isBotGame = false;
//#else
//bool isClient = true;
//bool isServer = false;
//bool isVersus = false;
//#endif