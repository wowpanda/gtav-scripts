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
	int iLocal_50 = 0;
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
	struct<62> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_131(&uScriptParam_68);
	}
	else
	{
		func_122();
	}
	while (true)
	{
		func_121();
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (func_111())
		{
			func_122();
		}
		if (func_110())
		{
			func_122();
		}
		func_1();
	}
}

void func_1()//Position - 0xBA
{
	func_104(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	switch (Local_65.f_10)
	{
		case 0:
			func_101();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0xEF
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D8, 1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_2635D8, 1);
		func_95(Global_2635D7);
	}
	if (Local_65.f_3D != Global_26365A)
	{
		Local_65.f_3D = { Global_26365A };
	}
	else
	{
		Local_65.f_3D.f_1 = 0;
		Local_65.f_3D.f_2 = 0;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_94())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_43), INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 3));
	func_3(&(Local_65.f_26), &(Local_65.f_27));
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_2635D8, 4);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 1);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 2);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 3);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 6);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 7);
}

void func_3(var uParam0, var uParam1)//Position - 0x1B9
{
	vector3 vVar0;
	int iVar1;
	vector3 vVar2;
	
	func_9();
	vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_8()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
		unk_0xFED8C1D3BF23F411(vVar0.x, vVar0.y, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_8())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
	{
		HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
	iVar1 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::_0x661B5C8654ADD825(iVar1, 1);
	}
	vVar2 = { CAM::_GET_GAMEPLAY_CAM_ROT_2(0) };
	vVar2 = { func_7(vVar2) };
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = func_5(vVar0, 0);
		HUD::SET_BLIP_SPRITE(*uParam1, 425);
		HUD::_0x75A16C3DA34F1245(*uParam1, false);
		HUD::SET_BLIP_DISPLAY(*uParam1, 4);
		HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
		HUD::SET_BLIP_SHOW_CONE(*uParam1, true);
		HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(vVar0, 0);
		HUD::SET_BLIP_SPRITE(*uParam0, 425);
		HUD::_0x75A16C3DA34F1245(*uParam0, false);
		HUD::SET_BLIP_DISPLAY(*uParam0, 4);
		HUD::SET_BLIP_COLOUR(*uParam0, func_4(18));
		HUD::SET_BLIP_SHOW_CONE(*uParam0, true);
		HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
		HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		HUD::_0x54318C915D27E4CE(*uParam0, 1);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y)));
		HUD::_0x54318C915D27E4CE(*uParam1, 1);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y)));
	}
	else
	{
		HUD::SET_BLIP_COORDS(*uParam0, vVar0);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y)));
		HUD::SET_BLIP_DISPLAY(*uParam0, 5);
		HUD::SET_BLIP_COORDS(*uParam1, vVar0);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y)));
		HUD::SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

int func_4(int iParam0)//Position - 0x3C7
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
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_5(vector3 vParam0, bool bParam1)//Position - 0x62F
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)//Position - 0x65B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(vector3 vParam0)//Position - 0x672
{
	vector3 vVar0;
	
	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.y = SYSTEM::COS(vParam0.z);
	vVar0.z = SYSTEM::SIN(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

bool func_8()//Position - 0x6B5
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_9()//Position - 0x6C3
{
	Global_140791 = 1;
}

void func_10(char* sParam0, bool bParam1)//Position - 0x6D0
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(sParam0))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		return;
	}
	if (!func_12(sParam0))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		func_11(sParam0);
	}
}

void func_11(char* sParam0)//Position - 0x70F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_12(char* sParam0)//Position - 0x725
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()//Position - 0x738
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D8, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_2635D8, 5);
		Local_65.f_23 = 0;
	}
	func_14(&(Local_64.f_18), &(Local_65.f_23));
}

void func_14(var uParam0, var uParam1)//Position - 0x766
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, 4294967295, 0);
		if (bVar0)
		{
			if ((!*uParam1 || PAD::_0x6CD79468A1E595C6(2)) || PAD::_0x6CD79468A1E595C6(0))
			{
				func_30(4294967295);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_22[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), 4294967295);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), 4294967295, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, 4294967295, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x809
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
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_43D7.f_129F != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (Global_43D7.f_13A0[iVar1] != 358)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_43D7.f_13A0[iVar1], true), 64);
				}
				else if (Global_43D7.f_13AD[iVar1] != 32)
				{
					StringCopy(&(Global_43D7.f_12A1[iVar1 /*16*/]), PAD::_0x80C2FD58D720C801(2, Global_43D7.f_13AD[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43D7.f_12A0 = 0;
		}
		if (!Global_43D7.f_12A0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "CLEAR_ALL");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_43D7.f_13D7 / 100f)));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(true);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			iVar1 = 0;
			while (iVar1 < Global_43D7.f_129F)
			{
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					func_17(&(Global_43D7.f_12A1[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_17(&(Global_43D7.f_12A1[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43D7.f_1393[iVar1] == 4294967295)
					{
						func_16(&(Global_43D7.f_1362[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_43D7.f_1393[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_43D7.f_13A0[iVar1] != 358 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13BA, iVar1))
						{
							GRAPHICS::SET_SEETHROUGH(true);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_13A0[iVar1]);
						}
						else
						{
							GRAPHICS::SET_SEETHROUGH(false);
							GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(358);
						}
					}
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_10)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_43D7.f_129F);
				func_17(&Global_411BEA);
				if (Global_411BEA.f_14 == 4294967295)
				{
					func_16(&(Global_411BEA.f_10));
				}
				else
				{
					iVar4 = Global_43D7.f_1393[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(80);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43D7.f_13D8)
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			}
			else
			{
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			}
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			Global_43D7.f_12A0 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43D7.f_129F)
		{
			if (Global_43D7.f_1393[iVar1] != 4294967295)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_43D7.f_1362[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			iVar1++;
		}
		if (Global_411BEA.f_14 != 4294967295)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411BEA.f_10));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43D7.f_1F9B)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_43D7.f_1F9B = 1;
			}
		}
		else if (Global_43D7.f_1F9B)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_43D7.f_1F9B = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_43D7.f_13BD)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_43D7.f_161A[iVar0 /*10*/], Global_43D7.f_13BB, Global_43D7.f_13BC, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_43D7.f_161A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(char* sParam0)//Position - 0xD04
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_17(char* sParam0)//Position - 0xD16
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_18(int iParam0, int iParam1)//Position - 0xD24
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_19(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)//Position - 0xD6F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_20();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()//Position - 0xDB0
{
	return Global_1407E0;
}

