#ifndef CHESSITEM_H
#define CHESSITEM_H

#include <QObject>
#include <chessitemtype.h>
#include <chesscolortype.h>

class ChessItem : public QObject
{
    Q_OBJECT
public:
    explicit ChessItem(QObject *parent = nullptr,
                       const ChessItemType& itemType = ChessItemType::Knight,
                       const ChessColorType& itemColor = ChessColorType::White);

    ChessItemType getItemType() const;

    ChessColorType getItemColor() const;

    char getPosX() const;
    void setPosX(char value);

    int getPosY() const;
    void setPosY(int value);

    virtual void move(char posX, int posY);

signals:

public slots:

private:
    ChessItemType itemType;
    ChessColorType itemColor;
    char posX;
    int posY;
};

#endif // CHESSITEM_H
