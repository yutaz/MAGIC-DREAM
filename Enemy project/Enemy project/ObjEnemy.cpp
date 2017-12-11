//�g�p�w�b�_�[
#include"GameHead.h"
#include"GameL\DrawTexture.h"

#include"ObjEnemy.h"
#include"GameL\HitBoxManager.h"



//�g�p�l�[���X�y�[�X
using namespace GameL;

//Init
void CObjEnemy::Init()
{
	m_x = 400;
	m_y = 600;
}

//Aciton
void CObjEnemy::Action()
{
	//HitBox(�����蔻��)�̓��e�̍X�V
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
}

//Draw
void CObjEnemy::Draw()
{
	//�`��J���[    R    G    B    A
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f+m_y;//Init�̕ϐ��ł����̕\���ʒu��ύX���Ă���B
	dst.m_left = 0.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 0.0f+m_y;

	//0�Ԗڂɓo�^�����O���t�B�b�N��src,dst,c,�̏������ɕ`��
	Draw::Draw(0, &src, &dst, c, 0.0f);
}