int func_21()//Position - 0xDBC
{
	vector3 vVar0;
	
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_387A == 0)
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

int func_22()//Position - 0xE2A
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)//Position - 0xE44
{
	if (Global_252F9E.f_761.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_25(8, 4294967295) && func_24() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_11729) || Global_43D7.f_1F9A) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_16C64.f_571)
	{
		return 0;
	}
	return 1;
}

int func_24()//Position - 0xEE1
{
	return Global_140818;
}

bool func_25(int iParam0, int iParam1)//Position - 0xEED
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)//Position - 0xF28
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 4294967295)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43D7.f_1657[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43D7.f_1657[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 4294967295)
		{
			Global_43D7.f_1657[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)//Position - 0xFC5
{
	Global_14E696.f_437 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xFD6
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_43D7.f_129F >= 12)
	{
		StringCopy(&Global_411BEA, sVar0, 64);
		StringCopy(&(Global_411BEA.f_10), sParam1, 16);
		Global_411BEA.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_43D7.f_13BA), Global_43D7.f_129F);
	}
	StringCopy(&(Global_43D7.f_12A1[Global_43D7.f_129F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43D7.f_1362[Global_43D7.f_129F /*4*/]), sParam1, 16);
	Global_43D7.f_1393[Global_43D7.f_129F] = iParam2;
	Global_43D7.f_13A0[Global_43D7.f_129F] = iParam0;
	Global_43D7.f_13AD[Global_43D7.f_129F] = 32;
	Global_43D7.f_129F++;
}

void func_29(int iParam0, char* sParam1, int iParam2)//Position - 0x108B
{
	char* sVar0;
	
	sVar0 = PAD::_0x80C2FD58D720C801(2, iParam0, true);
	if (Global_43D7.f_129F >= 12)
	{
		StringCopy(&Global_411BEA, sVar0, 64);
		StringCopy(&(Global_411BEA.f_10), sParam1, 16);
		Global_411BEA.f_14 = iParam2;
		return;
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_43D7.f_13BA), Global_43D7.f_129F);
	StringCopy(&(Global_43D7.f_12A1[Global_43D7.f_129F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43D7.f_1362[Global_43D7.f_129F /*4*/]), sParam1, 16);
	Global_43D7.f_1393[Global_43D7.f_129F] = iParam2;
	Global_43D7.f_13A0[Global_43D7.f_129F] = 358;
	Global_43D7.f_13AD[Global_43D7.f_129F] = iParam0;
	Global_43D7.f_129F++;
}

void func_30(int iParam0)//Position - 0x113B
{
	int iVar0;
	int iVar1;
	
	Global_43D7.f_129F = 0;
	Global_43D7.f_12A0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43D7.f_1362[iVar0 /*4*/]), "", 16);
		Global_43D7.f_1393[iVar0] = 4294967295;
		Global_43D7.f_13A0[iVar0] = 358;
		Global_43D7.f_13AD[iVar0] = 32;
		iVar0++;
	}
	Global_43D7.f_13BA = 0;
	StringCopy(&(Global_411BEA.f_10), "", 16);
	Global_411BEA.f_14 = 4294967295;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x11E2
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43D7.f_1601[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1601[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_43D7.f_1601[iVar0 /*4*/]), 9);
		Global_43D7.f_15FA[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_43D7.f_1601[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xE2BBD32891C18569("CommonMenu", false);
	Global_43D7.f_15EC[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xE2BBD32891C18569("MPShopSale", false);
		Global_43D7.f_15F3[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43D7.f_161A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_43D7.f_161A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)//Position - 0x12D3
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_33()//Position - 0x1375
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_65.f_38 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_65.f_38 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()//Position - 0x13A8
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 6))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 5))
		{
			func_36();
		}
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_50)))
	{
		func_35(&(Local_64.f_50));
	}
}

void func_35(char* sParam0)//Position - 0x13F2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 5))
	{
	}
	else
	{
		PAD::_0x3D42B92563939375(sParam0);
		MISC::SET_BIT(&(Local_65.f_3C), 5);
	}
}

void func_36()//Position - 0x1425
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 5))
	{
		PAD::_0x643ED62D5EA3BEBD();
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 5);
	}
}

void func_37()//Position - 0x1449
{
	vector3 vVar0;
	
	if (Local_64.f_11 == 4)
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_65.f_24))
	{
		Local_65.f_24 = unk_0x9934FEFB3B8C6DB8(Local_64.f_56.f_1);
		return;
	}
	vVar0 = { CAM::GET_CAM_ROT(Local_65, 2) };
	switch (Local_64.f_11)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_65.f_25)
			{
				Local_65.f_25 = 1;
				func_40(Local_65.f_24, Local_64.f_14);
				func_39(Local_65.f_24, Local_64.f_14.f_1, Local_64.f_14.f_2, Local_64.f_14.f_3);
			}
		
		case 0:
			func_38(Local_65.f_24, 0f, CAM::GET_CAM_FOV(Local_65), Local_64.f_4, Local_64.f_5, vVar0.z);
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_65.f_24, 255, 255, 255, 0, 0);
}

