//使用ヘッダー(GameL)
#include"GameL\DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjGameOver.h"

//ネームスペース
using namespace GameL;

//

//Init
void CObjGameOver::Init()
{
	m_key_flag = false;//キーフラグ

	float Graphic[8] = {0,1,2,3,4,5,6,7};//絵の枚数


}

//Action
void CObjGameOver::Action()
{
	//ランダムでゲームオーバー絵を表示
	double Uniform(void)
	{
		return ((double)rand() + 1.0) / ((double)RANND_MAX + 2.0);
	};


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
	}



}

//Draw
void CObjGameOver::Draw()
{
	//描画カラー R   G    B    A
	float c[4]={ 1.0f,1.0f,1.0f,1.0f };

	RECT  src;//描画元切り取り位置
	RECT  dat;//描画先表示位置

	//描画元の絵の切り取り位置の設定



	//


	//0番目に登録した


}