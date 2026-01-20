#ifndef HOUSE2_H
#define HOUSE2_H

#include <string>
using namespace std;

class House2 {
    public:
        House2();
        House2(int numStories, int numWindows, string color);
        virtual ~House2();
        void setNumStories(int numStories); 
        void setNumWindows(int numWindows);
        void setColor(string color);
        int getNumStories() const; 
        int getNumWindows() const; 
        string getColor() const;
        void print() const;

    private:
        int numStories;
        int numWindows;
        string color;
};

#endif