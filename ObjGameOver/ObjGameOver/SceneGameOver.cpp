//�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)


//�g�p�w�b�_�[(GameL)
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL\DrawTexture.h"
#include"GameL\Audio.h"

//�l�[���X�y�[�X
using namespace GameL;

//�w�b�_�[
#include"SceneGameOver.h"
#include"GameHead.h"

//�R���X�g���N�^
CSceneGameOver::CSceneGameOver()
{

}

//�f�X�g���N�^
CSceneGameOver::~CSceneGameOver()
{

}

//���������\�b�h
void CSceneGameOver::InitScene()
{
	//GameOver�\��
	Draw::LoadImageA(0, L"");

	//���y�ǂݍ���
	Audio::LoadAudio(0, L"", BACK_MUSIC);//�����ɉ��y�f�[�^�̖��O��


	//�Q�[���I�[�o�[�I�u�W�F�N�g�쐬
	CObjGameOver* obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);

	//�}�X�^�[�{�����[����1.0f�ɖ߂�
	float v = Audio::VolumeMaster(0);
	v = Audio::VolumeMaster((1.0 - v));


	//���y�X�^�[�g
	Audio::Start(0);

}

//���s�����\�b�h
void CSceneGameOver::Scene()
{
	//�o�͂�����
}