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
	//外部グラフィックファイルを読み込んで0番に登録
	Draw::LoadImage(L"", 0, TEX_SIZE_512);
}

//実行中メソッド
void CScenemain::Scene()
{

}