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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_160 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_137(&uScriptParam_0);
	}
	else
	{
		func_128();
	}
	while (true)
	{
		func_127();
		DISABLE_CONTROL_ACTION(2, 199, 1);
		DISABLE_CONTROL_ACTION(2, 200, 1);
		if (func_116())
		{
			func_128();
		}
		if (func_115())
		{
			func_128();
		}
		func_1();
	}
}

void func_1()
{
	func_109(0);
	SET_CINEMATIC_BUTTON_ACTIVE(0);
	switch (Local_160.f_16)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (IS_BIT_SET(Global_2506183, 1))
	{
		CLEAR_BIT(&Global_2506183, 1);
		func_96(Global_2506182);
	}
	if (Local_160.f_61 != Global_2506313)
	{
		Local_160.f_61 = { Global_2506313 };
	}
	else
	{
		Local_160.f_61.f_1 = 0;
		Local_160.f_61.f_2 = 0;
	}
	if (!IS_PAUSE_MENU_ACTIVE() && !func_95())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), IS_BIT_SET(Local_160.f_60, 3));
	func_3(&(Local_160.f_38), &(Local_160.f_39));
	CLEAR_BIT(&Global_2506183, 4);
	CLEAR_BIT(&(Local_160.f_60), 1);
	CLEAR_BIT(&(Local_160.f_60), 2);
	CLEAR_BIT(&(Local_160.f_60), 3);
	CLEAR_BIT(&(Local_160.f_60), 6);
	CLEAR_BIT(&(Local_160.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	
	func_9();
	vVar0 = { _GET_GAMEPLAY_CAM_COORDS() };
	if ((((IS_PAUSE_MENU_ACTIVE() || func_8()) || IS_CONTROL_JUST_PRESSED(2, 199)) || IS_CONTROL_PRESSED(2, 199)) || IS_CONTROL_JUST_RELEASED(2, 199))
	{
		_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
		_0xA17784FCA9548D15(vVar0.x, vVar0.y, 0);
		if (IS_PAUSE_MENU_ACTIVE() || func_8())
		{
			if (DOES_BLIP_EXIST(GET_MAIN_PLAYER_BLIP_ID()))
			{
				SET_BLIP_ALPHA(GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (DOES_BLIP_EXIST(GET_MAIN_PLAYER_BLIP_ID()))
	{
		SET_BLIP_ALPHA(GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
	uVar3 = GET_RENDERING_CAM();
	if (DOES_CAM_EXIST(uVar3))
	{
		_0x661B5C8654ADD825(uVar3, 1);
	}
	vVar4 = { _GET_GAMEPLAY_CAM_ROT_2(0) };
	vVar4 = { func_7(vVar4) };
	if (!DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = func_5(vVar0, 0);
		SET_BLIP_SPRITE(*uParam1, 425);
		_0x75A16C3DA34F1245(*uParam1, 0);
		SET_BLIP_DISPLAY(*uParam1, 4);
		SET_BLIP_COLOUR(*uParam1, func_4(2));
		SET_BLIP_SHOW_CONE(*uParam1, 1);
		SET_BLIP_SCALE(*uParam1, 0.54f);
		SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(vVar0, 0);
		SET_BLIP_SPRITE(*uParam0, 425);
		_0x75A16C3DA34F1245(*uParam0, 0);
		SET_BLIP_DISPLAY(*uParam0, 4);
		SET_BLIP_COLOUR(*uParam0, func_4(18));
		SET_BLIP_SHOW_CONE(*uParam0, 1);
		SET_BLIP_SCALE(*uParam0, 0.44f);
		SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		_0x54318C915D27E4CE(*uParam0, 1);
		SET_BLIP_ROTATION(*uParam0, ROUND(GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		_0x54318C915D27E4CE(*uParam1, 1);
		SET_BLIP_ROTATION(*uParam1, ROUND(GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
	}
	else
	{
		SET_BLIP_COORDS(*uParam0, vVar0);
		SET_BLIP_ROTATION(*uParam0, ROUND(GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		SET_BLIP_DISPLAY(*uParam0, 5);
		SET_BLIP_COORDS(*uParam1, vVar0);
		SET_BLIP_ROTATION(*uParam1, ROUND(GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_5(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(uVar0, func_6(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = COS(vParam0.x);
	vVar0.y = COS(vParam0.z);
	vVar0.z = SIN(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SIN(vParam0.z));
	return vVar0;
}

bool func_8()
{
	return GET_PAUSE_MENU_STATE() != 0;
}

void func_9()
{
	Global_1312666 = 1;
}

void func_10(var uParam0, bool bParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(uParam0))
		{
			CLEAR_HELP(1);
		}
		return;
	}
	if (!func_12(uParam0))
	{
		CLEAR_HELP(1);
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_12(var uParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()
{
	if (IS_BIT_SET(Global_2506183, 5))
	{
		CLEAR_BIT(&Global_2506183, 5);
		Local_160.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_160.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || _0x6CD79468A1E595C6(2)) || _0x6CD79468A1E595C6(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (IS_PC_VERSION())
	{
		if (UPDATE_ONSCREEN_KEYBOARD() == 0 || _NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17411.f_5026[iVar1], 1), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_17411.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_17411.f_5081 / 100f)));
			END_SCALEFORM_MOVIE_METHOD();
			if (IS_PC_VERSION())
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (GET_HASH_KEY(&(Global_17411.f_4964[iVar1 /*4*/])) != GET_HASH_KEY("PREV"))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_17(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == GET_HASH_KEY("PREV"))
					{
						func_17(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_16(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (IS_PC_VERSION())
					{
						if (Global_17411.f_5026[iVar1] != 359 && IS_BIT_SET(Global_17411.f_5052, iVar1))
						{
							SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17411.f_5026[iVar1]);
						}
						else
						{
							SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GET_HASH_KEY(&(Global_4267964.f_16)) != GET_HASH_KEY(""))
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17411.f_4769);
				func_17(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_16(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			END_SCALEFORM_MOVIE_METHOD();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
				if (bParam5)
				{
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				END_TEXT_COMMAND_SCALEFORM_STRING();
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
		SET_SCRIPT_GFX_ALIGN(76, 66);
		SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			RESET_HUD_COMPONENT_VALUES(15);
			Global_17411.f_8353 = 0;
		}
		RESET_SCRIPT_GFX_ALIGN();
		if (Global_17411.f_5055)
		{
			SET_SCRIPT_GFX_ALIGN(82, 66);
			SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			DRAW_SCALEFORM_MOVIE(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312745;
}

int func_21()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		vVar0 = { 0f, -500f, 0f };
		GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_22()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!IS_SCREEN_FADED_IN() || (func_25(8, -1) && func_24() != 64)) || (GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || SET_STORE_ENABLED()) || Global_71850) || Global_17411.f_8352) || IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1312802;
}

var func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17411.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17411.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17411.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		SET_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_29(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	CLEAR_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (IS_PC_VERSION())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		REQUEST_ADDITIONAL_TEXT(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_33()
{
	int iVar0;
	
	if (!IS_BIT_SET(Local_160.f_60, 7))
	{
		iVar0 = GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_160.f_56 != iVar0)
		{
			SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_160.f_56 = GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()
{
	if (IS_BIT_SET(Local_160.f_60, 6))
	{
		if (IS_BIT_SET(Local_160.f_60, 5))
		{
			func_36();
		}
	}
	else if (!IS_BIT_SET(Local_160.f_60, 5) && !IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(var uParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return;
	}
	if (IS_BIT_SET(Local_160.f_60, 5))
	{
	}
	else
	{
		_0x3D42B92563939375(uParam0);
		SET_BIT(&(Local_160.f_60), 5);
	}
}

void func_36()
{
	if (IS_BIT_SET(Local_160.f_60, 5))
	{
		_0x643ED62D5EA3BEBD();
		CLEAR_BIT(&(Local_160.f_60), 5);
	}
}

void func_37()
{
	vector3 vVar0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (IS_BIT_SET(Local_160.f_60, 1))
	{
		return;
	}
	if (!HAS_SCALEFORM_MOVIE_LOADED(Local_160.f_36))
	{
		Local_160.f_36 = REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		return;
	}
	vVar0 = { GET_CAM_ROT(Local_160, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_160.f_37)
			{
				Local_160.f_37 = 1;
				func_40(Local_160.f_36, Local_64.f_20);
				func_39(Local_160.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_160.f_36, 0f, GET_CAM_FOV(Local_160), Local_64.f_4, Local_64.f_5, vVar0.z);
			break;
	}
	SET_SCRIPT_GFX_DRAW_ORDER(0);
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_160.f_36, 255, 255, 255, 0, 0);
}

void func_38(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam5);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam3);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_40(var uParam0, var uParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_41()
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (Local_64.f_94 != 0)
	{
		Local_160.f_4 = { GET_ENTITY_COORDS(Local_64.f_95, 1) };
		Local_160.f_4.f_3 = { GET_ENTITY_ROTATION(Local_64.f_95, 2) };
	}
	if (!IS_BIT_SET(Local_160.f_60, 2))
	{
		Var0 = { func_46(Local_160, &(Local_160.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	vVar4 = { Local_64.f_91 + Local_160.f_1 };
	vVar7 = { func_45(Local_64.f_71, vVar4.z) };
	vVar10 = { Local_64.f_88 + vVar7 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_160, vVar10, vVar4);
			break;
		
		case 1:
			func_43(Local_160, vVar10, vVar4, Local_64.f_95);
			break;
	}
	func_42(Local_160.f_40, Local_160.f_40.f_2, Local_160.f_40.f_8, Local_160.f_40.f_3, Local_160.f_40.f_9, Local_160.f_40.f_4, Local_160.f_40.f_10, Local_160.f_40.f_5, Local_160.f_40.f_11, Local_160.f_40.f_6, Local_160.f_40.f_12, Local_160.f_40.f_7, Var0, Var0.f_1, Local_160.f_61.f_1, Local_160.f_61.f_2 > 0);
	Local_160.f_4.f_6 = { GET_CAM_COORD(Local_160) };
	Local_160.f_4.f_9 = { GET_CAM_ROT(Local_160, 2) };
}

void func_42(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, int iParam10, var uParam11, float fParam12, vector3 vParam13, int iParam16, bool bParam17)
{
	float fVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	float fVar4;
	
	if (IS_STRING_NULL_OR_EMPTY(uParam0) || REQUEST_SCRIPT_AUDIO_BANK(uParam0, 0, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (HAS_SOUND_FINISHED(iParam4))
				{
					PLAY_SOUND_FRONTEND(iParam4, uParam5, uParam1, 1);
				}
				SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
				}
				else
				{
					SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!HAS_SOUND_FINISHED(iParam4))
			{
				STOP_SOUND(iParam4);
			}
		}
		fVar0 = VMAG(vParam13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (HAS_SOUND_FINISHED(iParam2))
				{
					PLAY_SOUND_FRONTEND(iParam2, uParam3, uParam1, 1);
				}
				SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!HAS_SOUND_FINISHED(iParam2))
			{
				STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (HAS_SOUND_FINISHED(iParam6))
			{
				PLAY_SOUND_FRONTEND(iParam6, uParam7, uParam1, 1);
			}
		}
		uVar1 = PLAYER_PED_ID();
		if (IS_PED_IN_ANY_VEHICLE(uVar1, 0))
		{
			uVar2 = GET_VEHICLE_PED_IS_IN(uVar1, 0);
		}
		else
		{
			uVar2 = uVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam17;
			if (!bVar3)
			{
				fVar4 = TO_FLOAT(GET_ENTITY_MAX_HEALTH(uVar2));
				bVar3 = (IntToFloat(iParam16) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (HAS_SOUND_FINISHED(iParam8))
				{
					PLAY_SOUND_FRONTEND(iParam8, uParam9, uParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(GET_ENTITY_HEALTH(uVar1)) / TO_FLOAT(GET_ENTITY_MAX_HEALTH(uVar1))) < 0.15f || (IntToFloat(GET_ENTITY_HEALTH(uVar2)) / TO_FLOAT(GET_ENTITY_MAX_HEALTH(uVar2))) < 0.15f)
			{
				if (HAS_SOUND_FINISHED(iParam10))
				{
					PLAY_SOUND_FRONTEND(iParam10, uParam11, uParam1, 1);
				}
			}
			else if (!HAS_SOUND_FINISHED(iParam10))
			{
				STOP_SOUND(iParam10);
			}
		}
	}
}

void func_43(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	ATTACH_CAM_TO_ENTITY(uParam0, uParam7, vParam1, 1);
	SET_CAM_ROT(uParam0, vParam4 + GET_ENTITY_ROTATION(uParam7, 2), 2);
}

void func_44(var uParam0, vector3 vParam1, vector3 vParam4)
{
	SET_CAM_COORD(uParam0, vParam1);
	SET_CAM_ROT(uParam0, vParam4, 2);
}

Vector3 func_45(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SIN(uParam3);
	fVar4 = COS(uParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<4> func_46(var uParam0, var uParam1, struct<6> Param2, float fParam8, float fParam9)
{
	float fVar0;
	struct<4> Var1;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	vector3 vVar19;
	bool bVar22;
	
	fVar0 = GET_CAM_FOV(uParam0);
	Var1 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar5 = GET_DISABLED_CONTROL_NORMAL(0, 39);
	vVar6 = { -Vector(_0x4F8A26A890FD62FB(0, 290), 0f, _0x4F8A26A890FD62FB(0, 291)) };
	if (_IS_INPUT_DISABLED(2))
	{
		fParam8 = (fParam8 * 8f);
	}
	else
	{
		if (ABSF(fVar5) < 0.06f)
		{
			fVar5 = 0f;
		}
		if (VMAG(vVar6) < 0.06f)
		{
			vVar6 = { 0f, 0f, 0f };
		}
	}
	fVar9 = GET_FRAME_TIME();
	fVar10 = func_49((fVar0 + ((fVar5 * fParam9) * fVar9)), Param2.f_4, Param2.f_5);
	SET_CAM_FOV(uParam0, fVar10);
	SET_CAM_NEAR_CLIP(uParam0, 0.01f);
	fVar11 = ((fVar10 - 5f) / 42f);
	CUSTOM_MENU_COORDINATES(1f);
	_0xE2892E7E55D7073A(fVar11);
	vVar12.x = Param2.f_2;
	vVar12.y = 0f;
	vVar12.z = Param2;
	vVar15.x = Param2.f_3;
	vVar15.y = 0f;
	vVar15.z = Param2.f_1;
	fVar18 = (((fVar9 * fVar10) * fParam8) * (1f + ((fVar10 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	vVar19 = { vVar6 };
	vVar19.z = (vVar19.z * fVar18);
	vVar19.x = (vVar19.x * fVar18);
	*uParam1 = { *uParam1 + vVar19 };
	bVar22 = vVar12.z > vVar15.z;
	if (bVar22)
	{
		*uParam1 = func_49(*uParam1, vVar12.x, vVar15.x);
		uParam1->f_1 = func_49(uParam1->f_1, vVar12.y, vVar15.y);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, vVar12, vVar15) };
	}
	Var1 = (Var1 + fVar10);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vParam0.x = func_49(vParam0.x, vParam3.x, vParam6.x);
	vParam0.y = func_49(vParam0.y, vParam3.y, vParam6.y);
	vParam0.z = func_49(vParam0.z, vParam3.z, vParam6.z);
	return vParam0;
}

float func_48(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_49(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_50()
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()
{
	var uVar0;
	var uVar3;
	vector3 vVar6;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
	{
		if (!Local_160.f_29.f_5)
		{
			Local_160.f_29.f_5 = 1;
		}
		if (!func_65(3, 0f, 0f, 0f, Local_160.f_4.f_6, 0f, 0f, 0f, 0))
		{
			if (func_64())
			{
				PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_160.f_29)
	{
		if (IS_SCREEN_FADED_OUT())
		{
			if (Local_160.f_29.f_1)
			{
				if (func_62(PLAYER_ID()))
				{
					DO_SCREEN_FADE_IN(250);
					PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Local_160.f_29.f_2, Local_160.f_40.f_13, 1, 500, 0);
					Local_160.f_29.f_1 = 0;
					Local_160.f_29 = 0;
				}
			}
			else
			{
				Local_160.f_29.f_1 = 1;
				func_61(&(Local_160.f_17), 0, 0);
				SET_BIT(&Global_2506183, 0);
				func_58(3f, 100f, &(Local_160.f_29.f_2), &uVar0, &uVar3, &vVar6);
				func_57(1);
				func_55(Local_160.f_29.f_2, vVar6);
			}
		}
	}
	if (func_54() || Local_160.f_29)
	{
		SET_BIT(&(Local_160.f_60), 1);
		SET_BIT(&(Local_160.f_60), 2);
		SET_BIT(&(Local_160.f_60), 3);
		if (!Local_160.f_29)
		{
			SET_BIT(&(Local_160.f_60), 6);
			SET_BIT(&(Local_160.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			Local_160.f_29 = 1;
			DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

var func_54()
{
	return IS_BIT_SET(Global_1681628, 5);
}

void func_55(vector3 vParam0, vector3 vParam3)
{
	if (!func_56(Global_1681628.f_11, vParam0, 0))
	{
		Global_1681628.f_11 = { vParam0 };
		vParam3 = { vParam3 + Vector(0f, -180f, 180f) };
		Global_1681628.f_14 = { vParam3 };
	}
}

bool func_56(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1681628.f_2, 4))
		{
			Global_1681628.f_2 = 0;
			SET_BIT(&(Global_1681628.f_2), 4);
		}
	}
	else if (IS_BIT_SET(Global_1681628.f_2, 4))
	{
		CLEAR_BIT(&(Global_1681628.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { GET_CAM_ROT(Local_160, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_160.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		vVar0 = { func_7(GET_CAM_ROT(Local_160, 2)) };
		vVar3 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_64.f_95, Local_64.f_88) };
		vVar6 = { _0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[0]) };
		vVar9 = { vVar6 - vVar3 };
		*uParam2 = { vVar6 };
		iVar12 = 0;
		fVar13 = func_59(vVar9, vVar0);
		iVar14 = 1;
		while (iVar14 <= (Local_64.f_74 - 1))
		{
			vVar6 = { _0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[iVar14]) };
			vVar9 = { vVar6 - vVar3 };
			fVar15 = func_59(vVar9, vVar0);
			if (fVar15 > fVar13)
			{
				fVar13 = fVar15;
				iVar12 = iVar14;
				*uParam2 = { vVar6 };
			}
			iVar14++;
		}
		*uParam5 = { _0xCE6294A232D03786(Local_64.f_95, Local_64.f_74.f_1[iVar12]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_60(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { _GET_GAMEPLAY_CAM_ROT_2(2) };
	vVar3 = { func_7(vVar0) };
	return vParam0 + Vector(fParam3, fParam3, fParam3) * vVar3;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_62(int iParam0)
{
	if (iParam0 != func_63())
	{
		return IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_328, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (IS_BIT_SET(Global_2506183, 4) || IS_DISABLED_CONTROL_JUST_PRESSED(0, 229));
}

int func_65(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	struct<12> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!IS_THREAD_ACTIVE(uLocal_50) && !HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221))
	{
		REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221) && !IS_THREAD_ACTIVE(uLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0 = 0;
		Var0.f_2 = { vParam1 };
		Var0.f_5 = { vParam4 };
		Var0.f_8 = { vParam7 };
		Var0.f_1 = iParam0;
		Var0.f_11 = iParam10;
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
		{
			if (!NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0, 1, 0))
			{
				uLocal_50 = START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(588062221, &Var0, 12, 1424);
				SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(588062221);
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (IS_THREAD_ACTIVE(uLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				SET_BIT(&Global_1681628, 0);
			}
		}
	}
	else if (func_69())
	{
		CLEAR_BIT(&Global_1681628, 0);
	}
}

void func_67(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)
{
	return uParam0->f_1;
}

bool func_69()
{
	return IS_BIT_SET(Global_1681628, 0);
}

void func_70()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	func_77();
	if (Local_160.f_22 != -1)
	{
		bVar0 = func_52(&(Local_160.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (IS_ENTITY_A_VEHICLE(Local_160.f_22.f_4))
			{
				uVar2 = GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_160.f_22.f_4);
				unk_0x880001F3CD093B94(uVar2, 2);
			}
			func_76(&(Local_160.f_22.f_5));
			func_75(&(Local_160.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (IS_ENTITY_A_VEHICLE(Local_160.f_22.f_4))
			{
				uVar3 = GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_160.f_22.f_4);
				unk_0x880001F3CD093B94(uVar3, 1);
			}
			func_75(&(Local_160.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_160.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !HAS_MODEL_LOADED(Local_64.f_16))
			{
				PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_160.f_17), 0, 0);
				func_71(1f, &vVar4, &vVar7);
				_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar4, vVar7, Local_64.f_8.f_3, 1, Local_64.f_8, PLAYER_PED_ID(), 1, 1, -1082130432, Local_64.f_95, 0, 0, Local_160.f_22, 1, 0, Local_64.f_94 != 0);
				PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, vVar4, Local_160.f_40.f_13, 1, 500, 0);
			}
			else
			{
				PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (!HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	SET_SCRIPT_GFX_DRAW_ORDER(1);
	vVar2 = { GET_ENTITY_COORDS(uParam0, 1) };
	SET_DRAW_ORIGIN(vVar2, 0);
	fVar0 = func_74(uParam0, Local_160, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * _GET_ASPECT_RATIO(0));
	GET_HUD_COLOUR(iParam2, &uVar5, &uVar6, &uVar7, &uVar8);
	uVar9 = func_73((bParam1 && (GET_GAME_TIMER() % 300) < 150), CEIL((TO_FLOAT(uVar8) / 4f)), uVar8);
	DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar5, uVar6, uVar7, uVar9, 0);
	CLEAR_DRAW_ORIGIN();
}

var func_73(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

float func_74(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	vVar0 = { GET_CAM_COORD(uParam1) };
	vVar3 = { GET_ENTITY_COORDS(uParam0, 1) };
	fVar6 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, 1);
	fVar7 = GET_CAM_FOV(uParam1);
	fVar8 = 1f;
	fVar9 = (fVar8 / TAN((fVar7 / 2f)));
	fVar10 = ((fVar9 * fParam2) / fVar6);
	return fVar10;
}

void func_75(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GET_SOUND_ID();
		PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, iParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		STOP_SOUND(*uParam0);
		RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_160.f_22.f_1), Local_160.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_160.f_22 != Local_160.f_22.f_4)
			{
				func_61(&(Local_160.f_22.f_2), 0, 0);
				func_76(&(Local_160.f_22.f_5));
				func_76(&(Local_160.f_22.f_6));
			}
			Local_160.f_22 = Local_160.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_160.f_22.f_4 = uVar1;
		}
		if (Local_160.f_22.f_4 != -1)
		{
			func_79(Local_160.f_22.f_4);
		}
	}
	if (Local_160.f_22 != -1)
	{
		if (((Local_160.f_22.f_4 != Local_160.f_22 || IS_ENTITY_DEAD(Local_160.f_22, 0)) || func_78(Local_160.f_22) > 0.04f) || VMAG(GET_ENTITY_COORDS(Local_160.f_22, 1) - Local_160.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	if (!GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &vVar0, &(vVar0.f_1)))
	{
		return 1f;
	}
	vVar0 = { vVar0 - Vector(0f, 0.5f, 0.5f) };
	vVar0.z = 0f;
	return VMAG2(vVar0);
}

void func_79(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { GET_CAM_COORD(Local_160) };
	vVar3 = { GET_ENTITY_COORDS(uParam0, 1) };
	vVar3 = { vVar3 + Vector(2f, 2f, 2f) * func_80(vVar3 - vVar0) };
	Local_160.f_22.f_1 = START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 4);
	if (Local_160.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_81(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	float fVar9;
	var uVar10;
	var uVar11;
	
	iVar0 = GET_PLAYER_TEAM(PLAYER_ID());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		uVar8 = GET_PLAYER_PED(iVar7);
		if (((!NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && GET_PLAYER_TEAM(iVar7) == iVar0)) || VMAG2(Local_160.f_4.f_6 - GET_ENTITY_COORDS(uVar8, 1)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(uVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		uVar10 = GET_PLAYER_PED(iVar2);
		if (IS_PED_IN_ANY_VEHICLE(uVar10, 0))
		{
			uVar11 = GET_VEHICLE_PED_IS_IN(uVar10, 0);
			if (!IS_ENTITY_DEAD(uVar11, 0))
			{
				return uVar11;
			}
		}
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	Local_160.f_22 = -1;
	Local_160.f_22.f_4 = -1;
	func_76(&(Local_160.f_22.f_5));
	func_76(&(Local_160.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	var uVar9;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar8 = GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar4, &uVar1, &iVar7);
	if (!IS_ENTITY_A_VEHICLE(iVar7))
	{
		if (IS_ENTITY_A_PED(iVar7))
		{
			uVar9 = GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
			if (IS_PED_IN_ANY_VEHICLE(uVar9, 0))
			{
				iVar7 = GET_VEHICLE_PED_IS_IN(uVar9, 0);
			}
		}
	}
	if (iVar8 == 2)
	{
		if (iVar0 != 0)
		{
			if (DOES_ENTITY_EXIST(iVar7))
			{
				*uParam2 = (iParam1 == iVar7 && !IS_ENTITY_DEAD(iVar7, 0));
			}
		}
		return 1;
	}
	else if (iVar8 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	vector3 vVar15;
	vector3 vVar18;
	
	SET_PED_RESET_FLAG(PLAYER_PED_ID(), 452, 1);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_94(&(Local_160.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_160.f_19.f_2);
		}
		func_91(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
	}
	if (bVar0 && !bVar1)
	{
		if (IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_160.f_19.f_2 = (Local_160.f_19.f_2 + ROUND((GET_FRAME_TIME() * 1000f)));
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_160.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_160.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_160.f_19), 0, 0);
				Local_160.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &vVar6, &vVar9, &uVar12, &vVar15);
			vVar18 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			vVar18.y = 0f;
			vVar15 = { vVar15 + vVar18 };
			vVar9 = { vVar6 + FtoV(VMAG(vVar9 - vVar6)) * func_7(vVar15) };
			vVar6.z = (vVar6.z - 1f);
			_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar6, vVar9, Local_64.f_8.f_3, 0, Local_64.f_8, PLAYER_PED_ID(), 1, 1, -1082130432, Local_64.f_95, 0, 0, 0, 1, 0, Local_64.f_94 != 0);
			if (Local_160.f_40.f_13.f_2 != -1 && HAS_SOUND_FINISHED(Local_160.f_40.f_13.f_2))
			{
				PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, vVar6, Local_160.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_160.f_40.f_13.f_2 != -1 && !HAS_SOUND_FINISHED(Local_160.f_40.f_13.f_2))
	{
		STOP_SOUND(Local_160.f_40.f_13.f_2);
	}
}

Vector3 func_86(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	
	fVar3 = (fParam3 * fParam3);
	iVar4 = 0;
	while (iVar4 < 20)
	{
		vVar0 = { GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3) };
		if (VDIST2(vVar0, 0f, 0f, 0f) <= fVar3)
		{
			return vParam0 + vVar0;
		}
		iVar4++;
	}
	return func_87(vParam0, fParam3);
}

Vector3 func_87(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + func_88(vVar0, GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_88(vector3 vParam0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

var func_89()
{
	return (IS_BIT_SET(Global_2506183, 4) || IS_DISABLED_CONTROL_PRESSED(0, 229));
}

void func_90()
{
	func_61(&(Local_160.f_19), 0, 0);
	Local_160.f_19.f_2 = 0;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_93(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_92(0, iVar0);
		Global_1373453.f_1114[iVar0] = iParam0;
		Global_1373453.f_1114.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1373453.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_1114.f_194[iVar0] = iParam3;
		Global_1373453.f_1114.f_183[iVar0] = iParam4;
		Global_1373453.f_1114.f_216[iVar0] = iParam5;
		Global_1373453.f_1114.f_227[iVar0 /*3*/] = iParam6;
		Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1373453.f_1114.f_258[iVar0] = iParam8;
		Global_1373453.f_1114.f_269[iVar0] = iParam9;
		Global_1373453.f_1114.f_312[iVar0] = iParam10;
		Global_1373453.f_1114.f_323[iVar0] = iParam11;
		Global_1373453.f_1114.f_334[iVar0] = iParam12;
		Global_1373453.f_1114.f_345[iVar0] = iParam13;
		Global_1373453.f_1109 = 1;
		Global_1373453.f_1114.f_356[iVar0] = iParam14;
		Global_1373453.f_1114.f_367[iVar0] = iParam15;
		Global_1373453.f_1114.f_378[iVar0] = iParam16;
		Global_1373453.f_1114.f_389[iVar0] = iParam17;
		Global_1373453.f_1114.f_400[iVar0] = iParam18;
		Global_1373453.f_1114.f_411[iVar0] = iParam19;
		Global_1373453.f_1114.f_422[iVar0] = iParam20;
		Global_1373453.f_1114.f_433[iVar0] = iParam21;
		Global_1373453.f_1114.f_444[iVar0] = iParam22;
		Global_1373453.f_1114.f_455[iVar0] = iParam23;
		Global_1373453.f_1114.f_466[iVar0] = iParam24;
		Global_1373453.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_92(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_93(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

var func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return GET_TIME_DIFFERENCE(GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0);
}

bool func_95()
{
	return Global_68807;
}

void func_96(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&uVar0, 2))
	{
		func_61(&(Local_160.f_17), 0, 0);
		Local_64.f_8 = { Global_2506095.f_8 };
	}
	if (func_102(&uVar0, 6))
	{
		Local_64.f_19 = Global_2506095.f_19;
	}
	if (func_102(&uVar0, 10))
	{
		Local_64.f_74 = { Global_2506095.f_74 };
	}
	if (func_102(&uVar0, 8))
	{
		Local_64.f_67 = { Global_2506095.f_67 };
	}
	if (func_102(&uVar0, 12))
	{
		Local_64.f_20 = { Global_2506095.f_20 };
	}
	func_97(iParam0);
}

void func_97(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (func_102(&uVar0, 0))
	{
	}
	if (func_102(&uVar0, 1))
	{
	}
	if (func_102(&uVar0, 2))
	{
		Local_64.f_8 = { Global_2506095.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				_0x27E32866E9A5C416(1.5f);
				if (Local_160.f_19.f_2 == 0 && func_101())
				{
					func_98(&(Local_160.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2506095.f_16;
				if (Local_64.f_16 != 0)
				{
					REQUEST_MODEL(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			REQUEST_STREAMED_TEXTURE_DICT(Local_64.f_86, 0);
		}
	}
	if (func_102(&uVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!IS_STRING_NULL_OR_EMPTY(Local_64.f_86.f_1))
		{
			Local_160.f_36 = REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		}
	}
	if (func_102(&uVar0, 6))
	{
		Local_160.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = GET_SOUND_ID();
				break;
			
			case 1:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = GET_SOUND_ID();
				break;
			
			case 2:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_160.f_40.f_13.f_2 = GET_SOUND_ID();
				break;
			
			case 3:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_160.f_40.f_13.f_2 = GET_SOUND_ID();
				break;
			
			default:
				Local_160.f_40.f_13 = 0;
				Local_160.f_40.f_13.f_1 = 0;
				Local_160.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&uVar0, 5))
	{
		Local_160.f_40.f_10 = -1;
		Local_160.f_40.f_8 = -1;
		Local_160.f_40.f_9 = -1;
		Local_160.f_40.f_11 = -1;
		Local_160.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = GET_SOUND_ID();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = GET_SOUND_ID();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = GET_SOUND_ID();
				break;
			
			case 1:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = GET_SOUND_ID();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = GET_SOUND_ID();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = GET_SOUND_ID();
				Local_160.f_40.f_6 = "Take_Damage";
				Local_160.f_40.f_11 = GET_SOUND_ID();
				Local_160.f_40.f_7 = "Low_Health_Warning";
				Local_160.f_40.f_12 = GET_SOUND_ID();
				break;
			
			default:
				Local_160.f_40 = 0;
				Local_160.f_40.f_2 = 0;
				Local_160.f_40.f_5 = 0;
				Local_160.f_40.f_10 = -1;
				Local_160.f_40.f_3 = 0;
				Local_160.f_40.f_8 = -1;
				Local_160.f_40.f_4 = 0;
				Local_160.f_40.f_9 = -1;
				break;
		}
		if (!IS_STRING_NULL_OR_EMPTY(Local_160.f_40))
		{
			HINT_SCRIPT_AUDIO_BANK(Local_160.f_40, 0, -1);
		}
	}
	if (func_102(&uVar0, 3))
	{
	}
	if (func_102(&uVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_102(&uVar0, 8))
	{
	}
	if (func_102(&uVar0, 9))
	{
	}
	if (func_102(&uVar0, 10))
	{
	}
	if (func_102(&uVar0, 11))
	{
		if (!IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&uVar0, 12))
	{
	}
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = GET_TIME_OFFSET(func_100(bParam2, bParam3), func_99(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_99(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_100(bool bParam0, bool bParam1)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return GET_NETWORK_TIME();
		}
		else
		{
			return GET_NETWORK_TIME_ACCURATE();
		}
	}
	return GET_GAME_TIMER();
}

bool func_101()
{
	return (!func_68(&(Local_160.f_19)) || func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
}

int func_102(var uParam0, int iParam1)
{
	if (IS_BIT_SET(*uParam0, iParam1))
	{
		CLEAR_BIT(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_103(int iParam0)
{
	if (func_102(&iParam0, 0))
	{
	}
	if (func_102(&iParam0, 1))
	{
	}
	if (func_102(&iParam0, 2))
	{
		Local_160.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				_0x27E32866E9A5C416(1f);
				break;
			
			case 3:
				if (Local_160.f_29)
				{
					DO_SCREEN_FADE_IN(250);
				}
				Local_160.f_29.f_1 = 0;
				Local_160.f_29 = 0;
				if (Local_160.f_29.f_5)
				{
					Local_160.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					SET_MODEL_AS_NO_LONGER_NEEDED(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&iParam0, 3))
	{
	}
	if (func_102(&iParam0, 4))
	{
		Local_160.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_160.f_36 != -1)
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_160.f_36));
			Local_160.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		func_76(&(Local_160.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		STOP_AUDIO_SCENES();
		_0x9AC92EED5E4793AB();
		if (!IS_STRING_NULL_OR_EMPTY(Local_160.f_40))
		{
			RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_160.f_40);
		}
		func_76(&(Local_160.f_40.f_8));
		func_76(&(Local_160.f_40.f_9));
		func_76(&(Local_160.f_40.f_10));
		func_76(&(Local_160.f_40.f_11));
		func_76(&(Local_160.f_40.f_12));
	}
	if (func_102(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_104(1, -1);
		}
	}
	if (func_102(&iParam0, 8))
	{
		if (!IS_STRING_NULL_OR_EMPTY(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			CLEAR_HELP(1);
		}
	}
	if (func_102(&iParam0, 9))
	{
	}
	if (func_102(&iParam0, 10))
	{
	}
	if (func_102(&iParam0, 11))
	{
		if (!IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&iParam0, 12))
	{
		Local_160.f_37 = 0;
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		RESET_HUD_COMPONENT_VALUES(15);
		Global_17411.f_8353 = 0;
	}
	_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17411.f_5628[iVar0])
	{
		CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_105(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_106()
{
	if ((!IS_SCREEN_FADING_OUT() && !IS_SCREEN_FADED_OUT()) && IS_BIT_SET(Local_64.f_84.f_1, 1))
	{
		DO_SCREEN_FADE_OUT(Local_64.f_84);
	}
	if (func_52(&(Local_160.f_58), Local_64.f_84, 0))
	{
		if (!IS_BIT_SET(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!DOES_CAM_EXIST(Local_160))
			{
				Local_160 = CREATE_CAMERA(26379945, 1);
				SET_BIT(&(Local_160.f_60), 2);
				func_41();
				CLEAR_BIT(&(Local_160.f_60), 2);
				unk_0x70A382ADEC069DD3(Local_160.f_4.f_6);
			}
			else
			{
				if (IS_BIT_SET(Local_64.f_84.f_1, 0))
				{
					NEW_LOAD_SCENE_STOP();
				}
				RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
				func_3(&(Local_160.f_38), &(Local_160.f_39));
				func_37();
				if (!IS_STRING_NULL_OR_EMPTY(Local_160.f_40.f_1))
				{
					START_AUDIO_SCENE(Local_160.f_40.f_1);
				}
				func_61(&(Local_160.f_17), 0, 0);
				SET_BIT(&Global_2506183, 3);
				func_107(1);
				if (GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_160.f_57 = 1;
					PUSH_TIMECYCLE_MODIFIER();
				}
				SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_160.f_56 = GET_TIMECYCLE_MODIFIER_INDEX();
				if (IS_BIT_SET(Local_64.f_84.f_1, 2))
				{
					if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADED_OUT())
					{
						DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_107(int iParam0)
{
	Local_160.f_16 = iParam0;
}

int func_108(vector3 vParam0, int iParam3)
{
	if (IS_BIT_SET(Local_160.f_60, 0))
	{
		if (IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (NEW_LOAD_SCENE_START_SPHERE(vParam0, 100f, iParam3))
	{
		SET_BIT(&(Local_160.f_60), 0);
	}
	return 0;
}

void func_109(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_110(int iParam0)
{
	if (func_114())
	{
		return;
	}
	if (Global_14725)
	{
		func_112(0, 0);
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
	if (!func_111())
	{
		Global_14553.f_1 = 3;
	}
}

int func_111()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
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

int func_113(int iParam0)
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

bool func_114()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_115()
{
	if (Local_64.f_94 != 0)
	{
		if (!DOES_ENTITY_EXIST(Local_64.f_95) || IS_ENTITY_DEAD(Local_64.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_82(PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2506093)
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	var uVar0;
	
	func_124(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(157))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_119())
	{
		case 0:
			return func_118();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()
{
	return Global_25765;
}

bool func_120()
{
	return Global_2448756.f_586;
}

int func_121(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2458613;
}

bool func_123()
{
	return Global_2448756.f_581;
}

void func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_125(iVar0);
					break;
				
				case -42615386:
					GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_82(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_126(uVar4, &bVar5))
						{
							REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_126(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(uParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	WAIT(0);
}

void func_128()
{
	var uVar0;
	var uVar1;
	
	if (Local_160.f_16 == 0 && IS_BIT_SET(Local_64.f_84.f_1, 1))
	{
		DO_SCREEN_FADE_IN(250);
	}
	func_103(-1);
	if (func_136())
	{
		func_135(0);
	}
	SET_CINEMATIC_BUTTON_ACTIVE(1);
	UNLOCK_MINIMAP_ANGLE();
	UNLOCK_MINIMAP_POSITION();
	uVar0 = PLAYER_PED_ID();
	if (func_134(uVar0) && IS_PED_IN_ANY_VEHICLE(uVar0, 1))
	{
		uVar1 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
		{
			SET_VEHICLE_RADIO_ENABLED(uVar1, 1);
			func_132(1);
		}
	}
	if (IS_BIT_SET(Local_160.f_60, 4))
	{
		func_131();
	}
	unk_0x7148E0F43D11F0D9();
	CLEAR_TIMECYCLE_MODIFIER();
	if (Local_160.f_57)
	{
		POP_TIMECYCLE_MODIFIER();
	}
	func_130(Local_160.f_38);
	func_130(Local_160.f_39);
	Global_2506082 = 0;
	Global_2506183 = 0;
	func_129();
}

void func_129()
{
	TERMINATE_THIS_THREAD();
}

void func_130(var uParam0)
{
	if (DOES_BLIP_EXIST(uParam0))
	{
		REMOVE_BLIP(&uParam0);
	}
}

void func_131()
{
	Global_2437364.f_1155.f_10 = 0;
}

void func_132(int iParam0)
{
	var uVar0;
	
	if (Global_2405071.f_2677 == 1)
	{
		Global_2405071.f_2677 = 0;
		return;
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (!Global_2405071.f_2679.f_1)
		{
			if (!Global_2405071.f_2675 == -1)
			{
				if (((Global_2405071.f_2675 < 255 && !func_133()) && !IS_BIT_SET(Global_4456448.f_161247, 0)) && !(AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2405071.f_2676 == 0 && iParam0 == 0)))
				{
					SET_RADIO_TO_STATION_INDEX(Global_2405071.f_2675);
				}
				else if (Global_2405071.f_2675 >= 255)
				{
					SET_RADIO_TO_STATION_NAME("OFF");
					uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
					if (DOES_ENTITY_EXIST(uVar0))
					{
						if (NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
						{
							SET_VEH_RADIO_STATION(uVar0, "OFF");
						}
					}
				}
			}
			Global_2405071.f_2675 = -1;
			Global_2405071.f_2679.f_1 = 1;
		}
	}
}

bool func_133()
{
	return Global_1624809;
}

int func_134(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(int iParam0)
{
	Global_2460889 = iParam0;
}

bool func_136()
{
	return Global_2460889;
}

void func_137(var uParam0)
{
	SET_BIT(&Global_2506183, 2);
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		func_155(0, -1, 0);
	}
	else
	{
		func_128();
	}
	func_138(uParam0);
}

void func_138(var uParam0)
{
	var uVar0;
	var uVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_160.f_22.f_4 = -1;
	uVar0 = PLAYER_PED_ID();
	if (func_134(uVar0) && IS_PED_IN_ANY_VEHICLE(uVar0, 1))
	{
		uVar1 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
		{
			func_154(1);
			SET_VEHICLE_RADIO_ENABLED(uVar1, 0);
		}
	}
	if (!func_153())
	{
		SET_BIT(&(Local_160.f_60), 4);
		func_152();
	}
	func_139();
}

void func_139()
{
	if (!IS_BIT_SET(Global_2506181, 0))
	{
		func_151(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!IS_BIT_SET(Global_2506181, 1))
	{
		func_150(1058642330, 1101004800);
	}
	if (!IS_BIT_SET(Global_2506181, 2))
	{
		func_149();
	}
	if (!IS_BIT_SET(Global_2506181, 3))
	{
		func_147(1, 1, 0, 500);
	}
	if (!IS_BIT_SET(Global_2506181, 4))
	{
		func_146(0);
	}
	if (!IS_BIT_SET(Global_2506181, 5))
	{
		func_145(0);
	}
	if (!IS_BIT_SET(Global_2506181, 6))
	{
		func_144(0);
	}
	if (!IS_BIT_SET(Global_2506181, 7))
	{
		SET_BIT(&Global_2506181, 7);
		Global_2506095.f_24 = 0;
	}
	if (!IS_BIT_SET(Global_2506181, 8))
	{
		func_143(0);
	}
	if (!IS_BIT_SET(Global_2506181, 9))
	{
		func_142(0f, 0f, 0f);
	}
	if (!IS_BIT_SET(Global_2506181, 10))
	{
		SET_BIT(&Global_2506181, 10);
		Global_2506095.f_74 = 0;
	}
	if (!IS_BIT_SET(Global_2506181, 11))
	{
		func_141(0);
	}
	if (!IS_BIT_SET(Global_2506181, 12))
	{
		func_140(1, 3, 3, 3);
	}
	Local_64 = { Global_2506095 };
	func_97(Global_2506181);
	func_107(0);
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	SET_BIT(&Global_2506181, 12);
	Global_2506095.f_20 = iParam0;
	Global_2506095.f_20.f_1 = iParam1;
	Global_2506095.f_20.f_2 = iParam2;
	Global_2506095.f_20.f_3 = iParam3;
}

void func_141(char* sParam0)
{
	SET_BIT(&Global_2506181, 11);
	StringCopy(&(Global_2506095.f_80), sParam0, 16);
}

void func_142(vector3 vParam0)
{
	SET_BIT(&Global_2506181, 9);
	Global_2506095.f_71 = { vParam0 };
}

void func_143(char* sParam0)
{
	SET_BIT(&Global_2506181, 8);
	StringCopy(&(Global_2506095.f_67), sParam0, 16);
}

void func_144(int iParam0)
{
	SET_BIT(&Global_2506181, 6);
	Global_2506095.f_19 = iParam0;
}

void func_145(int iParam0)
{
	SET_BIT(&Global_2506181, 5);
	Global_2506095.f_18 = iParam0;
}

void func_146(int iParam0)
{
	SET_BIT(&Global_2506181, 4);
	Global_2506095.f_17 = iParam0;
}

void func_147(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	SET_BIT(&Global_2506181, 3);
	Global_2506095.f_84 = iParam3;
	func_148(&(Global_2506095.f_84.f_1), 1, bParam0);
	func_148(&(Global_2506095.f_84.f_1), 2, bParam1);
	func_148(&(Global_2506095.f_84.f_1), 0, bParam2);
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		SET_BIT(uParam0, iParam1);
	}
	else
	{
		CLEAR_BIT(uParam0, iParam1);
	}
}

void func_149()
{
	SET_BIT(&Global_2506181, 2);
	Global_2506095.f_8.f_1 = 0;
}

void func_150(int iParam0, int iParam1)
{
	SET_BIT(&Global_2506181, 1);
	Global_2506095.f_6.f_1 = iParam0;
	Global_2506095.f_6 = iParam1;
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	SET_BIT(&Global_2506181, 0);
	Global_2506095 = iParam0;
	Global_2506095.f_1 = iParam1;
	Global_2506095.f_2 = iParam2;
	Global_2506095.f_3 = iParam3;
	Global_2506095.f_4 = iParam4;
	Global_2506095.f_5 = iParam5;
}

void func_152()
{
	Global_2437364.f_1155.f_10 = 1;
}

bool func_153()
{
	return Global_2437364.f_1155.f_10;
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405071.f_2678;
	if ((AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2405071.f_2676 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405071.f_2675)
	{
		if (!IS_RADIO_RETUNING())
		{
			Global_2405071.f_2675 = iVar0;
		}
	}
}

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_123())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(155))
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_129();
				}
				else
				{
					return 0;
				}
			}
		}
		WAIT(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_129();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_156()
{
	return Global_1312844;
}

