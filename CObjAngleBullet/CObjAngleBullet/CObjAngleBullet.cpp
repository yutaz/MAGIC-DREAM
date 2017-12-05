//�g�p�w�b�_�[
#include"GameL\DrawTexture.h"
#include"CObjAngleBullet.h"
#include"GameHead.h"
#include"GameL\HitBoxManager.h"

//�g�p�l�[���X�y�[�X
using namespace GameL;

CObjAngleBullet::CObjAngleBullet(float x, float y,float r,float speed)
{
	m_x = x;
	m_y = y;
	m_r = r;
	m_speed = speed;
}

//�C�j�V�����C�Y
void CObjAngleBullet::Init()
{
	m_vx = cos(3.14f/180.0f*m_r);
	m_vy = sin(3.14f/180.0f*m_r);
	//�����蔻��pHITBOX�̍쐬
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ANGLE_BULLET, 1);
}


//�A�N�V����
void CObjAngleBullet::Action()
{

	//�e�̈ړ�
	m_x += m_vx*m_speed;
	m_y -= m_vy*m_speed;

	//�G�̒e��HITBOX�X�V�p�|�C���^�[�擾
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);//HitBox�̈ʒu��G�@�e�ۂ̈ʒu�ɍX�V

	//�G�@�e�ۂ����S�ɉ�ʊO�ɏo���Ƃ��G�̒e�ۂ�j������
	if (m_x < -32.0f)//������
	{
		this->SetStatus(false);//���g�ɍ폜���߂��o��
		Hits::DeleteHitBox(this);//�G�@�e�ۂ����L����HitBox�ɍ폜����
	}

	if (m_x > 800.0f)//�E����
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);//
	}

	if (m_y < -32.0f)//�㔻��
	{
		this->SetStatus(false);//
		Hits::DeleteHitBox(this);
	}

	if (m_y > 600)//������
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}


	//��l���Ƃ̐ڐG�œG�̒e�폜
	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
	{
		this->SetStatus(false); //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);//�G�̒e������HitBox�ɍ폜����
	}
}

//�h���[
void CObjAngleBullet::Draw()
{
	//�`��J���[���@R  G    B    A
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	//�\���ʒu�ݒ�
	dst.m_top = 0.0f+m_y;
	dst.m_left = 0.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 0.0f+m_y;

	//0�Ԗڂɓo�^�����G��src,dst�ɕ`��
	Draw::Draw(0, &src,&dst, c, m_r);

}