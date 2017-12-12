//使用ヘッダー(GameL)
#include"GameL\DrawFont.h"
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjGameOver.h"
#include<time.h>

//ネームスペース
using namespace GameL;


//Init
void CObjGameOver::Init()
{
	m_key_flag = false;//キーフラグ
					   
    //乱数関数
	srand((unsigned)time(NULL));

	


}

//Action
void CObjGameOver::Action()
{
	

	//エンターキーを押してシーン:ゲームタイトルに移行
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneTitle());//ここにタイトルの名前を(仮でCSceneTitleにしている)
			m_key_flag = false;
		}
	}
	else
	{
		m_key_flag = true;
	};

	//
	int num = rand() % 8 + 1;

	//描画されるGameOver画面の描画
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
	//描画カラー R   G    B    A
	float c[4]={ 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//描画元の絵の切り取り位置の設定
	/*src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;*/


	//表示位置
	dst.m_top = 600.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom =-600.0f;


	//0番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(0, &src, &dst, c,0.0f);


}