#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_6();
	}
	if ((!Global_1 && !IS_PC_VERSION()) && _0x6FDDF453C0C756EC())
	{
		SET_NO_LOADING_SCREEN(1);
		if (!IS_SCREEN_FADED_OUT())
		{
			if (!IS_SCREEN_FADING_OUT())
			{
				DO_SCREEN_FADE_OUT(800);
			}
		}
		iLocal_20 = REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = REQUEST_SCALEFORM_MOVIE("INSTRUCTIONAL_BUTTONS");
		while (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_20) || !HAS_SCALEFORM_MOVIE_LOADED(iLocal_21))
		{
			WAIT(0);
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT_EMPTY");
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_4(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1));
		func_5("HUD_CONTINUE");
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		END_SCALEFORM_MOVIE_METHOD();
		while (!IS_SCREEN_FADED_OUT())
		{
			WAIT(0);
		}
		SHUTDOWN_LOADING_SCREEN();
		while (!iLocal_22)
		{
			HIDE_LOADING_ON_FADE_THIS_FRAME();
			SET_SCRIPT_GFX_DRAW_ORDER(7);
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_20, 255, 255, 255, 0, 0);
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_21, 255, 255, 255, 0, 0);
			if (IS_CONTROL_PRESSED(2, 201))
			{
				iLocal_22 = 1;
			}
			WAIT(0);
		}
		SET_NO_LOADING_SCREEN(0);
		func_3(1, 1);
		func_1();
	}
	Global_71859.f_1 = 0;
	SET_BIT(&(Global_106565.f_10010.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_4(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

void func_5(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_21);
	}
	SET_SCRIPT_GFX_DRAW_ORDER(4);
	SET_NO_LOADING_SCREEN(0);
	TERMINATE_THIS_THREAD();
}

