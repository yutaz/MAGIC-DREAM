#pragma once
//�g�p�w�b�_�[
#include"GameL\SceneObjManager.h"
//�g�p�l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F:�ʏ�e
class CObjNormalBullet :public CObj
{
public:
	CObjNormalBullet(float x,float y);//�R���X�g���N�^
	~CObjNormalBullet() {};
	void Init(); //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw(); //�h���[

private:
	float m_x; //�e�ۂ�X�����̈ʒu�p�ϐ�
	float m_y; //�e�ۂ�Y�����̈ʒu�p�ϐ�
	float m_vy;//�e�ۂ�X�����̑��x�p�ϐ�
	
};
