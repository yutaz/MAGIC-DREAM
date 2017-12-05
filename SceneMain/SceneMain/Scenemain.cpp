//STLデバッグ機能をOFFにする
#define _SECURE_SCL　(0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include"GameL\DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダーファイル
#include"Scenemain.h"
#include"GameHead.h"

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
	//外部グラフィックファイルを読み込んで0番に登録(512*512pxcel)
	Draw::LoadImage(L"", 0, TEX_SIZE_512);

	//Bossに使う外部グラフィックファイルの読み込み　1番に登録(512*512pxcel)
	Draw::LoadImageW(L"",1, TEX_SIZE_512);

	//主人公オブジェクト作成
	

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




}