void func_38(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1518
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x154D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_40(int iParam0, bool bParam1)//Position - 0x1575
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SET_SEETHROUGH(bParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_41()//Position - 0x1591
{
	struct<4> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (Local_64.f_5E != 0)
	{
		Local_65.f_4 = { unk_0x8000C77B5F336760(Local_64.f_5F, true) };
		Local_65.f_4.f_3 = { ENTITY::GET_ENTITY_ROTATION(Local_64.f_5F, 2) };
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 2))
	{
		Var0 = { func_46(Local_65, &(Local_65.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	vVar1 = { Local_64.f_5B + Local_65.f_1 };
	vVar2 = { func_45(Local_64.f_47, vVar1.z) };
	vVar3 = { Local_64.f_58 + vVar2 };
	switch (Local_64.f_5E)
	{
		case 0:
			func_44(Local_65, vVar3, vVar1);
			break;
		
		case 1:
			func_43(Local_65, vVar3, vVar1, Local_64.f_5F);
			break;
	}
	func_42(Local_65.f_28, Local_65.f_28.f_2, Local_65.f_28.f_8, Local_65.f_28.f_3, Local_65.f_28.f_9, Local_65.f_28.f_4, Local_65.f_28.f_A, Local_65.f_28.f_5, Local_65.f_28.f_B, Local_65.f_28.f_6, Local_65.f_28.f_C, Local_65.f_28.f_7, Var0, Var0.f_1, Local_65.f_3D.f_1, Local_65.f_3D.f_2 > 0);
	Local_65.f_4.f_6 = { CAM::GET_CAM_COORD(Local_65) };
	Local_65.f_4.f_9 = { CAM::GET_CAM_ROT(Local_65, 2) };
}

void func_42(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, vector3 vParam13, int iParam14, bool bParam15)//Position - 0x16D4
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, 4294967295))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != 4294967295)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam4))
				{
					unk_0x1190AB7024CBD8CB(iParam4, sParam5, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != 4294967295)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam4))
			{
				AUDIO::STOP_SOUND(iParam4);
			}
		}
		fVar0 = SYSTEM::VMAG(vParam13);
		if (fVar0 > 0f)
		{
			if (iParam2 != 4294967295)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam2))
				{
					unk_0x1190AB7024CBD8CB(iParam2, sParam3, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != 4294967295)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam2))
			{
				AUDIO::STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != 4294967295)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam6))
			{
				unk_0x1190AB7024CBD8CB(iParam6, sParam7, sParam1, true);
			}
		}
		iVar1 = AUDIO::_0x0626A247D2405330();
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
		}
		else
		{
			iVar2 = iVar1;
		}
		if (iParam8 != 4294967295)
		{
			bVar3 = bParam15;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2));
				bVar3 = (IntToFloat(iParam14) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam8))
				{
					unk_0x1190AB7024CBD8CB(iParam8, sParam9, sParam9, true);
				}
			}
		}
		if (iParam10 != 4294967295)
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar2)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2))) < 0.15f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam10))
				{
					unk_0x1190AB7024CBD8CB(iParam10, sParam11, sParam1, true);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iParam10))
			{
				AUDIO::STOP_SOUND(iParam10);
			}
		}
	}
}

void func_43(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)//Position - 0x188A
{
	CAM::ATTACH_CAM_TO_ENTITY(iParam0, iParam3, vParam1, 1);
	CAM::SET_CAM_ROT(iParam0, vParam2 + ENTITY::GET_ENTITY_ROTATION(iParam3, 2), 2);
}

void func_44(int iParam0, vector3 vParam1, vector3 vParam2)//Position - 0x18B2
{
	CAM::SET_CAM_COORD(iParam0, vParam1);
	CAM::SET_CAM_ROT(iParam0, vParam2, 2);
}

Vector3 func_45(vector3 vParam0, float fParam1)//Position - 0x18CF
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<4> func_46(int iParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)//Position - 0x1913
{
	float fVar0;
	struct<4> Var1;
	float fVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	vector3 vVar10;
	bool bVar11;
	
	fVar0 = CAM::GET_CAM_FOV(iParam0);
	Var1 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 39);
	vVar3 = { -Vector(PAD::_0x4F8A26A890FD62FB(0, 290), 0f, PAD::_0x4F8A26A890FD62FB(0, 291)) };
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (MISC::ABSF(fVar2) < 0.06f)
		{
			fVar2 = 0f;
		}
		if (SYSTEM::VMAG(vVar3) < 0.06f)
		{
			vVar3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = MISC::GET_FRAME_TIME();
	fVar5 = func_49((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(iParam0, fVar5);
	CAM::SET_CAM_NEAR_CLIP(iParam0, 0.01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	CAM::CUSTOM_MENU_COORDINATES(1f);
	GRAPHICS::_0xE2892E7E55D7073A(fVar6);
	vVar7.x = Param2.f_2;
	vVar7.y = 0f;
	vVar7.z = Param2;
	vVar8.x = Param2.f_3;
	vVar8.y = 0f;
	vVar8.z = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	vVar10 = { vVar3 };
	vVar10.z = (vVar10.z * fVar9);
	vVar10.x = (vVar10.x * fVar9);
	*uParam1 = { *uParam1 + vVar10 };
	bVar11 = vVar7.z > vVar8.z;
	if (bVar11)
	{
		*uParam1 = func_49(*uParam1, vVar7.x, vVar8.x);
		uParam1->f_1 = func_49(uParam1->f_1, vVar7.y, vVar8.y);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, vVar7, vVar8) };
	}
	Var1 = (Var1 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(vector3 vParam0, vector3 vParam1, vector3 vParam2)//Position - 0x1AB4
{
	vParam0.x = func_49(vParam0.x, vParam1.x, vParam2.x);
	vParam0.y = func_49(vParam0.y, vParam1.y, vParam2.y);
	vParam0.z = func_49(vParam0.z, vParam1.z, vParam2.z);
	return vParam0;
}

float func_48(float fParam0)//Position - 0x1AF4
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

float func_49(float fParam0, float fParam1, float fParam2)//Position - 0x1B2E
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

void func_50()//Position - 0x1B55
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

void func_51()//Position - 0x1B8F
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
	{
		if (!Local_65.f_1D.f_5)
		{
			Local_65.f_1D.f_5 = 1;
		}
		if (!func_65(3, 0f, 0f, 0f, Local_65.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			return;
		}
	}
	if (Local_65.f_1D)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Local_65.f_1D.f_1)
			{
				if (func_62(CAM::_0xDC9DA9E8789F5246()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_28.f_D.f_2, Local_65.f_28.f_D.f_1, Local_65.f_1D.f_2, Local_65.f_28.f_D, 1, 500, 0);
					Local_65.f_1D.f_1 = 0;
					Local_65.f_1D = 0;
				}
			}
			else
			{
				Local_65.f_1D.f_1 = 1;
				func_61(&(Local_65.f_11), 0, 0);
				MISC::SET_BIT(&Global_2635D8, 0);
				func_58(3f, 100f, &(Local_65.f_1D.f_2), &uVar0, &uVar1, &vVar2);
				func_57(1);
				func_55(Local_65.f_1D.f_2, vVar2);
			}
		}
	}
	if (func_54() || Local_65.f_1D)
	{
		MISC::SET_BIT(&(Local_65.f_3C), 1);
		MISC::SET_BIT(&(Local_65.f_3C), 2);
		MISC::SET_BIT(&(Local_65.f_3C), 3);
		if (!Local_65.f_1D)
		{
			MISC::SET_BIT(&(Local_65.f_3C), 6);
			MISC::SET_BIT(&(Local_65.f_3C), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_65.f_11), Local_64.f_8.f_2, 0))
		{
			Local_65.f_1D = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)//Position - 0x1D05
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)//Position - 0x1D63
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_54()//Position - 0x1DA8
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 5);
}

