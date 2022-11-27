#ifndef PREPG_H
#define PREPG_H

using namespace std;

char Area[70][150]; // AREA SUSPECTED TO CONTAIN MINES.

/*------------------------------------------------------------*/
const bool detector=true; // detector is always on!!
/*------------------------------------------------------------*/

class GAME
{
        string _name;

        public:
        GAME();
        GAME(string);

        void moveLeft();
        void moveRight();
        void moveFront();
        void moveBack();
        void Detector();
        void displayArea();

};

class Mine
{
        int _timer; // countdown of the mine before explosion
        int _depth; // how deep is the mine buried

        public:

        Mine();
        Mine(int);

        void Explode();
        void DisplayTimer();

};

#endif
