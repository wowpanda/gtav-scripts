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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_24 == 0)
		{
			if (Global_38B1.f_1 != 9)
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_41D9 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_3891, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_389B = 1;
							if (Global_38B1.f_1 > 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_38B3 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()//Position - 0x117
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x15A
{
	iLocal_25 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_38B1.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x19C
{
	int iVar0;
	
	func_7(Global_389E, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	iLocal_21 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_22))
		{
			func_6(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_389E, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_4(Global_389E, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_38A5)
	{
		func_6(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x2CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_5(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_5(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_5(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_5(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_5(sParam6);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_5(char* sParam0)//Position - 0x329
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x33B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_5(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_5(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_5(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_5(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_5(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3EE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_8()//Position - 0x451
{
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			vLocal_30.x = (vLocal_30.x + 1f);
		}
		if (vLocal_30.x > vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			vLocal_30.y = (vLocal_30.y - 2f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			vLocal_30.z = (vLocal_30.z - 7f);
		}
		if (vLocal_30.z < vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_38B1.f_1 > 3)
			{
				Global_38B1.f_1 = 7;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				Global_41DB = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_30, 0);
	}
}

void func_9()//Position - 0x539
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_41D9 == 6)
	{
		if (iLocal_33)
		{
			vLocal_30.x = (vLocal_30.x - 1f);
		}
		if (vLocal_30.x < vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			vLocal_30.y = (vLocal_30.y - 0.5f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			vLocal_30.z = (vLocal_30.z + 7f);
		}
		if (vLocal_30.z > vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_30, 0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_389E, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_6(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_38A5)
		{
			func_6(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		func_7(Global_389E, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
		func_4(Global_389E, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x722
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

void func_11()//Position - 0x738
{
	Global_41DB = 1;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_12()//Position - 0x74D
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x776
{
	if (iLocal_31 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_30, 0);
		vLocal_29 = { Global_3889 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()//Position - 0x7A0
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7C1
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && NETWORK::_0x5C497525F803486B(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_16()//Position - 0x833
{
	if (iLocal_28)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_3899, 0))
		{
			func_20();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_389A, 0))
		{
			func_17();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()//Position - 0x8A8
{
	func_7(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_18();
}

void func_18()//Position - 0x8E3
{
	if (func_19())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

int func_19()//Position - 0x906
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_412200 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()//Position - 0x94D
{
	func_7(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_21();
}

void func_21()//Position - 0x988
{
	if (func_19())
	{
		if (Global_395E == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

void func_22()//Position - 0x9AB
{
	int iVar0;
	
	if (Global_389B == 0)
	{
		if (func_15(2, Global_3892, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 15);
			func_24();
			Global_389B = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
			uLocal_20 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_20);
			if (iVar0 > 4294967295)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_38B1.f_1 > 3)
				{
					if (Global_41D9 == 0)
					{
						func_7(Global_389E, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_6(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_389E, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_4(Global_389E, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_38A5)
						{
							func_6(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
						Global_41DD = iLocal_23;
						Global_41D9 = 12;
						Global_38B1.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB2B
{
	if (iLocal_32 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_30, 0);
		vLocal_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()//Position - 0xB5F
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_25();
	}
}

void func_25()//Position - 0xB84
{
	if (func_19())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_26()//Position - 0xB98
{
	if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_41DB = 1;
			Global_38B1.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()//Position - 0xBE2
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

