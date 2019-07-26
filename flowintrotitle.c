#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_10();
	}
	SET_GAME_PAUSES_FOR_STREAMING(0);
	CLEAR_BIT(&(Global_106565.f_10010.f_25), 1);
	func_7();
	SET_NO_LOADING_SCREEN(1);
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	iLocal_0 = REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");
	while (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		WAIT(0);
	}
	while (!IS_SCREEN_FADED_OUT())
	{
		func_7();
		WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (GET_GAME_TIMER() + 8000 + ROUND((2f * 1000f)));
	while (!IS_CUTSCENE_PLAYING())
	{
		func_7();
		if (!IS_BIT_SET(Global_106565.f_10010.f_25, 1))
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (GET_GAME_TIMER() + ROUND((2f * 1000f)));
				}
			}
			else if (GET_GAME_TIMER() > iLocal_1)
			{
				SET_BIT(&(Global_106565.f_10010.f_25), 1);
				if (_0x6FDDF453C0C756EC() || IS_PC_VERSION())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		WAIT(0);
	}
	func_10();
}

void func_1()
{
	Global_93721 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

int func_3(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
	END_SCALEFORM_MOVIE_METHOD();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam6);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam7);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_7()
{
	HIDE_LOADING_ON_FADE_THIS_FRAME();
	DISABLE_CONTROL_ACTION(2, 199, 1);
	SET_SCRIPT_GFX_DRAW_ORDER(7);
	func_8();
}

void func_8()
{
	_STOP_RECORDING_THIS_FRAME();
	func_9();
}

void func_9()
{
	Global_17272.f_134 = 1;
}

void func_10()
{
	SET_BIT(&(Global_106565.f_10010.f_25), 1);
	if (iLocal_0 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
	}
	SET_SCRIPT_GFX_DRAW_ORDER(4);
	SET_NO_LOADING_SCREEN(0);
	SET_GAME_PAUSES_FOR_STREAMING(1);
	TERMINATE_THIS_THREAD();
}
