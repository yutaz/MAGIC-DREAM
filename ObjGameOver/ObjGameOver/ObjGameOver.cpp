//�g�p�w�b�_�[(GameL)
#include"GameL\DrawFont.h"
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjGameOver.h"
#include<time.h>

//�l�[���X�y�[�X
using namespace GameL;


//Init
void CObjGameOver::Init()
{
	m_key_flag = false;//�L�[�t���O
					   
    //�����֐�
	srand((unsigned)time(NULL));

	


}

//Action
void CObjGameOver::Action()
{
	

	//�G���^�[�L�[�������ăV�[��:�Q�[���^�C�g���Ɉڍs
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneTitle());//�����Ƀ^�C�g���̖��O��(����CSceneTitle�ɂ��Ă���)
			m_key_flag = false;
		}
	}
	else
	{
		m_key_flag = true;
	};

	//
	int num = rand() % 8 + 1;

	//�`�悳���GameOver��ʂ̕`��
	switch (num)
	{
	case 1:
		Draw::DrawStr(0, L"", );
		break;

	case 2:
		Draw::DrawStr(1, L"", );
		break;

	case 3:

		break;

	case 4:

		break;

	case 5:

		break;

	case 6:

		break;
	case 7:

		break;
	case 8:

		break;

	}
	
	


}

//Draw
void CObjGameOver::Draw()
{
	//�`��J���[ R   G    B    A
	float c[4]={ 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�`�挳�̊G�̐؂���ʒu�̐ݒ�
	/*src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;*/


	//�\���ʒu
	dst.m_top = 600.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom =-600.0f;


	//0�Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(0, &src, &dst, c,0.0f);


}