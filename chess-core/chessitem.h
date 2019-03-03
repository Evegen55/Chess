#ifndef CHESSITEM_H
#define CHESSITEM_H

#include "chess-core_global.h"
#include "chessitemtype.h"
#include "chesscolortype.h"

class CHESSCORESHARED_EXPORT ChessItem
{
public:
    explicit ChessItem(const ChessItemType& itemType = ChessItemType::Knight,
                       const ChessColorType& itemColor = ChessColorType::White);

    ChessItemType getItemType() const;

    ChessColorType getItemColor() const;

    char getPosX() const;
    void setPosX(char value);

    int getPosY() const;
    void setPosY(int value);

    virtual void move(char posX, int posY);

private:
    ChessItemType itemType;
    ChessColorType itemColor;
    char posX;
    int posY;
};

#endif // CHESSITEM_H