void func_55(vector3 vParam0, vector3 vParam1)//Position - 0x1DB9
{
	if (!func_56(Global_199D01.f_B, vParam0, 0))
	{
		Global_199D01.f_B = { vParam0 };
		vParam1 = { vParam1 + Vector(0f, -180f, 180f) };
		Global_199D01.f_E = { vParam1 };
	}
}

bool func_56(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1E02
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_57(bool bParam0)//Position - 0x1E49
{
	if (bParam0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01.f_2, 4))
		{
			Global_199D01.f_2 = 0;
			MISC::SET_BIT(&(Global_199D01.f_2), 4);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01.f_2, 4))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_199D01.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E93
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	if (Local_64.f_4A == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_65, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_65.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		vVar0 = { func_7(CAM::GET_CAM_ROT(Local_65, 2)) };
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_64.f_5F, Local_64.f_58) };
		vVar2 = { unk_0x820FCD825B81ED74(Local_64.f_5F, Local_64.f_4A.f_1[0]) };
		vVar3 = { vVar2 - vVar1 };
		*uParam2 = { vVar2 };
		iVar4 = 0;
		fVar5 = func_59(vVar3, vVar0);
		iVar6 = 1;
		while (iVar6 <= (Local_64.f_4A - 1))
		{
			vVar2 = { unk_0x820FCD825B81ED74(Local_64.f_5F, Local_64.f_4A.f_1[iVar6]) };
			vVar3 = { vVar2 - vVar1 };
			fVar7 = func_59(vVar3, vVar0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { vVar2 };
			}
			iVar6++;
		}
		*uParam5 = { unk_0x9D7769A7C54795B8(Local_64.f_5F, Local_64.f_4A.f_1[iVar4]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(vector3 vParam0, vector3 vParam1)//Position - 0x1FE0
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_60(vector3 vParam0, float fParam1)//Position - 0x2001
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { CAM::_GET_GAMEPLAY_CAM_ROT_2(2) };
	vVar1 = { func_7(vVar0) };
	return vParam0 + Vector(fParam1, fParam1, fParam1) * vVar1;
}

void func_61(var uParam0, bool bParam1, bool bParam2)//Position - 0x202B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = HUD::_0x13C4B962653A5280();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_62(int iParam0)//Position - 0x2068
{
	if (iParam0 != func_63())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_145, 26);
	}
	return 0;
}

int func_63()//Position - 0x2092
{
	return 4294967295;
}

bool func_64()//Position - 0x209B
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D8, 4) || NETWORK::_0x5C497525F803486B(0, 229));
}

int func_65(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x20B9
{
	struct<9> Var0;
	
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
	if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50)) && !func_69())
	{
		Var0.f_1 = 4294967295;
		Var0 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = { vParam1 };
		Var0.f_5 = { vParam2 };
		Var0.f_8 = { vParam3 };
		Var0.f_1 = iParam0;
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0, 1, 0))
			{
				iLocal_50 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(588062221, &Var0, 11, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(588062221);
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)//Position - 0x21CB
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				MISC::SET_BIT(&Global_199D01, 0);
			}
		}
	}
	else if (func_69())
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_199D01, 0);
	}
}

void func_67(var uParam0)//Position - 0x220F
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)//Position - 0x221C
{
	return uParam0->f_1;
}

bool func_69()//Position - 0x2228
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 0);
}

void func_70()//Position - 0x2239
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	func_77();
	if (Local_65.f_16 != 4294967295)
	{
		bVar0 = func_52(&(Local_65.f_16.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_16.f_4))
			{
				iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_16.f_4);
				unk_0x880001F3CD093B94(iVar2, 2);
			}
			func_76(&(Local_65.f_16.f_5));
			func_75(&(Local_65.f_16.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_16.f_4))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_16.f_4);
				unk_0x880001F3CD093B94(iVar3, 1);
			}
			func_75(&(Local_65.f_16.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_65.f_16.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_10 != 0 && !STREAMING::HAS_MODEL_LOADED(Local_64.f_10))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return;
			}
			if (bVar0 && func_52(&(Local_65.f_11), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_65.f_11), 0, 0);
				func_71(1f, &vVar4, &vVar5);
				MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar4, vVar5, Local_64.f_8.f_3, 1, Local_64.f_8, AUDIO::_0x0626A247D2405330(), 1, 1, -1f, Local_64.f_5F, 0, 0, Local_65.f_16, 1, 0, Local_64.f_5E != 0);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_28.f_D.f_2, Local_65.f_28.f_D.f_1, vVar4, Local_65.f_28.f_D, 1, 500, 0);
			}
			else
			{
				unk_0x1190AB7024CBD8CB(4294967295, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)//Position - 0x23AB
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x23C2
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	vVar2 = { unk_0x8000C77B5F336760(iParam0, true) };
	GRAPHICS::SET_DRAW_ORIGIN(vVar2, 0);
	fVar0 = func_74(iParam0, Local_65, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * GRAPHICS::_GET_ASPECT_RATIO(0));
	HUD::GET_HUD_COLOUR(iParam2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar7 = func_73((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar6) / 4f)), iVar6);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, iVar3, iVar4, iVar5, iVar7, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_73(bool bParam0, int iParam1, int iParam2)//Position - 0x246E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_74(int iParam0, int iParam1, float fParam2)//Position - 0x2485
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { CAM::GET_CAM_COORD(iParam1) };
	vVar1 = { unk_0x8000C77B5F336760(iParam0, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	fVar3 = CAM::GET_CAM_FOV(iParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / MISC::TAN((fVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_75(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x24D5
{
	if (*uParam0 == 4294967295)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		unk_0x1190AB7024CBD8CB(*uParam0, sParam1, sParam2, bParam3);
	}
}

void func_76(var uParam0)//Position - 0x24F8
{
	if (*uParam0 != 4294967295)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = 4294967295;
	}
}

void func_77()//Position - 0x2519
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_65.f_16.f_1), Local_65.f_16.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_65.f_16 != Local_65.f_16.f_4)
			{
				func_61(&(Local_65.f_16.f_2), 0, 0);
				func_76(&(Local_65.f_16.f_5));
				func_76(&(Local_65.f_16.f_6));
			}
			Local_65.f_16 = Local_65.f_16.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_65.f_16.f_4 = uVar1;
		}
		if (Local_65.f_16.f_4 != 4294967295)
		{
			func_79(Local_65.f_16.f_4);
		}
	}
	if (Local_65.f_16 != 4294967295)
	{
		if (((Local_65.f_16.f_4 != Local_65.f_16 || ENTITY::IS_ENTITY_DEAD(Local_65.f_16, 0)) || func_78(Local_65.f_16) > 0.04f) || SYSTEM::VMAG(unk_0x8000C77B5F336760(Local_65.f_16, true) - Local_65.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(int iParam0)//Position - 0x2601
{
	vector3 vVar0;
	
	vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &vVar0, &(vVar0.f_1)))
	{
		return 1f;
	}
	vVar0 = { vVar0 - Vector(0f, 0.5f, 0.5f) };
	vVar0.z = 0f;
	return SYSTEM::VMAG2(vVar0);
}

void func_79(int iParam0)//Position - 0x264B
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { CAM::GET_CAM_COORD(Local_65) };
	vVar1 = { unk_0x8000C77B5F336760(iParam0, true) };
	vVar1 = { vVar1 + Vector(2f, 2f, 2f) * func_80(vVar1 - vVar0) };
	Local_65.f_16.f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar1, 511, 0, 4);
	if (Local_65.f_16.f_1 == 0)
	{
	}
}

