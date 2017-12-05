#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F��l��
class CObjHero : public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();   //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw();   //�h���[
	void SetX(float x);//�ʒu���X�ύX�p
	void SetY(float y);//�ʒu���Y�ύX�p
	float GetX();	   //�ʒu���X�擾�p
	float GetY();	   //�ʒu���Y�擾�p
private:
	float m_r;
	float m_x;    //��l���̂������ړ��p�ϐ�
	float m_y;	  //��l���̂������ړ��p�ϐ�
	bool  m_f;	  //�e�۔��ː���p
	float m_vx;	  //��l���@�̂������ړ��x�N�g���p�ϐ�
	float m_vy;   //��l���@�̂������ړ��x�N�g���p�ϐ�
	float m_hp;
};