//�g�p�w�b�_�[(GameL)
#include"GameL\DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjGameOver.h"

//�l�[���X�y�[�X
using namespace GameL;

//

//Init
void CObjGameOver::Init()
{
	m_key_flag = false;//�L�[�t���O

	float Graphic[8] = {0,1,2,3,4,5,6,7};//�G�̖���


}

//Action
void CObjGameOver::Action()
{
	//�����_���ŃQ�[���I�[�o�[�G��\��
	double Uniform(void)
	{
		return ((double)rand() + 1.0) / ((double)RANND_MAX + 2.0);
	};


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
	}



}

//Draw
void CObjGameOver::Draw()
{
	//�`��J���[ R   G    B    A
	float c[4]={ 1.0f,1.0f,1.0f,1.0f };

	RECT  src;//�`�挳�؂���ʒu
	RECT  dat;//�`���\���ʒu

	//�`�挳�̊G�̐؂���ʒu�̐ݒ�



	//


	//0�Ԗڂɓo�^����


}