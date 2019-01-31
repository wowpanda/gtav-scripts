#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_10();
	}
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2704.f_19), 1);
	func_7();
	SCRIPT::SET_NO_LOADING_SCREEN(true);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iLocal_0 = unk_0x9934FEFB3B8C6DB8("OPENING_CREDITS");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (MISC::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_7();
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2704.f_19, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (MISC::GET_GAME_TIMER() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_1)
			{
				MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 1);
				if (MISC::_0x6FDDF453C0C756EC() || MISC::IS_PC_VERSION())
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
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0x13E
{
	Global_16C57 = 1;
}

int func_2()//Position - 0x14B
{
	if (func_3(0))
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

bool func_3(bool bParam0)//Position - 0x196
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_4(int iParam0, int iParam1)//Position - 0x1C1
{
	Global_16C57.f_7 = iParam0;
	Global_16C57.f_8 = iParam1;
}

void func_5(char* sParam0)//Position - 0x1D9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "HIDE_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x200
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_0, "SHOW_LOGO");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam6);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam7);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_7()//Position - 0x251
{
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	func_8();
}

void func_8()//Position - 0x26E
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_9();
}

void func_9()//Position - 0x27E
{
	Global_434C.f_86 = 1;
}

void func_10()//Position - 0x28C
{
	MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 1);
	if (iLocal_0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

