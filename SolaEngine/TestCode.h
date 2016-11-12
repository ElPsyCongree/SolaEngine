#include "managers\SLTextureManager.h"

void testCodeInit(){
	glEnable(GL_TEXTURE_2D);//�ǵÿ���֧��2d����

	GLint max;
	glGetIntegerv(GL_MAX_TEXTURE_SIZE, &max);//��ȡ֧�����������

	printf("���֧��������%d", max);
}

void testCode(){
	SLTextureManager* tMgr = SLTextureManager::getInstance();
	SLTexture* t = tMgr->addTexture("c:\\1.png");
	t->use();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glBegin(GL_TRIANGLE_STRIP);
	glColor4f(1, 0, 0, 0.5);
	glTexCoord2f(0, 0);
	glVertex2f(0, 0);

	glTexCoord2f(1, 0);
	glVertex2f(0.5, 0);

	glTexCoord2f(0, 1);
	glVertex2f(0, 0.5);

	glTexCoord2f(1, 1);
	glVertex2f(0.5, 0.5);

	glEnd();
	//glutPostRedisplay();
}