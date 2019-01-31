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
	int iLocal_18 = 0;
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
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x9934FEFB3B8C6DB8("graphic_design");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x93
{
	if (Global_389C == 0)
	{
		if (((((((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 190)) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 205)) || PAD::IS_CONTROL_PRESSED(2, 206)) || PAD::IS_CONTROL_PRESSED(2, 201)) || PAD::IS_CONTROL_PRESSED(2, 202))
		{
			Global_389C = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_389C = 0;
	}
	if (Global_389C == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 189))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(10);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 190))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(11);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 205))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 206))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(6);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 188))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 187))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(16);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2, 202))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(17);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
}

void func_2()//Position - 0x215
{
	func_3(0);
	MISC::SET_GAME_PAUSED(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_3(bool bParam0)//Position - 0x231
{
	if (bParam0)
	{
		func_9();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_38B1.f_1 == 1)
	{
		if (!Global_38B1.f_1 == 0)
		{
			Global_38B1.f_1 = 3;
		}
	}
}

void func_4(int iParam0)//Position - 0x294
{
	if (func_7())
	{
		return;
	}
	if (Global_3959)
	{
		func_6(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_5())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_5()//Position - 0x30E
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x335
{
	if (bParam0)
	{
		if (func_8(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

bool func_7()//Position - 0x3A9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_8(int iParam0)//Position - 0x3BB
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x415
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

