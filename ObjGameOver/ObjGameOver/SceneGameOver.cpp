//�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)


//�g�p�w�b�_�[(GameL)
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

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


	//�Q�[���I�[�o�[�I�u�W�F�N�g�쐬
	CObjGameOver* obj = new CObjGameOver();
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);
}

//���s�����\�b�h
void CSceneGameOver::Scene()
{
	//�o�͂�����
}