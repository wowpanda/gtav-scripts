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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = ADD_BLIP_FOR_COORD(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_IN(500);
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	uLocal_18 = REQUEST_SCALEFORM_MOVIE("p_bubblegum");
	while (!HAS_SCALEFORM_MOVIE_LOADED(uLocal_18))
	{
		WAIT(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			if (DOES_CAM_EXIST(uLocal_19))
			{
				SET_CAM_PARAMS(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				SET_CAM_NEAR_CLIP(uLocal_19, 0.01f);
				SET_CAM_FAR_CLIP(uLocal_19, 0.02f);
				RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			SET_BLIP_SPRITE(uLocal_20, 66);
		}
		iLocal_21 = 1;
		DRAW_SCALEFORM_MOVIE(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		WAIT(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14532 == 0)
	{
		if (IS_CONTROL_PRESSED(2, 189) || IS_CONTROL_PRESSED(2, 190))
		{
			Global_14532 = 1;
			SETTIMERA(0);
		}
	}
	else if (TIMERA() > 50)
	{
		Global_14532 = 0;
	}
	if (Global_14532 == 0)
	{
		if (IS_CONTROL_JUST_PRESSED(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_25);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_31);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_34);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_37);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_40);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_43);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (IS_CONTROL_JUST_PRESSED(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!IS_CONTROL_PRESSED(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_INPUT_EVENT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(14);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_46);
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_2()
{
	if (DOES_CAM_EXIST(uLocal_19))
	{
		DESTROY_CAM(uLocal_19, 0);
	}
	RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_3(0);
	SET_GAME_PAUSED(0);
	CLEAR_HELP(1);
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_18);
	TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

bool func_7()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_8(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

