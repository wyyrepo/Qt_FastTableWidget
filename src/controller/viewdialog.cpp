#include "viewdialog.h"

ViewDialog::ViewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;
}

ViewDialog::ViewDialog(int aValue, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    mFastTableWidget->setText(0, 0, valueToString(aValue));
}

ViewDialog::ViewDialog(QList<qint16> *aValues, bool isVertical, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    if (isVertical)
    {
        mFastTableWidget->setRowCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(i, 0, valueToString(aValues->at(i)));
        }
    }
    else
    {
        mFastTableWidget->setColumnCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(0, i, valueToString(aValues->at(i)));
        }
    }
}

ViewDialog::ViewDialog(QList<int> *aValues, bool isVertical, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    if (isVertical)
    {
        mFastTableWidget->setRowCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(i, 0, valueToString(aValues->at(i)));
        }
    }
    else
    {
        mFastTableWidget->setColumnCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(0, i, valueToString(aValues->at(i)));
        }
    }
}

ViewDialog::ViewDialog(QList<bool> *aValues, bool isVertical, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    if (isVertical)
    {
        mFastTableWidget->setRowCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(i, 0, valueToString(aValues->at(i)));
        }
    }
    else
    {
        mFastTableWidget->setColumnCount(aValues->length());

        for (int i=0; i<aValues->length(); i++)
        {
            mFastTableWidget->setText(0, i, valueToString(aValues->at(i)));
        }
    }
}

ViewDialog::ViewDialog(QList<QList<int> > *aValues, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    mFastTableWidget->setRowCount(aValues->length());

    if (aValues->length()>0)
    {
        mFastTableWidget->setColumnCount(aValues->at(0).length());

        for (int i=0; i<aValues->length(); i++)
        {
            for (int j=0; j<aValues->at(i).length(); j++)
            {
                mFastTableWidget->setText(i, j, valueToString(aValues->at(i).at(j)));
            }
        }
    }
    else
    {
         mFastTableWidget->setColumnCount(0);
    }
}

ViewDialog::ViewDialog(QList<QList<bool> > *aValues, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    mFastTableWidget->setRowCount(aValues->length());

    if (aValues->length()>0)
    {
        mFastTableWidget->setColumnCount(aValues->at(0).length());

        for (int i=0; i<aValues->length(); i++)
        {
            for (int j=0; j<aValues->at(i).length(); j++)
            {
                mFastTableWidget->setText(i, j, valueToString(aValues->at(i).at(j)));
            }
        }
    }
    else
    {
         mFastTableWidget->setColumnCount(0);
    }
}

ViewDialog::ViewDialog(QList<QStringList> *aValues, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewDialog)
{
    VIEWDIALOG_BASE_CONSTRUCTOR;

    mFastTableWidget->setRowCount(aValues->length());

    if (aValues->length()>0)
    {
        mFastTableWidget->setColumnCount(aValues->at(0).length());

        for (int i=0; i<aValues->length(); i++)
        {
            for (int j=0; j<aValues->at(i).length(); j++)
            {
                mFastTableWidget->setText(i, j, valueToString(aValues->at(i).at(j)));
            }
        }
    }
    else
    {
         mFastTableWidget->setColumnCount(0);
    }
}

ViewDialog::~ViewDialog()
{
    delete ui;
}

QString ViewDialog::valueToString(int aValue)
{
    return QString::number(aValue);
}

QString ViewDialog::valueToString(bool aValue)
{
    if (aValue)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

QString ViewDialog::valueToString(QString aValue)
{
    return aValue;
}

int ViewDialog::exec()
{
    int aWidth=mFastTableWidget->totalWidth()+30;
    int aHeight=mFastTableWidget->totalHeight()+30;

    if (aWidth>800)
    {
        aWidth=800;
    }

    if (aHeight>600)
    {
        aHeight=600;
    }

    resize(aWidth, aHeight);

    for (int i=0; i<mFastTableWidget->columnCount(); i++)
    {
        mFastTableWidget->horizontalHeader_SetText(i, QString::number(i+1));
    }

    return QDialog::exec();
}
