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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uVar0 = func_13();
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(uVar0))
		{
			switch (iLocal_45)
			{
				case 0:
					func_11(&uVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&uVar0);
					iLocal_46 = GET_GAME_TIMER();
					iLocal_45 = 1;
					break;
				
				case 1:
					if ((GET_GAME_TIMER() - iLocal_46) > 3000)
					{
						func_9(&uVar0);
						iLocal_45 = 2;
					}
					break;
			}
			if (func_1(&uVar0, 0))
			{
			}
		}
		WAIT(0);
	}
}

int func_1(var uParam0, bool bParam1)
{
	if (!func_8(&(uParam0->f_2)))
	{
		func_6(&(uParam0->f_2));
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	SET_SCRIPT_GFX_DRAW_ORDER(1);
	DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(uParam0->f_2)) * 1000f) > TO_FLOAT(uParam0->f_1)
	{
		func_2(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = TO_FLOAT(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = GET_NETWORK_TIME();
		fVar3 = TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (TO_FLOAT(GET_GAME_TIMER()) / 1000f);
}

bool func_5(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_6(var uParam0)
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_4(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 300;
	func_6(&(uParam0->f_2));
	BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_OUT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(300);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_10(var uParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
	END_SCALEFORM_MOVIE_METHOD();
}

void func_11(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	uParam0->f_1 = -1;
	BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SPLASH_TEXT_TRANSITION_IN");
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_12(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

var func_13()
{
	return REQUEST_SCALEFORM_MOVIE("SPLASH_TEXT");
}

