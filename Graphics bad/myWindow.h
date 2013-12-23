#pragma once
#include <QtWidgets\qapplication.h>
#include <QtWidgets\QMainWindow.h>
#include <QtWidgets\QWidget.h>
#include <QtOpenGL\QGLWidget>
#include <QtCore\QTimer>

class myWindow : public QGLWidget
{
	Q_OBJECT
public:
	GLuint				vertexBufferID;
	QTimer				m_timer ;

	myWindow(void);
	~myWindow(void);
	void initializeGL();
	void paintGL();
	void updateGL();
private slots:
	void myupdate();
};

