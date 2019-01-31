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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_56();
	}
	func_55();
	Global_41F8 = 0;
	Global_19E56.f_36C7[Global_38B1 /*20*/].f_12 = 0;
	Global_3958 = 0;
	func_54();
	func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_48();
	func_46();
	if (Global_38B1.f_1 > 3)
	{
		Global_38B1.f_1 = 7;
	}
	iLocal_31 = MISC::GET_GAME_TIMER();
	Global_38B5 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_41D7 = 0;
	Global_41D8 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_41D8 == 0 && Global_41D7 == 1)
		{
			func_45();
		}
		if (Global_41D8 == 1 && Global_41D7 == 0)
		{
			func_40();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = MISC::GET_GAME_TIMER();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_38B1.f_1 != 9 && Global_41D8 == 0) && Global_41D7 == 0)
		{
			switch (Global_38B1.f_1)
			{
				case 7:
					if (Global_41F8 == 0)
					{
						if (Global_26AB01 == 0)
						{
							func_39();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_41F8 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_41F8 == 0)
			{
				if (func_4())
				{
					Global_41D7 = 1;
				}
			}
			else if (func_3(2, Global_3891, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 12);
					func_2();
					Global_389B = 1;
					Global_41F8 = 0;
					if (Global_38B1.f_1 > 3)
					{
						Global_38B1.f_1 = 7;
					}
					if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_56();
					}
					func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_48();
					func_46();
					if (Global_411C39[iLocal_24 /*104*/].f_1D > 0)
					{
						if (Global_411C39[iLocal_24 /*104*/].f_1F == 1)
						{
							Global_411C39[iLocal_24 /*104*/].f_1D = 4;
							Global_411C39[iLocal_24 /*104*/].f_18 = 1;
						}
						else
						{
							Global_411C39[iLocal_24 /*104*/].f_18 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		if (func_1())
		{
			func_56();
		}
	}
}

int func_1()//Position - 0x29C
{
	if (((Global_38B1.f_1 == 1 || Global_38B1.f_1 == 3) || Global_38B1.f_1 == 0) || Global_3879 == 1)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2DF
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Back", &Global_38A6, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x300
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

int func_4()//Position - 0x372
{
	if (Global_BAD == 1 || Global_38B1.f_1 < 7)
	{
		Global_38A4 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x39B
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_3899, 0))
		{
			func_9();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_389A, 0))
		{
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()//Position - 0x410
{
	func_53(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_7();
}

void func_7()//Position - 0x44B
{
	if (func_8())
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

int func_8()//Position - 0x46E
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

void func_9()//Position - 0x4B5
{
	func_53(Global_389E, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x1190AB7024CBD8CB(4294967295, "Menu_Navigate", &Global_38A6, 1);
	func_10();
}

void func_10()//Position - 0x4F0
{
	if (func_8())
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

void func_11()//Position - 0x513
{
	func_12();
}

void func_12()//Position - 0x51F
{
	if (Global_411C39[iLocal_24 /*104*/].f_18 == 1)
	{
		if (Global_389B == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_3894))
			{
				func_2();
				Global_389B = 1;
				func_26();
				if (Global_411C39[iLocal_24 /*104*/].f_1B == 1)
				{
					Global_411C39[iLocal_24 /*104*/].f_63[0] = 0;
					Global_411C39[iLocal_24 /*104*/].f_63[1] = 0;
					Global_411C39[iLocal_24 /*104*/].f_63[2] = 0;
				}
				else
				{
					Global_411C39[iLocal_24 /*104*/].f_63[Global_38B1] = 0;
				}
				if (func_25(iLocal_24))
				{
				}
				else
				{
					Global_411C39[iLocal_24 /*104*/].f_18 = 0;
					Global_411C39[iLocal_24 /*104*/].f_1C = 0;
				}
				HUD::_REMOVE_NOTIFICATION(Global_411C39[iLocal_24 /*104*/].f_10);
				func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_48();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_46();
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 7;
					Global_41F8 = 0;
				}
			}
		}
	}
	else if (Global_389B == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_3895))
		{
			if (iLocal_26 == 1)
			{
				if (Global_38B1.f_1 > 3)
				{
					StringCopy(&Global_10B7E, HUD::_GET_LABEL_TEXT(&Global_41DF), 64);
					if (MISC::ARE_STRINGS_EQUAL(&Global_10B7E, "HARDCODED_4207156"))
					{
						Global_38B1.f_1 = 3;
						Global_19B603 = 1;
					}
					else
					{
						Global_10BFF = 7;
						MISC::SET_BIT(&Global_950, 10);
						Global_38B1.f_1 = 6;
					}
				}
				func_56();
			}
		}
	}
	if (Global_411C39[iLocal_24 /*104*/].f_1F == 1)
	{
		if (Global_389B == 0)
		{
			if (func_3(2, Global_3895, 0))
			{
				func_23();
				Global_389B = 1;
				Global_411C39[iLocal_24 /*104*/].f_1D = 2;
				Global_411C39[iLocal_24 /*104*/].f_18 = 1;
				Global_411C39[iLocal_24 /*104*/].f_1F = 0;
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
				Global_41F8 = 0;
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 7;
				}
				func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_48();
				func_46();
			}
		}
	}
	if (Global_389B == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_3892, 0))
		{
			Global_389B = 1;
			if (Global_411C39[iLocal_24 /*104*/].f_1D > 0)
			{
				func_23();
				Global_411C39[iLocal_24 /*104*/].f_1D = 3;
				Global_411C39[iLocal_24 /*104*/].f_18 = 1;
				Global_41F8 = 0;
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 7;
				}
				func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_48();
				func_46();
			}
			else if (Global_411C39[iLocal_24 /*104*/].f_1E == 1)
			{
				func_23();
				Global_6A2 = 144;
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_38AF = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_6A2 = Global_411C39[iLocal_24 /*104*/].f_11;
				if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
				{
					func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_211", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
				}
				func_13();
				func_56();
			}
		}
	}
}

