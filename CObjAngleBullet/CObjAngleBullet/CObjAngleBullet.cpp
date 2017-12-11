//使用ヘッダー
#include"GameL\DrawTexture.h"
#include"CObjAngleBullet.h"
#include"GameHead.h"
#include"GameL\HitBoxManager.h"

//使用ネームスペース
using namespace GameL;

CObjAngleBullet::CObjAngleBullet(float x, float y,float r,float speed)
{
	m_x = x;
	m_y = y;
	m_r = r;
	m_speed = speed;
}

//イニシャライズ
void CObjAngleBullet::Init()
{
	m_vx = cos(3.14f/180.0f*m_r);
	m_vy = sin(3.14f/180.0f*m_r);
	//当たり判定用HITBOXの作成
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ANGLE_BULLET, 1);
}


//アクション
void CObjAngleBullet::Action()
{

	//弾の移動
	m_x += m_vx*m_speed;
	m_y -= m_vy*m_speed;

	//敵の弾のHITBOX更新用ポインター取得
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);//HitBoxの位置を敵機弾丸の位置に更新

	//敵機弾丸が完全に画面外に出たとき敵の弾丸を破棄する
	if (m_x < -32.0f)//左判定
	{
		this->SetStatus(false);//自身に削除命令を出す
		Hits::DeleteHitBox(this);//敵機弾丸が所有するHitBoxに削除する
	}

	if (m_x > 800.0f)//右判定
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}

	if (m_y < -32.0f)//上判定
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}

	if (m_y > 600)//下判定
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}


	//主人公との接触で敵の弾削除
	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
	{
		this->SetStatus(false); //自身に削除命令を出す。
		Hits::DeleteHitBox(this);//敵の弾が持つHitBoxに削除する
	}
}

//ドロー
void CObjAngleBullet::Draw()
{
	//描画カラー情報　R  G    B    A
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	//表示位置設定
	dst.m_top = 0.0f+m_y;
	dst.m_left = 0.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 0.0f+m_y;

	//0番目に登録した絵をsrc,dstに描画
	Draw::Draw(0, &src,&dst, c, m_r);

}