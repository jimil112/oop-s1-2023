#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"

class Avatar : public GridUnit {
public:
    Avatar(int x, int y) : GridUnit(x, y, 'A') {}

    void shift(int dx, int dy) {
        std::tuple<int, int> loc = getCoordinates();
        int x = std::get<0>(loc) + dx;
        int y = std::get<1>(loc) + dy;
        setCoordinates(x, y);
    }
};

#endif
