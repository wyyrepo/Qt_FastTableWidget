#ifndef PUBLICTABLEWIDGET_H
#define PUBLICTABLEWIDGET_H

#include "src/fasttable/fasttablewidget.h"

class PublicFastTable : public FastTableWidget
{
public:
    QList< QList<QBrush *> > *getBackgroundBrushes();
    QList< QList<QColor *> > *getForegroundColors();
    QList< QList<QFont *> >  *getCellFonts();
    QList< QList<int> >      *getCellTextFlags();
    QList< QList<quint16> >  *getCellMergeX();
    QList< QList<quint16> >  *getCellMergeY();
    QList< QList<int> >      *getCellMergeParentRow();
    QList< QList<int> >      *getCellMergeParentColumn();

    QList< QList<QBrush *> > *horizontalHeader_GetBackgroundBrushes();
    QList< QList<QColor *> > *horizontalHeader_GetForegroundColors();
    QList< QList<QFont *> >  *horizontalHeader_GetCellFonts();
    QList< QList<int> >      *horizontalHeader_GetCellTextFlags();
    QList< QList<quint16> >  *horizontalHeader_GetCellMergeX();
    QList< QList<quint16> >  *horizontalHeader_GetCellMergeY();
    QList< QList<int> >      *horizontalHeader_GetCellMergeParentRow();
    QList< QList<int> >      *horizontalHeader_GetCellMergeParentColumn();

    QList< QList<QBrush *> > *verticalHeader_GetBackgroundBrushes();
    QList< QList<QColor *> > *verticalHeader_GetForegroundColors();
    QList< QList<QFont *> >  *verticalHeader_GetCellFonts();
    QList< QList<int> >      *verticalHeader_GetCellTextFlags();
    QList< QList<quint16> >  *verticalHeader_GetCellMergeX();
    QList< QList<quint16> >  *verticalHeader_GetCellMergeY();
    QList< QList<int> >      *verticalHeader_GetCellMergeParentRow();
    QList< QList<int> >      *verticalHeader_GetCellMergeParentColumn();
};

class PublicCustomFastTable : public CustomFastTableWidget
{
public:
    int getRowCount();
    int getColumnCount();
    qint16 horizontalHeader_GetRowCount();
    qint16 verticalHeader_GetColumnCount();

    QBrush getDefaultBackgroundBrush();
    QColor getDefaultForegroundColor();
    QColor getGridColor();

    QBrush horizontalHeader_GetDefaultBackgroundBrush();
    QColor horizontalHeader_GetDefaultForegroundColor();
    QColor horizontalHeader_GetGridColor();

    QBrush verticalHeader_GetDefaultBackgroundBrush();
    QColor verticalHeader_GetDefaultForegroundColor();
    QColor verticalHeader_GetGridColor();

    QBrush getSelectionBrush();
    QColor getSelectionTextColor();

    quint16 getDefaultWidth();
    quint16 getDefaultHeight();
    int getTotalWidth();
    int getTotalHeight();
    int verticalHeader_GetTotalWidth();
    int horizontalHeader_GetTotalHeight();

    int getVisibleLeft();
    int getVisibleRight();
    int getVisibleTop();
    int getVisibleBottom();

    int horizontalHeader_GetVisibleBottom();

    int verticalHeader_GetVisibleRight();

    QList< QStringList > *getData();
    QList< qint16 >      *getRowHeights();
    QList< qint16 >      *getColumnWidths();
    QList< int >         *getOffsetX();
    QList< int >         *getOffsetY();

    QList< QStringList > *horizontalHeader_GetData();
    QList< qint16 >      *horizontalHeader_GetRowHeights();
    QList< int >         *horizontalHeader_GetOffsetY();

    QList< QStringList > *verticalHeader_GetData();
    QList< qint16 >      *verticalHeader_GetColumnWidths();
    QList< int >         *verticalHeader_GetOffsetX();

    QList< QList<bool> > *getSelectedCells();
    QList< QPoint >      *getCurSelection();
    QList< bool >        *horizontalHeader_GetSelectedColumns();
    QList< bool >        *verticalHeader_GetSelectedRows();
};

#endif // PUBLICTABLEWIDGET_H
