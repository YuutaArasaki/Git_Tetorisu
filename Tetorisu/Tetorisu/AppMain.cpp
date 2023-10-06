#include"DxLib.h"
#include"FreamControl.h"
#include"SceneManager.h"
#include"InputControl.h"


/******************************************
*�}�N����`
******************************************/

#define SCREEN_HEIGHT (720)
#define SCREEN_WIDTH  (1280)
#define SCREEN_COLORBIT (32)
#define FONT_SIZE (20)

/*****************************************
*�^��`
******************************************/


/*****************************************
*�O���[�o���ϐ���`
******************************************/

/*****************************************
*�v���g�^�C�v�錾
******************************************/


/*****************************************
*�v���O�����̊J�n
******************************************/

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�^�C�g����ύX
	SetMainWindowText("�e�g���X");

	//�E�B���h�E���[�h�ŋN��

	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������

	if (DxLib_Init() == -1)
	{

		return -1;

	}


	//���͑ҋ@

	WaitKey();


	//Dx���C�u�����g�p�̏I������

	DxLib_End();

	return 0;
}