void func_13()//Position - 0x882
{
	vector3 vVar0[24];
	
	if (Global_38A0 == 1)
	{
		return;
	}
	if (Global_38B1.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_38B1.f_1)
	{
		case 6:
			func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_17(Global_BAC);
			if (Global_BAC == 1)
			{
				func_53(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B5), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B5;
			}
			else
			{
				func_53(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38B6), 3212836864, 3212836864, 3212836864);
				Global_389D = Global_38B6;
			}
			if (Global_38A5)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_395B == 0)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else if (Global_11625)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			}
			else
			{
				if (Global_395A == 1)
				{
					if (Global_38A5)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_38A5)
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_94F, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_53(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_38B0 == 1)
			{
				func_16();
				func_53(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
				{
					func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), "CELL_217", &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
				}
				func_53(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_3DCE == 4 || Global_3DCE == 3)
			{
				func_53(Global_389E, "SET_THEME", SYSTEM::TO_FLOAT(Global_19E56.f_36C7[Global_38B1 /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_16();
				if (Global_3DDB)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_3DDD);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					if (Global_3ED0)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_19E56.f_6D76[Global_6A2 /*29*/].f_18[Global_38B1] == 0)
					{
						func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_6A2 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_53(Global_389E, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_7), &cVar0, &(Global_19E56.f_6D76[Global_6A2 /*29*/].f_3), 0);
					}
				}
				func_53(Global_389E, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()//Position - 0xE25
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_389E))
	{
		if (Global_38B0 == 1)
		{
			if (Global_38A5)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DFD)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 20))
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_38A5)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3878)
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)//Position - 0xFA5
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_16()//Position - 0xFB7
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (Global_38B1 == 0)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 1)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 2)
		{
			switch (Global_19E56.f_36C7[Global_38B1 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_38B1 == 3)
		{
			switch (Global_4121FE)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(CAM::_0xDC9DA9E8789F5246(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)//Position - 0x122E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_41FA = 0;
	Global_BAC = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B88[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar2 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar2 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19E56.f_3721[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19E56.f_3721[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19E56.f_3721[iVar3 /*104*/].f_63[Global_38B1] == 1)
											{
												Global_41FA++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11625)
								{
									iVar4 = 0;
									iVar4 = Global_411C38;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_411C39[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_411C39[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_411C39[iVar5 /*104*/].f_63[Global_38B1] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_38B1)
									{
										case 0:
											iVar6 = Global_919C;
											break;
										
										case 1:
											iVar6 = Global_919D;
											break;
										
										case 2:
											iVar6 = Global_919E;
											break;
										
										default:
											break;
									}
									func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_955);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 2)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar8 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar8 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar8);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[iVar1 /*15*/]), "CELL_BENWEB")) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_15(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_18(int iParam0)//Position - 0x17C7
{
	return Global_8D15 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x17D5
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
		func_15(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_15(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_15(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_15(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_15(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_20(char* sParam0)//Position - 0x1888
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_21()//Position - 0x18A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (func_22() && PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(AUDIO::_0x0626A247D2405330(), 0);
			if (Global_11625)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = 1;
			}
			if (!Global_3878)
			{
				if (Global_6A2 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
							{
							}
							else
							{
								if (Global_11625)
								{
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 244, false);
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 243, false);
									PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 242, false);
								}
								MISC::SET_BIT(&Global_94F, 11);
								BRAIN::TASK_USE_MOBILE_PHONE(AUDIO::_0x0626A247D2405330(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()//Position - 0x19CB
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()//Position - 0x19EF
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x1190AB7024CBD8CB(4294967295, "Menu_Accept", &Global_38A6, 1);
		func_24();
	}
}

void func_24()//Position - 0x1A15
{
	if (func_8())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_25(int iParam0)//Position - 0x1A29
{
	if ((Global_19E56.f_3721[iParam0 /*104*/].f_63[0] == 1 || Global_19E56.f_3721[iParam0 /*104*/].f_63[1] == 1) || Global_19E56.f_3721[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1A7E
{
	if (func_18(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_27();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

var func_27()//Position - 0x1B20
{
	func_28();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_28()//Position - 0x1B39
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_31(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_30(AUDIO::_0x0626A247D2405330());
			if (func_29(iVar0) && (!func_18(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_29(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_29(int iParam0)//Position - 0x1C36
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1C42
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)//Position - 0x1C7F
{
	if (func_29(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()//Position - 0x1CA9
{
	struct<16> Var0;
	
	if (Global_389B == 0)
	{
		if ((func_3(2, Global_3892, 0) || Global_41211B == 1) || Global_41F2 == 1)
		{
			if (Global_41211B == 0 && Global_41F2 == 0)
			{
				func_23();
			}
			Global_389B = 1;
			iLocal_30 = 0;
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 8;
					Global_41F8 = 1;
					iLocal_23 = iLocal_22;
					SOCIALCLUB::_0x4737980E8A283806(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
				uLocal_33 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
				while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_33) && iLocal_28 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_37();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				func_15("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_BCON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[1 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[2 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[3 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[4 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[5 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[6 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[7 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[8 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_38[9 /*16*/]));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				switch (Local_45.f_139)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Dock_Tease");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 3:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Warstock");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 4:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Legendary_Motorsport");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 5:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_LS_Customs");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 6:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Elitas_Travel");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 7:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_LS_Tourist_Info");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 8:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_dynasty8");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 9:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_bennys");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 10:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_ammunation");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 11:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_SSSA");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 12:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_maze_bank");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 13:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_shark");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
					
					case 14:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_RP");
						GRAPHICS::SET_SEETHROUGH(true);
						break;
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_389E, "DISPLAY_VIEW", 9f, 3212836864, 3212836864, 3212836864, 3212836864);
				if (iLocal_22 == iLocal_21)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_41212A, 25))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_41212A, 25);
					}
					if (Global_411C38 > 0)
					{
						func_34(8491, iLocal_40, 4294967295, 1, 0);
						if (Global_411C38 > 0)
						{
							Global_411C38 = 0;
						}
					}
				}
				return;
			}
			if (Global_411C39[iLocal_24 /*104*/].f_18 != 0)
			{
				if (Global_38B1.f_1 > 3)
				{
					Global_38B1.f_1 = 8;
				}
				if (Global_41211B == 1 || Global_41F2 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_41211B == 1)
					{
					}
					Global_41F2 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_28 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "GET_CURRENT_SELECTION");
					uLocal_33 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_33) && iLocal_28 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_411C39[iLocal_24 /*104*/].f_1C = 1;
				iLocal_26 = 0;
				StringCopy(&Global_41DF, "NO_HYPERLINK", 64);
				Var0 = { Global_411C39[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_41DF = { Var0 };
					iLocal_26 = 1;
					if (Global_38A5)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_94F, 17);
					Global_411C39[iLocal_24 /*104*/].f_1A = 1;
					Global_411C39[iLocal_24 /*104*/].f_18 = 2;
				}
				if (Global_411C39[iLocal_24 /*104*/].f_1A == 0)
				{
					Global_411C39[iLocal_24 /*104*/].f_18 = 1;
				}
				func_37();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				func_15("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (Global_411C39[iLocal_24 /*104*/].f_11 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_32));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19E56.f_6D76[Global_411C39[iLocal_24 /*104*/].f_11 /*29*/].f_3));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				switch (Global_411C39[iLocal_24 /*104*/].f_20)
				{
					case 0:
						func_15(&(Global_411C39[iLocal_24 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411C39[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_21));
						if (Global_411C39[iLocal_24 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_43));
						}
						if ((Global_411C39[iLocal_24 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_411C39[iLocal_24 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411C39[iLocal_24 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_411C39[iLocal_24 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411C39[iLocal_24 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_53));
							}
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411C39[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411C39[iLocal_24 /*104*/].f_31);
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_411C39[iLocal_24 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_21));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411C39[iLocal_24 /*104*/].f_31);
						if (Global_411C39[iLocal_24 /*104*/].f_42 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_43), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_43));
						}
						if ((Global_411C39[iLocal_24 /*104*/].f_42 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_43), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_411C39[iLocal_24 /*104*/].f_43)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411C39[iLocal_24 /*104*/].f_43));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_43));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_411C39[iLocal_24 /*104*/].f_53)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411C39[iLocal_24 /*104*/].f_53));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_53));
							}
						}
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						break;
					
					case 4:
						func_33(iLocal_24);
						break;
					
					case 5:
						func_33(iLocal_24);
						break;
					
					case 6:
						func_33(iLocal_24);
						break;
					
					case 7:
						func_33(iLocal_24);
						break;
					
					case 8:
						func_33(iLocal_24);
						break;
					
					case 9:
						func_33(iLocal_24);
						break;
					
					case 10:
						func_33(iLocal_24);
						break;
					
					case 11:
						func_33(iLocal_24);
						break;
				}
				if (Global_411C39[iLocal_24 /*104*/].f_11 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iLocal_24 /*104*/].f_32));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					func_15(&(Global_19E56.f_6D76[Global_411C39[iLocal_24 /*104*/].f_11 /*29*/].f_3));
				}
				if (Global_411C39[iLocal_24 /*104*/].f_11 == 149)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_maze_bank");
					GRAPHICS::SET_SEETHROUGH(true);
				}
				if (Global_411C39[iLocal_24 /*104*/].f_11 == 140)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("EmailAds_Warstock");
					GRAPHICS::SET_SEETHROUGH(true);
				}
				if (Global_411C39[iLocal_24 /*104*/].f_11 == 155)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING("emailads_arena");
					GRAPHICS::SET_SEETHROUGH(true);
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				Global_41F8 = 1;
				func_53(Global_389E, "DISPLAY_VIEW", 9f, 3212836864, 3212836864, 3212836864, 3212836864);
				HUD::_REMOVE_NOTIFICATION(Global_411C39[iLocal_24 /*104*/].f_10);
				if (Global_411C39[iLocal_24 /*104*/].f_1D > 0)
				{
					if (Global_38A5)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_411C39[iLocal_24 /*104*/].f_1E == 1)
				{
					if (Global_38A5)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_411C39[iLocal_24 /*104*/].f_1D > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_38A5)
						{
							func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_389E, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_38A5)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_38A5)
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_411C39[iLocal_24 /*104*/].f_18 == 2)
				{
					if (Global_411C39[iLocal_24 /*104*/].f_1F == 1)
					{
						iLocal_26 = 0;
						if (Global_38A5)
						{
							func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_94F, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
					}
				}
				else if (Global_38A5)
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_94F, 17);
				}
				else
				{
					func_19(Global_389E, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_94F, 17);
				}
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_12 = 0;
				Global_41211B = 0;
			}
			else
			{
				Global_19E56.f_36C7[Global_38B1 /*20*/].f_12 = 0;
				Global_41211B = 0;
			}
		}
		if (Global_26AB01 == 0)
		{
			if (Global_11625)
			{
			}
		}
	}
}

