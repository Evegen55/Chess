#include "chessitem.h"

ChessItem::ChessItem(const ChessItemType& itemType,
                     const ChessColorType& itemColor) :
    itemType(itemType),
    itemColor(itemColor)
{

}

ChessItemType ChessItem::getItemType() const
{
    return itemType;
}

ChessColorType ChessItem::getItemColor() const
{
    return itemColor;
}

char ChessItem::getPosX() const
{
    return posX;
}

void ChessItem::setPosX(char value)
{
    posX = value;
}

int ChessItem::getPosY() const
{
    return posY;
}

void ChessItem::setPosY(int value)
{
    posY = value;
}

