#pragma once
//使用ヘッダー
#include"GameL\SceneObjManager.h"

//使用ネームスペース
using namespace GameL;

//オブジェクト：敵
class CObjEnemy :public CObj
{
public:
	CObjEnemy() {};
	~CObjEnemy() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;//敵のx方向の位置
	float m_y;//敵のy方向の位置
	float m_vx;//敵の移動ベクトルX
	float m_vy;//敵の移動ベクトルY
	
};
