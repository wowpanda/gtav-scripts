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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 5 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 5;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_68 = 4294967295;
	iLocal_69 = 2050;
	iLocal_70 = 4294967295;
	iLocal_71 = 4294967295;
	sLocal_73 = "CC_SUBSTR";
	fLocal_74 = 125f;
	iLocal_75 = 1;
	iLocal_77 = 263;
	fLocal_85 = 4f;
	iLocal_86 = 6;
	iLocal_87 = 18;
	vLocal_64 = { ScriptParam_93.f_1[0 /*3*/] };
	vLocal_64 = { vLocal_64 };
	iLocal_62 = iLocal_62;
	cLocal_52 = { cLocal_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_93(1);
	}
	iLocal_61 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
	iLocal_67 = 0;
	func_91(&Global_19911, 0);
	func_88();
	if (func_87(uLocal_66, 1))
	{
		iLocal_72 = 10;
	}
	else
	{
		iLocal_72 = 9;
	}
	while (!Global_7C8F)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_87(uLocal_66, 8))
	{
		if (!func_85(iLocal_72))
		{
			if (func_84(0, iLocal_71))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_71 != 4294967295)
	{
		if (!func_84(0, iLocal_71))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_66, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_66, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_87(uLocal_66, 4194304))
	{
		if (iLocal_77 != 263)
		{
			func_81(iLocal_77, 1, 0);
			iLocal_77 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		iLocal_61 = PLAYER::GET_PLAYER_PED(CAM::_0xDC9DA9E8789F5246());
		if (func_87(uLocal_66, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
			{
				func_93(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61) && !ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
		{
			vLocal_63 = { unk_0x8000C77B5F336760(iLocal_61, true) };
			fLocal_65 = SYSTEM::VDIST2(vLocal_63, ScriptParam_93.f_1[0 /*3*/]);
			fLocal_65 = fLocal_65;
			vLocal_83 = { vLocal_63 };
			vLocal_84 = { ScriptParam_93.f_1[0 /*3*/] };
			vLocal_83.z = 0f;
			vLocal_84.z = 0f;
			fLocal_82 = SYSTEM::VDIST2(vLocal_83, vLocal_84);
			switch (iLocal_67)
			{
				case 0:
					if (func_85(iLocal_72) || (func_87(uLocal_66, 16) && !func_87(uLocal_66, 524288)))
					{
						iLocal_70 = 4294967295;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_82 > (fLocal_74 * fLocal_74))
						{
							if (iLocal_77 != 263)
							{
								func_81(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
							func_80(10);
						}
						if ((vLocal_63.z - ScriptParam_93.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_75 = iLocal_75;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_72))
					{
						if (!func_87(uLocal_66, 8))
						{
							bVar1 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_16C30.f_3), &cLocal_52))
							{
								cLocal_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_66, 4))
					{
						func_77();
						func_76(&uLocal_66, 4);
					}
					if (fLocal_82 > (fLocal_74 * fLocal_74) && !Global_16C52)
					{
						if (iLocal_77 != 263)
						{
							if (func_75(6) && !func_74(iLocal_77))
							{
							}
							else
							{
								func_81(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_52 = { Local_51 };
						bVar2 = !func_87(uLocal_66, 64);
						func_91(&uLocal_66, 128);
						if (!func_73(3) && !Global_16C52)
						{
							if (func_87(uLocal_66, 2097152))
							{
								if ((!func_87(uLocal_66, 1) || !ENTITY::DOES_ENTITY_EXIST(func_72())) && !Global_16C52)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_66, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_19A9D) || func_62())
						{
							bVar2 = false;
						}
						if (func_87(uLocal_66, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
							}
						}
						if (func_58(1))
						{
							bVar2 = false;
						}
						if (Global_11625)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, 4294967295))
						{
							bVar2 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar2 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, 0))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iLocal_61, 0), ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 20f, false, false, iLocal_75))
								{
									bVar2 = false;
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_61, ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
							{
								bVar2 = false;
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_61, ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, 0))
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
							}
							iVar3 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_86 > iLocal_87)
							{
								if (iVar3 < iLocal_86 && iVar3 >= iLocal_87)
								{
									func_59(&uLocal_66, 128);
									bVar2 = false;
									if (fLocal_65 < ((fLocal_85 * fLocal_85) + 4f))
									{
										if (!func_87(uLocal_66, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_86, iLocal_87);
											func_59(&uLocal_66, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_66, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_86 || iVar3 >= iLocal_87)
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
								if (fLocal_65 < ((fLocal_85 * fLocal_85) + 4f))
								{
									if (!func_87(uLocal_66, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_86, iLocal_87);
										func_59(&uLocal_66, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_66, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_88)
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
								if (!func_87(uLocal_66, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_88, 4294967295);
									func_59(&uLocal_66, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_66, 33554432);
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								PAD::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_44(iLocal_62))
								{
									if (iLocal_68 == 4294967295)
									{
										if (iLocal_88 > 0)
										{
											func_43(&iLocal_68, 4, "", 1, 0, 0, 0);
											func_42(sLocal_73, iLocal_88);
											func_59(&uLocal_66, 2048);
										}
										else
										{
											func_43(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
											func_59(&uLocal_66, 2048);
										}
									}
									else if (!func_87(uLocal_66, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_41(&iLocal_68);
										func_91(&uLocal_66, 2048);
									}
									if (func_39(iLocal_68, 1))
									{
										sLocal_73 = sLocal_73;
										func_41(&iLocal_68);
										func_91(&uLocal_66, 2048);
										if (func_87(uLocal_66, 2048))
										{
											if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												func_91(&uLocal_66, 2048);
												GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
											}
										}
										SCRIPT::REQUEST_SCRIPT(&cLocal_52);
										PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_73 = sLocal_73;
									func_41(&iLocal_68);
									func_91(&uLocal_66, 2048);
									if (func_87(uLocal_66, 2048))
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_91(&uLocal_66, 2048);
											GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
										}
									}
									SCRIPT::REQUEST_SCRIPT(&cLocal_52);
									PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_68 != 4294967295)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_41(&iLocal_68);
									func_91(&uLocal_66, 2048);
									GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_52))
					{
						if (iLocal_68 != 4294967295)
						{
							func_41(&iLocal_68);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_87(uLocal_66, 1))
						{
							if (func_75(6) || func_75(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_70, 6, iLocal_72, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
							}
							func_33();
							if (Global_9197)
							{
								func_24(AUDIO::_0x0626A247D2405330());
							}
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 56);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&cLocal_52, iLocal_69);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
							Local_51 = { cLocal_52 };
							StringCopy(&cLocal_52, "", 64);
							func_91(&uLocal_66, 4);
							func_23();
							func_59(&uLocal_66, 2);
							func_80(6);
							func_19(&iLocal_79);
							if (iLocal_71 != 4294967295)
							{
								func_18(iLocal_71);
								func_15(func_17(iLocal_71), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_80(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_87(Global_19911, 262144))
					{
						func_91(&Global_19911, 262144);
						func_13();
					}
					if (func_87(uLocal_66, 2097152))
					{
						if (!func_73(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_80(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_9(&iLocal_79) * 1000f)), iLocal_71, 0);
						func_8(&iLocal_79);
						func_91(&uLocal_66, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_66, 2);
						}
						else if (func_87(uLocal_66, 2))
						{
							if (func_87(Global_19911, 0))
							{
								func_6(&iLocal_70);
								iLocal_70 = 4294967295;
								func_91(&uLocal_66, 2);
							}
							else
							{
								func_6(&iLocal_70);
								iLocal_70 = 4294967295;
								func_91(&uLocal_66, 2);
							}
						}
						func_80(0);
						if (iLocal_71 != 4294967295)
						{
							if (func_87(Global_19911, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_71), 0, Global_16C55, 0);
								func_5(func_17(iLocal_71), 0, Global_16C55, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_17(iLocal_71), 0, Global_16C55, 0);
								func_5(func_17(iLocal_71), 0, Global_16C55, 0, 0);
							}
						}
						func_4();
						func_91(&Global_19911, 0);
						if (func_87(uLocal_66, 16777216))
						{
							func_93(1);
						}
						if (iLocal_71 != 4294967295)
						{
							if (Global_19E56.f_2361)
							{
								if (!func_84(0, iLocal_71))
								{
									func_93(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_82 > (fLocal_74 * fLocal_74))
					{
						if (iLocal_77 != 263)
						{
							func_81(iLocal_77, 1, 0);
							iLocal_77 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_77 != 263)
					{
						func_81(iLocal_77, 0, 0);
					}
					if (iLocal_68 != 4294967295)
					{
						func_41(&iLocal_68);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_73))
					{
						if (func_1(sLocal_73))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_76 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							if (iLocal_78 == 2)
							{
								if (iLocal_78 == 2)
								{
									if (func_85(iLocal_72) && func_84(0, iLocal_71))
									{
										func_88();
										if (iLocal_77 != 263)
										{
											func_81(iLocal_77, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_78 == 0)
							{
								if (fLocal_82 > (fLocal_74 * fLocal_74))
								{
									if (iLocal_77 != 263)
									{
										func_81(iLocal_77, 1, 0);
										iLocal_77 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_78 == 1)
							{
								if (fLocal_82 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_77 != 263)
									{
										func_81(iLocal_77, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_77, 1, 0);
						}
					}
					else
					{
						iLocal_76++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0xBEC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xBFF
{
}

void func_3()//Position - 0xC07
{
}

void func_4()//Position - 0xC0F
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC17
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_1611D, 0, 4294967295) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_155D0);
	StringCopy(&Global_1611D, "", 64);
}

void func_6(int iParam0)//Position - 0xC5B
{
	if (*iParam0 == 4294967295)
	{
		return;
	}
	if (!*iParam0 == Global_8CEF)
	{
		*iParam0 = 4294967295;
		return;
	}
	*iParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

void func_7()//Position - 0xC98
{
	vector3 vVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_8(int iParam0)//Position - 0xCDA
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)//Position - 0xCF0
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)//Position - 0xD2F
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_11(var uParam0)//Position - 0xD87
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_12(var uParam0)//Position - 0xD97
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

int func_13()//Position - 0xDA7
{
	return 1;
}

void func_14()//Position - 0xDB0
{
}

void func_15(char* sParam0, int iParam1, int iParam2)//Position - 0xDB8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1611D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1611D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1611D, "", 64);
	}
	StringCopy(&Global_1611D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)//Position - 0xDF9
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

char* func_17(int iParam0)//Position - 0xE24
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)//Position - 0xF62
{
	var uVar0;
	vector3 vVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_19(int iParam0)//Position - 0xFB9
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)//Position - 0xFDA
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)//Position - 0xFE9
{
	iParam0->f_1 = (func_10(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int iParam0)//Position - 0x1017
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()//Position - 0x102F
{
	int iVar0;
	var uVar1[100];
	int iVar2;
	int iVar3;
	
	if (PED::GET_CLOSEST_PED(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &iVar0, 0, 0, 4294967295))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar2 = PED::GET_PED_NEARBY_PEDS(iVar0, &uVar1, 4294967295);
			NETWORK::_0x5E3AA4CA2B6FB0EE(iVar0);
		}
		if (iVar2 == 0)
		{
		}
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar3]))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(uVar1[iVar3]);
			}
			iVar3++;
		}
	}
}

void func_24(int iParam0)//Position - 0x10B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)//Position - 0x110D
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

int func_26(int iParam0)//Position - 0x1190
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x11C1
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11D6
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()//Position - 0x1258
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1289
{
	if (func_31(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x12A4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_32(int iParam0)//Position - 0x12F0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_33()//Position - 0x1339
{
	if (Global_C74[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C74[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C74[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 25);
	MISC::SET_BIT(&Global_950, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x13B6
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_162B5.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *iParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*iParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *iParam0)
		{
			return 1;
		}
		*iParam0 = 4294967295;
	}
	if (*iParam0 == 4294967295)
	{
		if (!func_85(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)//Position - 0x14ED
{
	int iVar0;
	
	if (Global_8CEE == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8CEE)
	{
		if (Global_8CF4[iVar0 /*4*/] == *uParam0)
		{
			Global_8CF4[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

int func_36(int iParam0)//Position - 0x153C
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()//Position - 0x155E
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_61, vLocal_64, fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
	}
	if (iLocal_88 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_88 = 0;
			sLocal_73 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)//Position - 0x159F
{
	return Global_19E56.f_612C[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)//Position - 0x15B2
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_54(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/] == 1 && Global_8FDB[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8FDB[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8FDB[iVar0 /*32*/].f_5 = 1;
			Global_8FDB[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8FDB[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8FDB[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x166A
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_41(int iParam0)//Position - 0x16A5
{
	int iVar0;
	
	if (*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
	if (iVar0 == 4294967295)
	{
		*iParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*iParam0 = 4294967295;
			return;
		}
	}
	*iParam0 = 4294967295;
}

void func_42(char* sParam0, int iParam1)//Position - 0x16FC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1718
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == 4294967295)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/] = 1;
			Global_8FDB[iVar0 /*32*/].f_1 = Global_90A4;
			Global_90A4++;
			Global_8FDB[iVar0 /*32*/].f_4 = 0;
			Global_8FDB[iVar0 /*32*/].f_1D = 0;
			Global_8FDB[iVar0 /*32*/].f_5 = 0;
			Global_8FDB[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8FDB[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8FDB[iVar0 /*32*/].f_6 = iParam3;
			Global_8FDB[iVar0 /*32*/].f_1F = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8FDB[iVar0 /*32*/].f_7 = 0;
			Global_8FDB[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8FDB[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8FDB[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8FDB[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8FDB[iVar0 /*32*/].f_C = 0;
				Global_8FDB[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(int iParam0)//Position - 0x1843
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iParam0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (!ENTITY::IS_ENTITY_IN_AIR(iParam0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)//Position - 0x187F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam2);
}

int func_46(int iParam0)//Position - 0x189C
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()//Position - 0x18F4
{
	func_48();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_48()//Position - 0x190D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_51(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_50(AUDIO::_0x0626A247D2405330());
			if (func_49(iVar0) && (!func_75(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_49(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_49(int iParam0)//Position - 0x1A0A
{
	return iParam0 < 3;
}

int func_50(int iParam0)//Position - 0x1A16
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)//Position - 0x1A53
{
	if (func_49(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)//Position - 0x1A7D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, 4294967295);
}

var func_53()//Position - 0x1A9F
{
	return Global_10B8E;
}

int func_54(int iParam0)//Position - 0x1AAB
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

bool func_55(int iParam0, int iParam1)//Position - 0x1B05
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

bool func_56()//Position - 0x1B40
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_57()//Position - 0x1B55
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)//Position - 0x1B6F
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

void func_59(var uParam0, int iParam1)//Position - 0x1B98
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)//Position - 0x1BA8
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()//Position - 0x1BB9
{
	if (func_75(6) || func_75(7))
	{
		return func_74(68);
	}
	return 1;
}

bool func_62()//Position - 0x1BDE
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0, 47))) || PED::_0xDCCA191DF9980FD7(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(CAM::_0xDC9DA9E8789F5246()));
}

int func_63(int iParam0)//Position - 0x1CE8
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_70()) || Global_19A9D) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_70()) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_70()) || Global_19A9D) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_70()) || Global_19A9D) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_68()) || func_67()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_55(8, 4294967295)) || func_57()) || func_65()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, 4294967295) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_70()) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_67()) || func_66()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_70()) || func_67()) || Global_19A9D) || Global_6375) || func_69()) || Global_9197) || func_55(8, 4294967295)) || func_66()) || func_65()) || func_57()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_70()) || Global_19A9D) || Global_6375) || func_69()) || func_55(8, 4294967295)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_64()//Position - 0x2405
{
	return Global_16C57.f_1;
}

int func_65()//Position - 0x2413
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_66()//Position - 0x2439
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_67()//Position - 0x2463
{
	return Global_16C64.f_148 > 0;
}

bool func_68()//Position - 0x2474
{
	return Global_16C64.f_147 > 0;
}

var func_69()//Position - 0x2485
{
	return Global_140859;
}

int func_70()//Position - 0x2491
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_71()//Position - 0x24AD
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()//Position - 0x24C7
{
	return Global_15C47;
}

int func_73(int iParam0)//Position - 0x24D3
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_75(6) || func_75(7))
			{
				return 1;
			}
			else
			{
				return func_73(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_85(5))
			{
				if (func_63(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)//Position - 0x2545
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13);
}

bool func_75(int iParam0)//Position - 0x2581
{
	return Global_8D15 == iParam0;
}

void func_76(var uParam0, int iParam1)//Position - 0x258F
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77()//Position - 0x25A0
{
}

int func_78()//Position - 0x25A8
{
	return 1;
}

void func_79()//Position - 0x25B1
{
}

void func_80(int iParam0)//Position - 0x25B9
{
	iLocal_67 = iParam0;
}

void func_81(int iParam0, bool bParam1, bool bParam2)//Position - 0x25C5
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 18);
		if (Global_64E7 == 1)
		{
			Global_64E8 = 1;
		}
		Global_64E7 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 15);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_64EA[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			HUD::REMOVE_BLIP(&(Global_64EA[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

int func_82()//Position - 0x26CE
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()//Position - 0x26EB
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)//Position - 0x2711
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

bool func_85(int iParam0)//Position - 0x275E
{
	return func_86(iParam0, Global_8D15);
}

int func_86(int iParam0, int iParam1)//Position - 0x276F
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_87(var uParam0, int iParam1)//Position - 0x2950
{
	return (uParam0 && iParam1) != 0;
}

void func_88()//Position - 0x295F
{
	StringCopy(&Local_51, "golf", 64);
	iLocal_71 = 2;
	fLocal_85 = 7f;
	func_76(&uLocal_66, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_75 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_88 = 0;
		sLocal_73 = "PLAY_GOLF";
	}
	else
	{
		iLocal_88 = func_90(ENTITY::DOES_ENTITY_EXIST(func_72()));
		sLocal_73 = "PAY_PLAY_GOLF";
	}
	iLocal_77 = 68;
	fLocal_74 = (SYSTEM::TO_FLOAT(func_89(iLocal_77)) + 5f);
	iLocal_69 = 25000;
}

int func_89(int iParam0)//Position - 0x29D3
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return 4294967295;
}

int func_90(bool bParam0)//Position - 0x2AEB
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_91(var uParam0, int iParam1)//Position - 0x2B02
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)//Position - 0x2B12
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_93(bool bParam0)//Position - 0x2B27
{
	if (bParam0)
	{
		if (iLocal_77 != 263)
		{
			func_81(iLocal_77, 0, 0);
		}
	}
	func_41(&iLocal_68);
	if (func_87(uLocal_66, 2048))
	{
		if (func_96(sLocal_73, iLocal_88))
		{
			func_91(&uLocal_66, 2048);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		}
	}
	if (func_87(uLocal_66, 2))
	{
		func_4();
		func_91(&uLocal_66, 2);
		func_6(&iLocal_70);
	}
	iLocal_70 = 4294967295;
	func_94();
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_94()//Position - 0x2B95
{
	func_91(&uLocal_66, 4);
	func_95();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&cLocal_52))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_52) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_52);
		}
	}
}

void func_95()//Position - 0x2BD2
{
}

int func_96(char* sParam0, int iParam1)//Position - 0x2BDA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

