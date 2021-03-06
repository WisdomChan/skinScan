#ifndef STATISTICSWIDGET_H
#define STATISTICSWIDGET_H

#include <QWidget>

class QPushButton;
class QStackedWidget;
class PlotWidget;
class TableWidget;

class StatisticsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StatisticsWidget(QWidget *parent = 0);
    void setPlotData(const QJsonDocument &document);
    void clear();

signals:

public slots:

private:
    QPushButton *m_chartButton;
    QPushButton *m_tableButton;
    QPushButton *m_moistureButton;
    QPushButton *m_greaseButton;
    QPushButton *m_temperatureButton;
    QPushButton *m_PHButton;
    QStackedWidget *m_stackedWidget;

    PlotWidget *m_moistureWidget;
    PlotWidget *m_greaseWidget;
    PlotWidget *m_tempWidget;
    PlotWidget *m_PHWidget;

    TableWidget *m_moistureTable;
    TableWidget *m_greaseTable;
    TableWidget *m_tempTable;
    TableWidget *m_PHTable;

    int m_row = 0;
    int m_column = 0;
};

#endif // STATISTICSWIDGET_H
