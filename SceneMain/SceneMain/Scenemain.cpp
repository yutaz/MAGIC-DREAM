//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL�@(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include"GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[�t�@�C��
#include"Scenemain.h"
#include"GameHead.h"

//�R���X�g���N�^
CScenemain::CScenemain()
{

}

//�f�X�g���N�^
CScenemain::~CScenemain()
{


}

//���������\�b�h
void CScenemain::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ����0�Ԃɓo�^(512*512pxcel)
	Draw::LoadImage(L"", 0, TEX_SIZE_512);

	//Boss�Ɏg���O���O���t�B�b�N�t�@�C���̓ǂݍ��݁@1�Ԃɓo�^(512*512pxcel)
	Draw::LoadImageW(L"",1, TEX_SIZE_512);

	//��l���I�u�W�F�N�g�쐬
	

	//�G�@�o���̃^�C��������
	m_time = 0;
}

//���s�����\�b�h
void CScenemain::Scene()
{
	m_time++;//�G�̏o������

	if (m_time == 30)//30�b
	{
		
	}

	else if (m_time == 80)//80�b
	{

	}

	else if (m_time == 120)//120�b
	{

	}

	else if (m_time == 200)//200�b
	{

	}




}