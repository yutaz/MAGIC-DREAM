#pragma once
//�g�p�w�b�_�[
#include"GameL\SceneObjManager.h"

//�g�p�l�[���X�y�[�X
using namespace GameL;


//�e(�g�U�p)
class CObjAngleBullet :public CObj
{
public:
	CObjAngleBullet(float x, float y, float r, float speed);
	~CObjAngleBullet() {};

	void Init();//�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[

private:
	float m_x;//�e�ۂ�X�����̈ʒu
	float m_y;//�e�ۂ�Y�����̈ʒu
	float m_vx;//�e�ۂ�X�����̑��x
	float m_vy;//Y�����̑��x
	float m_r;//�ړ�����p�x
	float m_speed; //���x


};