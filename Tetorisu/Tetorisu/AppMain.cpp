#include"DxLib.h"
#include"FreamControl.h"
#include"SceneManager.h"
#include"InputControl.h"


/******************************************
*マクロ定義
******************************************/

#define SCREEN_HEIGHT (720)
#define SCREEN_WIDTH  (1280)
#define SCREEN_COLORBIT (32)
#define FONT_SIZE (20)

/*****************************************
*型定義
******************************************/


/*****************************************
*グローバル変数定義
******************************************/

/*****************************************
*プロトタイプ宣言
******************************************/


/*****************************************
*プログラムの開始
******************************************/

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//タイトルを変更
	SetMainWindowText("テトリス");

	//ウィンドウモードで起動

	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理

	if (DxLib_Init() == -1)
	{

		return -1;

	}


	//入力待機

	WaitKey();


	//Dxライブラリ使用の終了処理

	DxLib_End();

	return 0;
}