Vector3 func_80(vector3 vParam0)//Position - 0x26A2
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
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

int func_81(float fParam0)//Position - 0x26E1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	bVar1 = iVar0 != 4294967295;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
		if (((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_65.f_4.f_6 - unk_0x8000C77B5F336760(iVar8, true)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(iVar8);
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
		iVar10 = PLAYER::GET_PLAYER_PED(iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, 0))
		{
			iVar11 = PED::GET_VEHICLE_PED_IS_IN(iVar10, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar11, 0))
			{
				return iVar11;
			}
		}
	}
	return 4294967295;
}

int func_82(int iParam0, bool bParam1, bool bParam2)//Position - 0x27C4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0x280E
{
	Local_65.f_16 = 4294967295;
	Local_65.f_16.f_4 = 4294967295;
	func_76(&(Local_65.f_16.f_5));
	func_76(&(Local_65.f_16.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)//Position - 0x2836
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == 4294967295)
	{
		return 1;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar3))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, 0);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				*uParam2 = (iParam1 == iVar3 && !ENTITY::IS_ENTITY_DEAD(iVar3, 0));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()//Position - 0x28D9
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	var uVar8;
	vector3 vVar9;
	vector3 vVar10;
	
	PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 452, true);
	bVar0 = Local_64.f_D.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_65.f_13), Local_64.f_D.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_D.f_2;
			iVar4 = func_93(&(Local_65.f_13), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_D.f_1;
			iVar4 = (iVar5 - Local_65.f_13.f_2);
		}
		func_90(iVar4, iVar5, sVar3, iVar2, 4294967295, 11, 3212836864, 3212836864, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 4294967295, 0);
	}
	if (bVar0 && !bVar1)
	{
		if (NETWORK::_0x5C497525F803486B(0, 225))
		{
			func_61(&(Local_65.f_13), 0, 0);
			Local_65.f_13.f_2 = 0;
		}
	}
	if (!bVar1 && func_89())
	{
		Local_65.f_13.f_2 = (Local_65.f_13.f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if (func_52(&(Local_65.f_11), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_65.f_11), 0, 0);
			if (Local_64.f_D.f_1 > 0 && Local_65.f_13.f_2 >= Local_64.f_D.f_1)
			{
				func_61(&(Local_65.f_13), 0, 0);
				Local_65.f_13.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &vVar6, &vVar7, &uVar8, &vVar9);
			vVar10 = { Vector(Local_64.f_D, Local_64.f_D, Local_64.f_D) * func_86(0f, 0f, 0f, 1f) };
			vVar10.y = 0f;
			vVar9 = { vVar9 + vVar10 };
			vVar7 = { vVar6 + FtoV(SYSTEM::VMAG(vVar7 - vVar6)) * func_7(vVar9) };
			vVar6.z = (vVar6.z - 1f);
			MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar6, vVar7, Local_64.f_8.f_3, 0, Local_64.f_8, AUDIO::_0x0626A247D2405330(), 1, 1, -1f, Local_64.f_5F, 0, 0, 0, 1, 0, Local_64.f_5E != 0);
			if (Local_65.f_28.f_D.f_2 != 4294967295 && AUDIO::HAS_SOUND_FINISHED(Local_65.f_28.f_D.f_2))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_28.f_D.f_2, Local_65.f_28.f_D.f_1, vVar6, Local_65.f_28.f_D, 1, 500, 0);
			}
		}
	}
	else if (Local_65.f_28.f_D.f_2 != 4294967295 && !AUDIO::HAS_SOUND_FINISHED(Local_65.f_28.f_D.f_2))
	{
		AUDIO::STOP_SOUND(Local_65.f_28.f_D.f_2);
	}
}

Vector3 func_86(vector3 vParam0, float fParam1)//Position - 0x2B1D
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = (fParam1 * fParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1) };
		if (SYSTEM::VDIST2(vVar0, 0f, 0f, 0f) <= fVar1)
		{
			return vParam0 + vVar0;
		}
		iVar2++;
	}
	return func_87(vParam0, fParam1);
}

Vector3 func_87(vector3 vParam0, float fParam1)//Position - 0x2B85
{
	vector3 vVar0;
	
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + func_88(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam1));
}

