#pragma once
#include"GameL\SceneManager.h"

//�g�p�l�[���X�y�[�X
using namespace GameL;


//�V�[���F�Q�[�����C��
class  CScenemain:public CScene
{
public:
	 CScenemain ();
	~ CScenemain ();
	void InitScene();//���������\�b�h
	void Scene();//���s�����\�b�h


private:
	int m_time; //�V�[���̃^�C��(��ɓG�@�o���Ɏg�p)

};

