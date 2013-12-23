#include <gl\glew.h>
#include "myWindow.h"


myWindow::myWindow(void)
{
}


myWindow::~myWindow(void)
{
}


void myWindow::initializeGL()
{
	GLenum errorcode = glewInit();
	GLuint vertexBufferID;
	glGenBuffers(1,&vertexBufferID);
	glBindBuffer(GL_ARRAY_BUFFER,vertexBufferID);

	float verts[]={
		+0.0f,+0.1f,
		-0.1f,-0.1f,
		+0.1f,-0.1f,
	};
	glBufferData(GL_ARRAY_BUFFER,sizeof(verts),verts,GL_STATIC_DRAW);
	connect(&m_timer,SIGNAL(timeout()),this, SLOT(myupdate()));
}


void myWindow::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0,2,GL_FLOAT, GL_FALSE,0,0);
	glDrawArrays(GL_TRIANGLES, 0 ,3);
}

void myWindow::updateGL()
{

}

void myWindow::myupdate()
{

}
