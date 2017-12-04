//使用ヘッダー
#include"GameHead.h"
#include"CObjNormalBullet.h"
#include"GameL\DrawTexture.h"
//使用ネームスペース
using namespace GameL;

//オブジェ：通常弾cpp

//コンストラクタ
CObjNormalBullet::CObjNormalBullet(float x, float y)
{
	m_x = x;//主人公の位置情報を引数でここへ
	m_y = y;//以下同文
}

//Init:イニシャライズ
void CObjNormalBullet::Init()
{
	m_vy = 0.0f;
}

//Action:アクション
void CObjNormalBullet::Action()
{
	m_vy += 1.0f;

	m_y += m_vy;
}

//Draw:ドロー
void CObjNormalBullet::Draw()
{
	//描画カラー   R     G    B    A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//絵の切り取り位置
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;


	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 0.0f;

	//0番目に登録してある絵をsrc,dst,cの情報を元に描画
	Draw::Draw(0, &src, &dst, c, 0.0f);

}