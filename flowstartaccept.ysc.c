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

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_6();
	}
	if ((!Global_1 && !MISC::IS_PC_VERSION()) && MISC::_0x6FDDF453C0C756EC())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
		iLocal_20 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x9934FEFB3B8C6DB8("INSTRUCTIONAL_BUTTONS");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_20) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_21))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT_EMPTY");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "SET_DATA_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
		func_4(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, true));
		func_5("HUD_CONTINUE");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		unk_0x126E6B6CBE0FEACC();
		while (!iLocal_22)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_20, 255, 255, 255, 0, 0);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_21, 255, 255, 255, 0, 0);
			if (PAD::IS_CONTROL_PRESSED(2, 201))
			{
				iLocal_22 = 1;
			}
			SYSTEM::WAIT(0);
		}
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		func_3(1, 1);
		func_1();
	}
	Global_11732.f_1 = 0;
	MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 0);
	func_6();
}

int func_1()//Position - 0x17D
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

bool func_2(bool bParam0)//Position - 0x1C8
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_3(int iParam0, int iParam1)//Position - 0x1F3
{
	Global_16C57.f_7 = iParam0;
	Global_16C57.f_8 = iParam1;
}

void func_4(char* sParam0)//Position - 0x20B
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

void func_5(char* sParam0)//Position - 0x219
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_6()//Position - 0x22B
{
	if (iLocal_20 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_21);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

