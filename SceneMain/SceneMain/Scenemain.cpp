//STLデバッグ機能をOFFにする
#define _SECURE_SCL　(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include"GameL\DrawTexture.h"
#include"GameL\Audio.h"
#include"GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダーファイル
#include"Scenemain.h"
#include"GameHead.h"
#include""//ここに弾のヘッダーを

//コンストラクタ
CScenemain::CScenemain()
{

}

//デストラクタ
CScenemain::~CScenemain()
{


}

//初期化メソッド
void CScenemain::InitScene()
{
	//音楽読み込み
	Audio::LoadAudio(0, L"", BACK_MUSIC);//
	Audio::LoadAudio(1, L"", BACK_MUSIC);//

	Audio::LoadAudio(2, L"",BACK_MUSIC );//
	Audio::LoadAudio(3, L"", BACK_MUSIC);//



	//ボリュームを1.5増やして再スタート
	float v = Audio::VolumeMaster(1.5);

	//音楽スタート
	Audio::Start(0);



	//外部グラフィックファイルを読み込んで0番に登録(512*512pxcel)
	Draw::LoadImage(L"", 0, TEX_SIZE_512);

	//Bossに使う外部グラフィックファイルの読み込み　1番に登録(512*512pxcel)
	Draw::LoadImageW(L"",1, TEX_SIZE_512);

	//主人公オブジェクト作成

	
	//背景オブジェクトの作成


	//敵機出現のタイム初期化
	m_time = 0;
}

//実行中メソッド
void CScenemain::Scene()
{
	m_time++;//敵の出現時間

	if (m_time == 30)//30秒
	{
		
	}

	else if (m_time == 80)//80秒
	{

	}

	else if (m_time == 120)//120秒
	{

	}

	else if (m_time == 200)//200秒
	{

	}
	else if (m_time == 400)//400秒
	{

	}
	else if (m_time == 570)//570秒
	{

	}
	else if (m_time == 680)//680秒
	{

	}







	else if (m_time == 2000)//ボスの出現時間2000秒
	{
		//名前は仮のもの(CObjEnemyBoss)
		CObjEnemyBoss*obj;
		obj = new CObjEnemyBoss(300, 100);
		Objs::InsertObj(obj, OBJ_BOSS_ENEMY, 50);

	}
	//音楽チェンジ
	/*Audio::Stop(0);//0番目の曲Stop
	Audio::Start(1);//1番目曲Start*/




}