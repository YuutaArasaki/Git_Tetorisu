#include"TitleScene.h"
#include"InputControl.h"
#include"SceneManager.h"
#include"DxLib.h"


/*************************************************
*マクロ定義
**************************************************/

/*************************************************
*型定義
**************************************************/

enum
{
	E_TITLE_BGM,
	E_TITLE_SE_CURSOR,
	E_TITLE_SE_SELECT,
	E_SOUND_MAX
};

/*************************************************
*グローバル変数宣言
**************************************************/

int cursor_number;
int sounds[E_SOUND_MAX];

/*************************************************
*プロトタイプ宣言
**************************************************/


/*************************************************
*タイトル画面：初期化処理
*引数：なし
*戻り値：エラー情報(-1:異常有,-1以外:正常終了)
**************************************************/

int TitleScene_Initialize(void)
{
	int ret = 0;

	cursor_number = 0;

	sounds[E_TITLE_BGM] = LoadSoundMem("sounds/BGM041.ogg");
	sounds[E_TITLE_SE_CURSOR] = LoadSoundMem("sounds/SE1.mp3");
	sounds[E_TITLE_SE_SELECT] = LoadSoundMem("sounds/SE2.mp3");

	ChangeVolumeSoundMem(120, sounds[E_TITLE_SE_CURSOR]);
	ChangeVolumeSoundMem(80, sounds[E_TITLE_SE_SELECT]);
}
