#pragma once
//�g�p�w�b�_�[
#include"GameL\SceneObjManager.h"

//�g�p�l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�G
class CObjEnemy :public CObj
{
public:
	CObjEnemy() {};
	~CObjEnemy() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;//�G��x�����̈ʒu
	float m_y;//�G��y�����̈ʒu
	float m_vx;//�G�̈ړ��x�N�g��X
	float m_vy;//�G�̈ړ��x�N�g��Y
	
};
