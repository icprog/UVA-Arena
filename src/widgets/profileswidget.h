#pragma once

#include "uvalib_global.h"
#include "uvaarenawidget.h"
#include <QWidget>

namespace uva
{
    namespace Ui {
        class ProfilesWidget;
    }

    class UVA_EXPORT ProfilesWidget : public UVAArenaWidget
    {
        Q_OBJECT

    public:
        explicit ProfilesWidget(QWidget *parent = 0);
        ~ProfilesWidget();

    private:
        Ui::ProfilesWidget *ui;
    };

}