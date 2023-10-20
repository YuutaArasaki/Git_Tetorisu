#include"TitleScene.h"
#include"InputControl.h"
#include"SceneManager.h"
#include"DxLib.h"


/*************************************************
*�}�N����`
**************************************************/

/*************************************************
*�^��`
**************************************************/

enum
{
	E_TITLE_BGM,
	E_TITLE_SE_CURSOR,
	E_TITLE_SE_SELECT,
	E_SOUND_MAX
};

/*************************************************
*�O���[�o���ϐ��錾
**************************************************/

int cursor_number;
int sounds[E_SOUND_MAX];

/*************************************************
*�v���g�^�C�v�錾
**************************************************/


/*************************************************
*�^�C�g����ʁF����������
*�����F�Ȃ�
*�߂�l�F�G���[���(-1:�ُ�L,-1�ȊO:����I��)
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
