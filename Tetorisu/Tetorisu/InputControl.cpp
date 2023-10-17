#include"InputControl.h"
#include"DxLib.h"

/******************************************
*�}�N����`
*******************************************/
#define XINPUT_BUTTON_MAX (16)			//�R���g���[���[�̃{�^����


/******************************************
*�^��`
*******************************************/

enum KEY_STATE
{
	E_NONE,						//������
	E_CLICK,					//�������u��
	E_PRESS,					//���������Ă�
	E_RELEASED,					//������
	E_KEY_STATE_MAX
};

/******************************************
*�ϐ��錾
*******************************************/
KEY_STATE button_state[XINPUT_BUTTON_MAX];		//�e�{�^�����͏��


/*****************************************
*�v���g�^�C�v�錾
******************************************/

/*****************************************
*���͐���@�\�F����������
*�����F�Ȃ�
*�߂�l�F�Ȃ�
******************************************/

void InputControl_Initialize(void)
{
	int i;		//���[�v�J�E���^

	//���͏�Ԃ̏�����
	for (i = 0; i < XINPUT_BUTTON_MAX; i++)
	{
		button_state[i] = E_NONE;
	}
}

/*****************************************
*���͐���@�\�F�X�V����
*�����F�Ȃ�
*�߂�l�F�Ȃ�
******************************************/

void InputoControl_Update(void)
{
	int i;		//���[�v�J�E���^
	XINPUT_STATE input_controller;		//�R���g���[���[�̓��͏��

	//�R���g���[���[�̓��͏����擾
	GetJoypadXInputState(DX_INPUT_PAD1, &input_controller);

	//���͏�Ԃ̍X�V
	for (i = 0; i < XINPUT_BUTTON_MAX; i++)
	{
		if (input_controller.Buttons[i] == TRUE)
		{
			switch (button_state[i])
			{
			case E_NONE:
			case E_RELEASED:
				button_state[i] = E_CLICK;
				break;
			
			case E_CLICK:
			case E_PRESS:
				button_state[i] = E_PRESS;
				break;

			default:
				button_state[i] = E_NONE;
				break;
			}
		}
		else
		{
			switch (button_state[i])
			{
			case E_NONE:
			case E_RELEASED:
				button_state[i] = E_NONE;

			case E_CLICK:
			case E_PRESS:
				button_state[i] = E_RELEASED;
				break;

			default:
				button_state[i] = E_NONE;
				break;
			}
		}
	}
}
//�R�y�[�W��