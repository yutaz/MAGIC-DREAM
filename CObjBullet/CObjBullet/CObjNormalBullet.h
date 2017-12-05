#pragma once
//使用ヘッダー
#include"GameL\SceneObjManager.h"
//使用ネームスペース
using namespace GameL;

//オブジェ:通常弾
class CObjNormalBullet :public CObj
{
public:
	CObjNormalBullet(float x,float y);//コンストラクタ
	~CObjNormalBullet() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー

private:
	float m_x; //弾丸のX方向の位置用変数
	float m_y; //弾丸のY方向の位置用変数
	float m_vy;//弾丸のX方向の速度用変数
	
};