Vector3 func_88(vector3 vParam0, float fParam1)//Position - 0x2BB7
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_89()//Position - 0x2BEE
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D8, 4) || unk_0xE11F00B4AC919F45(0, 229));
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x2C0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_92(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_91(0, iVar0);
		Global_14E696.f_445[iVar0] = iParam0;
		Global_14E696.f_445.f_B[iVar0] = iParam1;
		StringCopy(&(Global_14E696.f_445.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_14E696.f_445.f_C2[iVar0] = iParam3;
		Global_14E696.f_445.f_B7[iVar0] = iParam4;
		Global_14E696.f_445.f_D8[iVar0] = iParam5;
		Global_14E696.f_445.f_E3[iVar0 /*3*/] = iParam6;
		Global_14E696.f_445.f_E3[iVar0 /*3*/].f_1 = iParam7;
		Global_14E696.f_445.f_102[iVar0] = iParam8;
		Global_14E696.f_445.f_10D[iVar0] = iParam9;
		Global_14E696.f_445.f_138[iVar0] = iParam10;
		Global_14E696.f_445.f_143[iVar0] = iParam11;
		Global_14E696.f_445.f_14E[iVar0] = iParam12;
		Global_14E696.f_445.f_159[iVar0] = iParam13;
		Global_14E696.f_440 = 1;
		Global_14E696.f_445.f_164[iVar0] = iParam14;
		Global_14E696.f_445.f_16F[iVar0] = iParam15;
		Global_14E696.f_445.f_17A[iVar0] = iParam16;
		Global_14E696.f_445.f_185[iVar0] = iParam17;
		Global_14E696.f_445.f_190[iVar0] = iParam18;
		Global_14E696.f_445.f_19B[iVar0] = iParam19;
		Global_14E696.f_445.f_1A6[iVar0] = iParam20;
		Global_14E696.f_445.f_1B1[iVar0] = iParam21;
		Global_14E696.f_445.f_1BC[iVar0] = iParam22;
		Global_14E696.f_445.f_1C7[iVar0] = iParam23;
		Global_14E696.f_445.f_1D2[iVar0] = iParam24;
	}
}

void func_91(int iParam0, int iParam1)//Position - 0x2DE5
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_92(int iParam0, int iParam1)//Position - 0x2DFE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_93(var uParam0, bool bParam1, bool bParam2)//Position - 0x2E17
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_94()//Position - 0x2E5E
{
	return Global_10B8E;
}

void func_95(int iParam0)//Position - 0x2E6A
{
	int iVar0;
	
	iVar0 = iParam0;
	func_98(iParam0);
	if (func_97(&iVar0, 2))
	{
		func_61(&(Local_65.f_11), 0, 0);
		Local_64.f_8 = { Global_263580.f_8 };
	}
	if (func_97(&iVar0, 6))
	{
		Local_64.f_13 = Global_263580.f_13;
	}
	if (func_97(&iVar0, 10))
	{
		Local_64.f_4A = { Global_263580.f_4A };
	}
	if (func_97(&iVar0, 8))
	{
		Local_64.f_43 = { Global_263580.f_43 };
	}
	if (func_97(&iVar0, 12))
	{
		Local_64.f_14 = { Global_263580.f_14 };
	}
	func_96(iParam0);
}

void func_96(int iParam0)//Position - 0x2F03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_97(&iVar0, 0))
	{
	}
	if (func_97(&iVar0, 1))
	{
	}
	if (func_97(&iVar0, 2))
	{
		Local_64.f_8 = { Global_263580.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::_0x27E32866E9A5C416(1.5f);
				func_61(&(Local_65.f_13), 0, 0);
				Local_65.f_13.f_2 = 0;
				break;
			
			case 2:
				Local_64.f_56 = "helicopterhud";
				Local_64.f_10 = Global_263580.f_10;
				if (Local_64.f_10 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_64.f_10);
				}
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_56))
		{
			unk_0xE2BBD32891C18569(Local_64.f_56, false);
		}
	}
	if (func_97(&iVar0, 4))
	{
		switch (Local_64.f_11)
		{
			case 4:
				Local_64.f_56.f_1 = "";
				break;
			
			case 0:
				Local_64.f_56.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_56.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_56.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_56.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_56.f_1 = "UNDEFINED";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_56.f_1))
		{
			Local_65.f_24 = unk_0x9934FEFB3B8C6DB8(Local_64.f_56.f_1);
		}
	}
	if (func_97(&iVar0, 6))
	{
		Local_65.f_28.f_D.f_2 = 4294967295;
		switch (Local_64.f_13)
		{
			case 0:
				Local_65.f_28.f_D = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_28.f_D.f_1 = "Fire_MG_Loop";
				Local_65.f_28.f_D.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_65.f_28.f_D = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_28.f_D.f_1 = "Fire_MG_Loop";
				Local_65.f_28.f_D.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 2:
				Local_65.f_28.f_D = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_28.f_D.f_1 = "Fire_Rockets_Oneshot";
				Local_65.f_28.f_D.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 3:
				Local_65.f_28.f_D = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_28.f_D.f_1 = "Launch_Piloted_Missile";
				Local_65.f_28.f_D.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_65.f_28.f_D = 0;
				Local_65.f_28.f_D.f_1 = 0;
				Local_65.f_28.f_D.f_2 = 4294967295;
				break;
			}
	}
	if (func_97(&iVar0, 5))
	{
		Local_65.f_28.f_A = 4294967295;
		Local_65.f_28.f_8 = 4294967295;
		Local_65.f_28.f_9 = 4294967295;
		Local_65.f_28.f_B = 4294967295;
		Local_65.f_28.f_C = 4294967295;
		switch (Local_64.f_12)
		{
			case 0:
				Local_65.f_28 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_28.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_28.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_28.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_28.f_A = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_3 = "Pan";
				Local_65.f_28.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_4 = "Zoom";
				Local_65.f_28.f_9 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_65.f_28 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_28.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_28.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_28.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_28.f_A = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_3 = "Pan";
				Local_65.f_28.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_4 = "Zoom";
				Local_65.f_28.f_9 = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_6 = "Take_Damage";
				Local_65.f_28.f_B = AUDIO::GET_SOUND_ID();
				Local_65.f_28.f_7 = "Low_Health_Warning";
				Local_65.f_28.f_C = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_65.f_28 = 0;
				Local_65.f_28.f_2 = 0;
				Local_65.f_28.f_5 = 0;
				Local_65.f_28.f_A = 4294967295;
				Local_65.f_28.f_3 = 0;
				Local_65.f_28.f_8 = 4294967295;
				Local_65.f_28.f_4 = 0;
				Local_65.f_28.f_9 = 4294967295;
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_28))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_65.f_28, 0, 4294967295);
		}
	}
	if (func_97(&iVar0, 3))
	{
	}
	if (func_97(&iVar0, 7))
	{
		if (Local_64.f_18 > 0)
		{
			func_31(0, 4294967295, 0);
		}
	}
	if (func_97(&iVar0, 8))
	{
	}
	if (func_97(&iVar0, 9))
	{
	}
	if (func_97(&iVar0, 10))
	{
	}
	if (func_97(&iVar0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_50)))
		{
			func_35(&(Local_64.f_50));
		}
	}
	if (func_97(&iVar0, 12))
	{
	}
}

