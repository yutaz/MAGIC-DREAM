//�g�p�w�b�_�[
#include"GameHead.h"
#include"CObjNormalBullet.h"
#include"GameL\DrawTexture.h"
//�g�p�l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�F�ʏ�ecpp

//�R���X�g���N�^
CObjNormalBullet::CObjNormalBullet(float x, float y)
{
	m_x = x;//��l���̈ʒu���������ł�����
	m_y = y;//�ȉ�����
}

//Init:�C�j�V�����C�Y
void CObjNormalBullet::Init()
{
	m_vy = 0.0f;
}

//Action:�A�N�V����
void CObjNormalBullet::Action()
{
	m_vy += 1.0f;

	m_y += m_vy;
}

//Draw:�h���[
void CObjNormalBullet::Draw()
{
	//�`��J���[   R     G    B    A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�G�̐؂���ʒu
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;


	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 0.0f;

	//0�Ԗڂɓo�^���Ă���G��src,dst,c�̏������ɕ`��
	Draw::Draw(0, &src, &dst, c, 0.0f);

}