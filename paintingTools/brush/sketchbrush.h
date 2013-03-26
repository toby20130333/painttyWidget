#ifndef SKETCHBRUSH_H
#define SKETCHBRUSH_H

#include <QVector>
#include "abstractbrush.h"

class SketchBrush : public AbstractBrush
{
public:
    SketchBrush();
    ~SketchBrush();
    void start(const QPointF &st);
    void setColor(const QColor &color);
    int width();
    void setWidth(int w);
    void setLastPoint(const QPointF &p);
    void lineTo(const QPointF &st);
    QVariantMap brushInfo();
    QVariantMap defaultInfo();
    
signals:
    
public slots:
    
protected:
    QVector<QPointF> points;
    QPen sketchPen;
    void sketch();
    void preparePen();
};

#endif // SKETCHBRUSH_H
