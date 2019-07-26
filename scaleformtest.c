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
	var uLocal_19 = 0;
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
	if (IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_IN(500);
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_5();
	}
	uLocal_19 = REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	while (!HAS_SCALEFORM_MOVIE_LOADED(uLocal_19))
	{
		WAIT(0);
	}
	while (true)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		WAIT(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 191, 1));
			func_2("PRESS A");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 194, 1));
			func_2("PRESS B");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 193, 1));
			func_2("PRESS X");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 192, 1));
			func_2("PRESS Y");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			iLocal_18 = -1;
			break;
		
		case 1:
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, 1));
			func_2("DOWN");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, 1));
			func_2("UP");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 190, 1));
			func_2("LEFT");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 189, 1));
			func_2("RIGHT");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			iLocal_18 = -1;
			break;
		
		case 2:
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_CLEAR_SPACE");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_DATA_SLOT");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_3(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
			func_2("BACK");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam1, "SET_BACKGROUND_COLOUR");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_3(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

void func_4()
{
	if (Global_14532 == 0)
	{
		if (((((((((IS_CONTROL_PRESSED(2, 189) || IS_CONTROL_PRESSED(2, 190)) || IS_CONTROL_PRESSED(2, 188)) || IS_CONTROL_PRESSED(2, 187)) || IS_CONTROL_PRESSED(2, 205)) || IS_CONTROL_PRESSED(2, 206)) || IS_CONTROL_PRESSED(2, 207)) || IS_CONTROL_PRESSED(2, 208)) || IS_CONTROL_PRESSED(2, 201)) || IS_CONTROL_PRESSED(2, 202))
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
		if (IS_CONTROL_PRESSED(2, 217))
		{
			iLocal_18 = 1;
		}
		if (IS_CONTROL_PRESSED(2, 189))
		{
			iLocal_18 = 2;
		}
		if (IS_CONTROL_PRESSED(2, 190))
		{
			iLocal_18 = 2;
		}
		if (IS_CONTROL_PRESSED(2, 205))
		{
		}
		if (IS_CONTROL_PRESSED(2, 206))
		{
		}
		if (IS_CONTROL_PRESSED(2, 207))
		{
		}
		if (IS_CONTROL_PRESSED(2, 208))
		{
		}
		if (IS_CONTROL_PRESSED(2, 188))
		{
			iLocal_18 = 2;
		}
		if (IS_CONTROL_PRESSED(2, 187))
		{
			iLocal_18 = 2;
		}
		if (IS_CONTROL_PRESSED(2, 201))
		{
			iLocal_18 = 1;
		}
		if (IS_CONTROL_PRESSED(2, 202))
		{
			iLocal_18 = 0;
		}
		if (IS_CONTROL_PRESSED(2, 203))
		{
			iLocal_18 = 1;
		}
		if (IS_CONTROL_PRESSED(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	SET_GAME_PAUSED(0);
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_19);
	TERMINATE_THIS_THREAD();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_12();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_11(0))
		{
			func_7(0);
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

void func_7(int iParam0)
{
	if (func_10())
	{
		return;
	}
	if (Global_14725)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_14553.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_11(0))
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

bool func_10()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_11(int iParam0)
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

void func_12()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

