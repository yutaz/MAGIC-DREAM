//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL�@(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include"GameL\DrawTexture.h"
#include"GameL\Audio.h"
#include"GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[�t�@�C��
#include"Scenemain.h"
#include"GameHead.h"
#include""//�����ɒe�̃w�b�_�[��

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
	//���y�ǂݍ���
	Audio::LoadAudio(0, L"", BACK_MUSIC);//
	Audio::LoadAudio(1, L"", BACK_MUSIC);//

	Audio::LoadAudio(2, L"",BACK_MUSIC );//
	Audio::LoadAudio(3, L"", BACK_MUSIC);//



	//�{�����[����1.5���₵�čăX�^�[�g
	float v = Audio::VolumeMaster(1.5);

	//���y�X�^�[�g
	Audio::Start(0);



	//�O���O���t�B�b�N�t�@�C����ǂݍ����0�Ԃɓo�^(512*512pxcel)
	Draw::LoadImage(L"", 0, TEX_SIZE_512);

	//Boss�Ɏg���O���O���t�B�b�N�t�@�C���̓ǂݍ��݁@1�Ԃɓo�^(512*512pxcel)
	Draw::LoadImageW(L"",1, TEX_SIZE_512);

	//��l���I�u�W�F�N�g�쐬

	
	//�w�i�I�u�W�F�N�g�̍쐬


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
	else if (m_time == 400)//400�b
	{

	}
	else if (m_time == 570)//570�b
	{

	}
	else if (m_time == 680)//680�b
	{

	}







	else if (m_time == 2000)//�{�X�̏o������2000�b
	{
		//���O�͉��̂���(CObjEnemyBoss)
		CObjEnemyBoss*obj;
		obj = new CObjEnemyBoss(300, 100);
		Objs::InsertObj(obj, OBJ_BOSS_ENEMY, 50);

	}
	//���y�`�F���W
	/*Audio::Stop(0);//0�Ԗڂ̋�Stop
	Audio::Start(1);//1�Ԗڋ�Start*/




}