#ifndef FGRAPHIC_H
#define FGRAPHIC_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <windows.h>

void ClearScreen();

class FGraphic
{
public:
    FGraphic();
    virtual ~FGraphic();

    // Visual Elements
    std::string div;

    // define boxwidth as an int. boxwidth < 1 will automatically set a width (slower). -100 reports auto length
    void drawBox(int, std::vector<std::string>) const;
    std::string toString(int number);
    std::string centsToString(int cents);

protected:
private:
    // Symbols
    char pStraightHorizontal = 205;
    char pStraightVertical = 186;
    char pCornerTopLeft = 201;
    char pCornerTopRight = 187;
    char pCornerBottomLeft = 200;
    char pCornerBottomRight = 188;

};

#endif // FGRAPHIC_H
