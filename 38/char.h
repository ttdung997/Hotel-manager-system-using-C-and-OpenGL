
#include <GL/glut.h>
char* itoa(int value, char* str, int radix) {
    static char dig[] =
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz";
    int n = 0, neg = 0;
    unsigned int v;
    char* p, *q;
    char c;
    if (radix == 10 && value < 0) {
        value = -value;
        neg = 1;
    }
    v = value;
    do {
        str[n++] = dig[v%radix];
        v /= radix;
    } while (v);
    if (neg)
        str[n++] = '-';
    str[n] = '\0';
    for (p = str, q = p + (n-1); p < q; ++p, --q)
        c = *p, *p = *q, *q = c;
    return str;
}

char* ltoa(long value, char* str, int radix) {
    static char dig[] =
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz";
    int n = 0, neg = 0;
    unsigned int v;
    char* p, *q;
    char c;
    if (radix == 10 && value < 0) {
        value = -value;
        neg = 1;
    }
    v = value;
    do {
        str[n++] = dig[v%radix];
        v /= radix;
    } while (v);
    if (neg)
        str[n++] = '-';
    str[n] = '\0';
    for (p = str, q = p + (n-1); p < q; ++p, --q)
        c = *p, *p = *q, *q = c;
    return str;
}
void viet(char*string,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glTranslatef(x, y,z);
	  glScalef(0.2f,-0.2f,z);
  
	  for (c=string; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}

void vietbe(char*string,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glTranslatef(x, y,z);
	  glScalef(0.1f,-0.1f,z);
  
	  for (c=string; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}

void drawStrokeText(char*string,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glTranslatef(x, y,z);
	  glScalef(0.3f,-0.3f,z);
  
	  for (c=string; *c != '\0'; c++)
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);    
	  glPopMatrix();
}


void init()
{
	glClearColor(0.0,0.0,0.0,0.0); 
}


void orthogonalStart (int w1,int h1) {
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0, w1, 0, h1);
    glScalef(1, 1, 1);
    //glTranslatef(0, -h1, 0);
    glMatrixMode(GL_MODELVIEW);
}

void orthogonalEnd (void) {
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
}

GLuint LoadTexture( const char * filename, int width, int height )
{
   
    GLuint texture;
    unsigned char * data;
    FILE * file;

    //The following code will read in our RAW file
    file = fopen( filename, "rb" );
    if ( file == NULL ) return 0;
    data = (unsigned char *)malloc( width * height * 3 );
    fread( data, width * height * 3, 1, file );
    fclose( file );

    glGenTextures( 1, &texture ); 
    glBindTexture( GL_TEXTURE_2D, texture ); 
    glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE ); 


    //even better quality, but this will do for now.
   glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR );


    //to the edge of our shape. 
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
//
    //Generate the texture
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0,GL_BGR, GL_UNSIGNED_BYTE, data);
    free( data ); //free the texture
    return texture; //return whether it was successful
}

void FreeTexture( GLuint texture )
{
  glDeleteTextures( 1, &texture );
}

void background (GLuint texture,int w,int h,int x,int y,int w1,int h1){
    glBindTexture( GL_TEXTURE_2D, texture ); 
    orthogonalStart(w1,h1);
    glTranslatef(x,y,0);
    glBegin(GL_QUADS);
        glTexCoord2d(0.0,0.0); glVertex2f(0, 0);
        glTexCoord2d(1.0,0.0); glVertex2f(w, 0);
        glTexCoord2d(1.0,1.0); glVertex2f(w, h);
        glTexCoord2d(0.0,1.0); glVertex2f(0, h);
   glEnd();


    orthogonalEnd();
}