int func_97(int iParam0, int iParam1)//Position - 0x3309
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, iParam1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x332A
{
	if (func_97(&iParam0, 0))
	{
	}
	if (func_97(&iParam0, 1))
	{
	}
	if (func_97(&iParam0, 2))
	{
		Local_65.f_25 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::_0x27E32866E9A5C416(1f);
				func_67(&(Local_65.f_13));
				break;
			
			case 3:
				if (Local_65.f_1D)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_65.f_1D.f_1 = 0;
				Local_65.f_1D = 0;
				if (Local_65.f_1D.f_5)
				{
					Local_65.f_1D.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_10 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_64.f_10);
					Local_64.f_10 = 0;
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_56))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_56);
			Local_64.f_56 = "";
		}
	}
	if (func_97(&iParam0, 3))
	{
	}
	if (func_97(&iParam0, 4))
	{
		Local_65.f_25 = 0;
		Local_64.f_56.f_1 = "";
		if (Local_65.f_24 != 4294967295)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_65.f_24));
			Local_65.f_24 = 4294967295;
		}
	}
	if (func_97(&iParam0, 6))
	{
		func_76(&(Local_65.f_28.f_D.f_2));
	}
	if (func_97(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::_0x9AC92EED5E4793AB();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_28))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_65.f_28);
		}
		func_76(&(Local_65.f_28.f_8));
		func_76(&(Local_65.f_28.f_9));
		func_76(&(Local_65.f_28.f_A));
		func_76(&(Local_65.f_28.f_B));
		func_76(&(Local_65.f_28.f_C));
	}
	if (func_97(&iParam0, 7))
	{
		if (Local_64.f_18 > 0)
		{
			func_99(1, 4294967295);
		}
	}
	if (func_97(&iParam0, 8))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_43)) && func_12(&(Local_64.f_43)))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	if (func_97(&iParam0, 9))
	{
	}
	if (func_97(&iParam0, 10))
	{
	}
	if (func_97(&iParam0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_50)))
		{
			func_36();
			StringCopy(&(Local_64.f_50), "", 16);
		}
	}
	if (func_97(&iParam0, 12))
	{
		Local_65.f_25 = 0;
	}
}

void func_99(bool bParam0, int iParam1)//Position - 0x351A
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43D7.f_1F9B)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_43D7.f_1F9B = 0;
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_43D7.f_15FA[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_43D7.f_15FA[iVar0] = 0;
	}
	if (Global_43D7.f_15EC[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_43D7.f_15EC[iVar0] = 0;
	}
	if (Global_43D7.f_15F3[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_43D7.f_15F3[iVar0] = 0;
	}
	if (bParam0)
	{
		func_100(&(Global_43D7.f_161A[iVar0 /*10*/]));
		Global_43D7.f_1657[iVar0] = 0;
	}
	else
	{
		Global_43D7.f_1657[iVar0] = 0;
	}
}

void func_100(int iParam0)//Position - 0x35D6
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_101()//Position - 0x35FF
{
	if ((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_64.f_54.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_64.f_54);
	}
	if (func_52(&(Local_65.f_3A), Local_64.f_54, 0))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_64.f_54.f_1, 0) || func_103(Local_64.f_58, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_65))
			{
				Local_65 = CAM::CREATE_CAMERA(26379945, 1);
				MISC::SET_BIT(&(Local_65.f_3C), 2);
				func_41();
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_65.f_3C), 2);
				unk_0x70A382ADEC069DD3(Local_65.f_4.f_6);
			}
			else
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_64.f_54.f_1, 0))
				{
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, 1, 1, 0);
				func_3(&(Local_65.f_26), &(Local_65.f_27));
				func_37();
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_28.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_65.f_28.f_1);
				}
				func_61(&(Local_65.f_11), 0, 0);
				MISC::SET_BIT(&Global_2635D8, 3);
				func_102(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_65.f_39 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_65.f_38 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_64.f_54.f_1, 2))
				{
					if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_102(int iParam0)//Position - 0x3742
{
	Local_65.f_10 = iParam0;
}

int func_103(vector3 vParam0, int iParam1)//Position - 0x3750
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 0))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 100f, iParam1))
	{
		MISC::SET_BIT(&(Local_65.f_3C), 0);
	}
	return 0;
}

