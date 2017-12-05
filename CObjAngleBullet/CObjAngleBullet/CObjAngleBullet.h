#pragma once
//使用ヘッダー
#include"GameL\SceneObjManager.h"

//使用ネームスペース
using namespace GameL;


//弾(拡散用)
class CObjAngleBullet :public CObj
{
public:
	CObjAngleBullet(float x, float y, float r, float speed);
	~CObjAngleBullet() {};

	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー

private:
	float m_x;//弾丸のX方向の位置
	float m_y;//弾丸のY方向の位置
	float m_vx;//弾丸のX方向の速度
	float m_vy;//Y方向の速度
	float m_r;//移動する角度
	float m_speed; //速度


};