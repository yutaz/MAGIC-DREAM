#pragma once
//使用ヘッダー
#include"GameL\SceneObjManager.h"
//使用ネームスペース
using namespace GameL;

//オブジェクト：ゲームオーバー
class CObjGameOver :public CObj
{
public:
	CObjGameOver();
	~CObjGameOver();
	void Init();
	void Action();
	void Draw();
private:
	double Graphic[8];
	bool m_key_flag;//キーフラグ
};
