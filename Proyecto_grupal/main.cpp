#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <stdlib.h>
#include <stdio.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

int xc, yc, a;
//, b; // variables globales a utilizar

void Iniciar(){
	glClearColor(0.7,0.7,0.7,1.0);
	glMatrixMode(GL_PROJECTION);
	glPointSize(5);
	glLoadIdentity();
	//
	gluOrtho2D(-100,100,-100,100);
}
	void Ejes(){
		glBegin(GL_LINES);
		glColor3f(1.f,0,0);
		// Eje x
		glVertex2i(0,800);
		glVertex2i(0,0);
		glColor3f(1.f,0,0);
		glVertex2i(0,-800);
		glVertex2i(0,0);
		//color
		glColor3f(1.f,0,0);
		//Eje y
		glVertex2i(600,0);
		glVertex2i(0,0);
		glColor3f(1.f,0,0);
		glVertex2i(-600,0);
		glVertex2i(0,0);
		glEnd();
		glFlush();
	}
		
		int redondeo(float z){
			int y;
			y=z>0.0 ? int(z+0.5): int(z-0.5);
			return y;
		}
			void dibujar(){
				glClear(GL_COLOR_BUFFER_BIT);
				Ejes();
				int x=0;
				int y=a;
	
				glBegin(GL_POINTS);
				glColor3f(0.f,1.f,0.f);
				glVertex2i(-x+xc,-y+yc);
				glVertex2i(x+xc,y+yc);
				glColor3f(0.f,0.f,1.f);

				int p0=1-a;
				while (x<=y){
					
					glVertex2i(x+xc, y+yc);
					glVertex2i(x+xc, -y+yc);
					glVertex2i(-x+xc, y+yc);
					glVertex2i(-x+xc, -y+yc);
					glVertex2i(y+xc, x+yc);
					glVertex2i(y+xc, -x+yc);
					glVertex2i(-y+xc, x+yc);
					glVertex2i(-y+xc, -x+yc);
					x++;
					if(p0<=0)
						p0+=2*x+1;
					
					else{
						y--;
						p0+=2*x-2*y+1;
					}
				}
				
				glColor3f(0.f,1.f,0.f);
			
				glEnd();
				glFlush();
			}
				int main(int argc, char** argv){
					// Leemos los valores de xi, yi, xc, yc
					printf("Ingrese el valor de xc : ");
					scanf("%d",&xc);
					printf("Ingrese el valor de yc : ");
					scanf("%d",&yc);
					printf("Ingrese el valor de R : ");
					scanf("%d",&a);
					//printf("Ingrese el valor de y : ");
					//scanf("%d",&b);
					
					glutInit(&argc, argv);//inicializamos glut
					glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
					glutInitWindowSize(700,700);
					glutInitWindowPosition(70,70);
					glutCreateWindow("Metodo punto medio para elipse");
					Iniciar();
					glutDisplayFunc(dibujar);
					glutMainLoop();
					return 0;
				}