void func_104(int iParam0)//Position - 0x378E
{
	if (func_109())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_108(0))
		{
			func_105(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_105(int iParam0)//Position - 0x37C1
{
	if (func_109())
	{
		return;
	}
	if (Global_3959)
	{
		func_107(0, 0);
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
	if (!func_106())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_106()//Position - 0x383B
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107(bool bParam0, bool bParam1)//Position - 0x3862
{
	if (bParam0)
	{
		if (func_108(0))
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

int func_108(int iParam0)//Position - 0x38D6
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

bool func_109()//Position - 0x3930
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_110()//Position - 0x3942
{
	if (Local_64.f_5E != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_64.f_5F) || ENTITY::IS_ENTITY_DEAD(Local_64.f_5F, 0))
		{
			return 1;
		}
	}
	if (!func_82(CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		return 1;
	}
	if (Global_26357E)
	{
		return 1;
	}
	return 0;
}

int func_111()//Position - 0x398F
{
	var uVar0;
	
	func_118(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_112()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()//Position - 0x3A19
{
	switch (func_113())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_113()//Position - 0x3A4D
{
	return Global_6373;
}

bool func_114()//Position - 0x3A58
{
	return Global_255C02.f_24B;
}

int func_115(int iParam0)//Position - 0x3A67
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()//Position - 0x3A7E
{
	return Global_25824F;
}

bool func_117()//Position - 0x3A8A
{
	return Global_255C02.f_246;
}

void func_118(var uParam0)//Position - 0x3A99
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_119(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)//Position - 0x3B0C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_82(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_120(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)//Position - 0x3B8D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121()//Position - 0x3BEC
{
	SYSTEM::WAIT(0);
}

void func_122()//Position - 0x3BF9
{
	int iVar0;
	int iVar1;
	
	if (Local_65.f_10 == 0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_64.f_54.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_98(4294967295);
	if (func_130())
	{
		func_129(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	unk_0xF43EBF44468BFA3C();
	iVar0 = AUDIO::_0x0626A247D2405330();
	if (func_128(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			unk_0x4E87F356DA56EB3F(iVar1, true);
			func_126(1);
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_65.f_3C, 4))
	{
		func_125();
	}
	unk_0x7148E0F43D11F0D9();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_65.f_39)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	func_124(Local_65.f_26);
	func_124(Local_65.f_27);
	Global_263573 = 0;
	Global_2635D8 = 0;
	func_123();
}

void func_123()//Position - 0x3CBA
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_124(int iParam0)//Position - 0x3CC6
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_125()//Position - 0x3CDD
{
	Global_252F9E.f_47F.f_A = 0;
}

void func_126(int iParam0)//Position - 0x3CEF
{
	int iVar0;
	
	if (Global_24B2CE.f_A70 == 1)
	{
		Global_24B2CE.f_A70 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!Global_24B2CE.f_A72.f_1)
		{
			if (!Global_24B2CE.f_A6E == 4294967295)
			{
				if (((Global_24B2CE.f_A6E < 255 && !func_127()) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_255C3, 0)) && !(unk_0x179432B321CCFD03() && (Global_24B2CE.f_A6F == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_24B2CE.f_A6E);
				}
				else if (Global_24B2CE.f_A6E >= 255)
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
						}
					}
				}
			}
			Global_24B2CE.f_A6E = 4294967295;
			Global_24B2CE.f_A72.f_1 = 1;
		}
	}
}

bool func_127()//Position - 0x3DDB
{
	return Global_18C6A1;
}

int func_128(int iParam0)//Position - 0x3DE7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x3E08
{
	Global_258B2D = iParam0;
}

bool func_130()//Position - 0x3E16
{
	return Global_258B2D;
}

void func_131(var uParam0)//Position - 0x3E22
{
	MISC::SET_BIT(&Global_2635D8, 2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, 4294967295);
		func_149(0, 4294967295, 0);
	}
	else
	{
		func_122();
	}
	func_132(uParam0);
}

void func_132(var uParam0)//Position - 0x3E57
{
	int iVar0;
	int iVar1;
	
	Local_64.f_58 = { *uParam0 };
	Local_64.f_5B = { uParam0->f_3 };
	Local_64.f_5E = uParam0->f_6;
	Local_64.f_5F = uParam0->f_7;
	Local_65.f_16.f_4 = 4294967295;
	iVar0 = AUDIO::_0x0626A247D2405330();
	if (func_128(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			func_148(1);
			unk_0x4E87F356DA56EB3F(iVar1, false);
		}
	}
	if (!func_147())
	{
		MISC::SET_BIT(&(Local_65.f_3C), 4);
		func_146();
	}
	func_133();
}

void func_133()//Position - 0x3EE0
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 0))
	{
		func_145(3266576384, 1119092736, 3258187776, 1110704128, 1106247680, 1114636288);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 1))
	{
		func_144(1058642330, 1101004800);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 2))
	{
		func_143();
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 3))
	{
		func_141(1, 1, 0, 500);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 4))
	{
		func_140(0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 5))
	{
		func_139(0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 6))
	{
		func_138(0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 7))
	{
		MISC::SET_BIT(&Global_2635D6, 7);
		Global_263580.f_18 = 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 8))
	{
		func_137(0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 9))
	{
		func_136(0f, 0f, 0f);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 10))
	{
		MISC::SET_BIT(&Global_2635D6, 10);
		Global_263580.f_4A = 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 11))
	{
		func_135(0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2635D6, 12))
	{
		func_134(1, 3, 3, 3);
	}
	Local_64 = { Global_263580 };
	func_96(Global_2635D6);
	func_102(0);
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4037
{
	MISC::SET_BIT(&Global_2635D6, 12);
	Global_263580.f_14 = iParam0;
	Global_263580.f_14.f_1 = iParam1;
	Global_263580.f_14.f_2 = iParam2;
	Global_263580.f_14.f_3 = iParam3;
}

void func_135(char* sParam0)//Position - 0x406F
{
	MISC::SET_BIT(&Global_2635D6, 11);
	StringCopy(&(Global_263580.f_50), sParam0, 16);
}

void func_136(vector3 vParam0)//Position - 0x408B
{
	MISC::SET_BIT(&Global_2635D6, 9);
	Global_263580.f_47 = { vParam0 };
}

void func_137(char* sParam0)//Position - 0x40A9
{
	MISC::SET_BIT(&Global_2635D6, 8);
	StringCopy(&(Global_263580.f_43), sParam0, 16);
}

void func_138(int iParam0)//Position - 0x40C5
{
	MISC::SET_BIT(&Global_2635D6, 6);
	Global_263580.f_13 = iParam0;
}

void func_139(int iParam0)//Position - 0x40DE
{
	MISC::SET_BIT(&Global_2635D6, 5);
	Global_263580.f_12 = iParam0;
}

void func_140(int iParam0)//Position - 0x40F7
{
	MISC::SET_BIT(&Global_2635D6, 4);
	Global_263580.f_11 = iParam0;
}

void func_141(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4110
{
	MISC::SET_BIT(&Global_2635D6, 3);
	Global_263580.f_54 = iParam3;
	func_142(&(Global_263580.f_54.f_1), 1, bParam0);
	func_142(&(Global_263580.f_54.f_1), 2, bParam1);
	func_142(&(Global_263580.f_54.f_1), 0, bParam2);
}

void func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x4156
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(iParam0, iParam1);
	}
}

void func_143()//Position - 0x4176
{
	MISC::SET_BIT(&Global_2635D6, 2);
	Global_263580.f_8.f_1 = 0;
}

void func_144(int iParam0, int iParam1)//Position - 0x4190
{
	MISC::SET_BIT(&Global_2635D6, 1);
	Global_263580.f_6.f_1 = iParam0;
	Global_263580.f_6 = iParam1;
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x41B3
{
	MISC::SET_BIT(&Global_2635D6, 0);
	Global_263580 = iParam0;
	Global_263580.f_1 = iParam1;
	Global_263580.f_2 = iParam2;
	Global_263580.f_3 = iParam3;
	Global_263580.f_4 = iParam4;
	Global_263580.f_5 = iParam5;
}

void func_146()//Position - 0x41F2
{
	Global_252F9E.f_47F.f_A = 1;
}

bool func_147()//Position - 0x4204
{
	return Global_252F9E.f_47F.f_A;
}

void func_148(int iParam0)//Position - 0x4215
{
	int iVar0;
	
	iVar0 = Global_24B2CE.f_A71;
	if ((unk_0x179432B321CCFD03() && Global_24B2CE.f_A6F == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_24B2CE.f_A6E)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_24B2CE.f_A6E = iVar0;
		}
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)//Position - 0x426A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_123();
			}
			else
			{
				return 0;
			}
		}
		if (!func_150())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_117())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_115(155))
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_123();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_123();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_123();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_150()//Position - 0x437F
{
	return Global_140842;
}