void func_33(int iParam0)//Position - 0x2857
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_19E56.f_3721[iParam0 /*104*/].f_31)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_19E56.f_3721[iParam0 /*104*/]));
	while (iVar0 < Global_19E56.f_3721[iParam0 /*104*/].f_31)
	{
		switch (Global_19E56.f_3721[iParam0 /*104*/].f_20)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_26862F.f_673[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F1A[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F43[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F58[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F69[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F76[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F83[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_193F90[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29F8
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_35(var uParam0)//Position - 0x2A28
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_36();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_36()//Position - 0x2A5C
{
	return Global_1407E0;
}

void func_37()//Position - 0x2A68
{
	int iVar0;
	
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_411C39[iLocal_24 /*104*/].f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_411C39[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_38(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_19B5FD, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				unk_0xE2BBD32891C18569(&Local_34, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_34))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_38(char* sParam0)//Position - 0x2B03
{
	switch (MISC::GET_HASH_KEY(sParam0))
	{
		case 368818696:
		case 4052429723:
		case 293851599:
		case 1276417163:
		case 3599914826:
		case 4022632231:
		case 1286719131:
		case 2877700800:
		case 3825023008:
		case 3607531075:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case 3360325808:
		case 3566402475:
		case 1522380948:
		case 3038198727:
		case 3974478407:
		case 3755529902:
		case 2493031075:
			return 1;
		
		default:
	}
	return 0;
}

void func_39()//Position - 0x2B93
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_3899, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_389A, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_40()//Position - 0x2C40
{
	float fVar0;
	
	fVar0 = func_41(vLocal_39, vLocal_38, Global_3889, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_41D8 = 0;
		iLocal_18 = 0;
	}
}

float func_41(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x2C8E
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_412201 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14) && Global_38B1.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_3882[Global_387A /*3*/].f_1 == Var0.f_1)
			{
				Global_412201 = 1;
			}
		}
	}
	if (func_44() && Global_412201 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_43((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_3869 = { func_42(vParam0, vParam1, fVar2) };
		Global_386C = { func_42(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_3869 = { vParam1 };
		Global_386C = { vParam3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_386C, 0);
	return fVar1;
}

Vector3 func_42(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x2DA0
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_43(float fParam0, float fParam1, float fParam2)//Position - 0x2DBA
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

int func_44()//Position - 0x2DE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			if (Global_3878 == 0)
			{
				if (Global_6A2 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (Global_3DCE != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(AUDIO::_0x0626A247D2405330(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || unk_0x6BA46D5172404F26(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
		if (Global_19A9E)
		{
			return 0;
		}
	}
	if (Global_11625)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SEASHARK2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("RHINO")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("SUBMERSIBLE2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("TORO"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_412200 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_19E56.f_36C7.f_59)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_45()//Position - 0x3008
{
	float fVar0;
	
	fVar0 = func_41(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_3889, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_41D7 = 0;
		func_56();
		iLocal_18 = 0;
	}
}

void func_46()//Position - 0x305C
{
	if (Global_41211B == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_47(Global_389E, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_53(Global_389E, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), 3212836864, 3212836864, 3212836864);
		if (Global_38A5)
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_389E, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_389E, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_11625)
		{
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
		else
		{
			func_19(Global_389E, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_47(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x318E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_15(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_15(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_15(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_15(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_15(sParam6);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_48()//Position - 0x31E9
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_26();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_411C39[iVar4 /*104*/].f_12 = 4294967295;
		Global_411C39[iVar4 /*104*/].f_12.f_1 = 0;
		Global_411C39[iVar4 /*104*/].f_12.f_2 = 0;
		Global_411C39[iVar4 /*104*/].f_12.f_3 = 0;
		Global_411C39[iVar4 /*104*/].f_12.f_5 = 0;
		while (iVar3 < 12)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_56();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_411C39[iVar3 /*104*/].f_18 != 0)
				{
					if (Global_411C39[iVar3 /*104*/].f_63[Global_38B1] == 1)
					{
						if (func_52(Global_411C39[iVar3 /*104*/].f_12, Global_411C39[iVar4 /*104*/].f_12))
						{
							iVar4 = iVar3;
							if (Global_411C39[iVar4 /*104*/].f_1C == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_411C39[iVar4 /*104*/].f_18 != 0)
		{
			if (Global_411C39[iVar4 /*104*/].f_63[Global_38B1] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iLocal_25);
				GRAPHICS::SET_SEETHROUGH(false);
				if (Global_411C39[iVar4 /*104*/].f_11 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411C39[iVar4 /*104*/].f_32));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					func_15(&(Global_19E56.f_6D76[Global_411C39[iVar4 /*104*/].f_11 /*29*/].f_3));
				}
				Var5 = { Global_411C39[iVar4 /*104*/] };
				if (func_38(&(Global_411C39[iVar4 /*104*/])))
				{
					iVar6 = func_49(7315, 4294967295, 4294967295);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_15(&Var5);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			SOCIALCLUB::_0x4737980E8A283806(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
				if (iVar1 == 0)
				{
					if (Global_411C38 == 0)
					{
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					}
					else
					{
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					}
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
				}
				GRAPHICS::SET_SEETHROUGH(false);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_2));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_EMAIL_SUBJ");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_17[0 /*16*/]));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Local_45.f_17[1 /*16*/]));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x352A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	iVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)//Position - 0x3570
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)//Position - 0x3912
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_52(struct<6> Param0, struct<6> Param1)//Position - 0x3C67
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_53(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3D52
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

void func_54()//Position - 0x3DB5
{
	switch (UNK::_GET_CURRENT_LANGUAGE_ID())
	{
		case 4294967295:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 0:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 1:
			unk_0x2322A0E1DC14C810("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x2322A0E1DC14C810("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x2322A0E1DC14C810("gta5mkt_it");
			break;
		
		case 4:
			unk_0x2322A0E1DC14C810("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x2322A0E1DC14C810("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x2322A0E1DC14C810("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x2322A0E1DC14C810("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x2322A0E1DC14C810("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x2322A0E1DC14C810("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x2322A0E1DC14C810("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x2322A0E1DC14C810("gta5mkt_me");
			break;
		
		case 12:
			unk_0x2322A0E1DC14C810("gta5mkt_cn");
			break;
	}
	SOCIALCLUB::_SC_INBOX_GET_EMAILS(0, 6);
	SYSTEM::WAIT(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_38B1.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_43 = SOCIALCLUB::_0x16DA8172459434AA();
		if (func_4())
		{
			Global_38B1.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0x3B7BC5BC304ADDD9();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_55()//Position - 0x3F74
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_56()//Position - 0x4530
{
	if (func_44() == 0)
	{
		MOBILE::SET_MOBILE_PHONE_POSITION(Global_3882[Global_387A /*3*/]);
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_57(0);
	}
	if (iLocal_37)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_34);
	}
	Global_41D8 = 0;
	Global_41D7 = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_57(int iParam0)//Position - 0x4578
{
	if (func_61())
	{
		return;
	}
	if (Global_3959)
	{
		func_59(0, 0);
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
	if (!func_58())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_58()//Position - 0x45F2
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)//Position - 0x4619
{
	if (bParam0)
	{
		if (func_60(0))
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

int func_60(int iParam0)//Position - 0x468D
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

bool func_61()//Position - 0x46E7
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

