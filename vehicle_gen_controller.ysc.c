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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 2;
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
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_114 = 4294967295;
	iLocal_115 = 4294967295;
	iLocal_120 = 4294967295;
	iLocal_125 = 4294967295;
	iLocal_151 = 4294967295;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Local_56.f_5 = 4294967295;
	Local_56 = 4294967295;
	Local_56.f_1 = 99999.99f;
	func_478(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_16252[iVar0 /*3*/][0] = 4294967295;
		Global_16252[iVar0 /*3*/][1] = 4294967295;
		iVar0++;
	}
	if (!Global_19E56.f_7F5D.f_12C2)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_19E56.f_7F5D.f_7BE[0 /*939*/].f_272[iVar0] = 4294967281;
			Global_19E56.f_7F5D.f_7BE[1 /*939*/].f_272[iVar0] = 4294967281;
			Global_19E56.f_7F5D.f_7BE[2 /*939*/].f_272[iVar0] = 4294967281;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_19E56.f_7F5D.f_78E[iVar0] = -1f;
			iVar0++;
		}
		Global_19E56.f_7F5D.f_12C1 = 4294967281;
		Global_19E56.f_7F5D.f_12C2 = 1;
	}
	if (((!func_477() && !func_476()) && !func_475()) && !func_474())
	{
		func_473(60, 0);
		func_473(61, 0);
	}
	func_472();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_471(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_11565)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_470();
						func_469();
					}
					Global_11565 = 0;
				}
				else
				{
					func_470();
					func_469();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
		{
			iLocal_129 = func_467();
			func_431();
			func_429();
			func_397(&iLocal_58);
			func_368();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2704.f_19, 7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 6) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 12))
			{
				fVar1 = SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == 4294967295)
					{
						iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000)));
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 30))
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(iParam0->f_9), false, 4294967295))
							{
								if (MISC::GET_GAME_TIMER() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										MISC::SET_BIT(iParam0, 30);
									}
								}
							}
						}
						else if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_1))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 30);
							AUDIO::RELEASE_SOUND_ID(iParam0->f_1);
							iParam0->f_1 = 4294967295;
							iParam0->f_2 = 4294967295;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 23))
				{
					func_2(iParam0);
				}
				GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 30);
				iParam0->f_2 = 4294967295;
			}
		}
	}
}

void func_2(int iParam0)//Position - 0x3C5
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 23);
}

void func_3(bool bParam0)//Position - 0x3D9
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 22);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2704.f_19), 22);
	}
}

void func_4(int iParam0, vector3 vParam1)//Position - 0x407
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, &Var0, vParam1, &Var1, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x453
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)//Position - 0x478
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
		vVar2 = { func_7(iParam0->f_6 - vVar1) * Vector(52.5f, 52.5f, 52.5f) };
		vVar0 = { vVar1 + vVar2 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)//Position - 0x4C5
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

bool func_8(int iParam0, int iParam1)//Position - 0x504
{
	bool bVar0;
	
	if (NETWORK::_0x5C497525F803486B(0, 36))
	{
		MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 22);
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2704.f_19, 22);
	if (iParam0 && bVar0)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2704.f_19), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()//Position - 0x557
{
	var uVar0;
	
	uVar0 = func_10(Global_19E56.f_2704.f_19, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)//Position - 0x575
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)//Position - 0x588
{
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, 4294967295);
	MISC::SET_BIT(iParam0, 23);
}

int func_12(int iParam0, int iParam1)//Position - 0x5A1
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()//Position - 0x5B7
{
	bool bVar0;
	
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2704.f_19, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)//Position - 0x5DE
{
	return iParam0 == func_15();
}

int func_15()//Position - 0x5ED
{
	return joaat("ig_orleans");
}

int func_16()//Position - 0x5FA
{
	return ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330());
}

void func_17(var uParam0)//Position - 0x60A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_142766.f_15)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == 4294967295)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_142766.f_15 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_142766[*uParam0 /*5*/][0] < fVar2)
			{
				Global_142766[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_142766[*uParam0 /*5*/][1] < fVar2)
			{
				Global_142766[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_142766[*uParam0 /*5*/][3] < fVar2)
			{
				Global_142766[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_142766[*uParam0 /*5*/][2] < fVar2)
			{
				Global_142766[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)//Position - 0x727
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return VEHICLE::_GET_VEHICLE_CLASS_MAX_SPEED(iParam0);
}

int func_19(int iParam0, int iParam1)//Position - 0x743
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return 4294967295;
}

void func_20()//Position - 0x872
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (HUD::DOES_BLIP_EXIST(Global_11188.f_247))
	{
		bVar0 = false;
		if (iLocal_129 != Global_11188.f_246)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_11188.f_24E)
		{
			if (!func_26(Global_11188.f_248, HUD::GET_BLIP_COORDS(Global_11188.f_247), 1056964608, 0) || func_22(Global_11188.f_246, func_23(Global_11188.f_246, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_11188.f_24F)
		{
			if (!func_26(Global_11188.f_24B, HUD::GET_BLIP_COORDS(Global_11188.f_247), 1056964608, 0) || func_22(Global_11188.f_246, func_23(Global_11188.f_246, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_11188.f_245) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_245, 0)) || (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_245, 0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_245) && !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_245, 0))
			{
				Global_11188.f_24B = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_245))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_245, 0))
			{
				Global_11188.f_24B = { unk_0x8000C77B5F336760(Global_11188.f_245, true) };
			}
			else
			{
				Global_11188.f_24B = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			HUD::REMOVE_BLIP(&(Global_11188.f_247));
			Global_11188.f_24E = 0;
			Global_11188.f_24F = 0;
			Global_11188.f_245 = 0;
		}
	}
	else
	{
		Global_11188.f_24E = 0;
		Global_11188.f_24F = 0;
		Global_11188.f_245 = 0;
	}
	if ((((((!HUD::DOES_BLIP_EXIST(Global_11188.f_247) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_1622C[iVar2] != 145 && Global_16236[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar2])) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar2], 0)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_16222[iVar2]))) && Global_1622C[iVar2] == iLocal_129) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_16222[iVar2])))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_16222[iVar2], 0))
				{
					Global_11188.f_245 = Global_16222[iVar2];
					Global_11188.f_246 = iLocal_129;
					Global_11188.f_24E = 0;
					Global_11188.f_247 = HUD::ADD_BLIP_FOR_ENTITY(Global_11188.f_245);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!HUD::DOES_BLIP_EXIST(Global_11188.f_247) && !func_21(Global_11188.f_248, 0f, 0f, 0f, 0))
			{
				Global_11188.f_245 = 0;
				Global_11188.f_246 = iLocal_129;
				Global_11188.f_24E = 1;
				Global_11188.f_247 = HUD::ADD_BLIP_FOR_COORD(Global_11188.f_248);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_11188.f_247) && !func_21(Global_11188.f_24B, 0f, 0f, 0f, 0))
			{
				Global_11188.f_245 = 0;
				Global_11188.f_246 = iLocal_129;
				Global_11188.f_24F = 1;
				Global_11188.f_247 = HUD::ADD_BLIP_FOR_COORD(Global_11188.f_24B);
			}
		}
		else
		{
			Global_11188.f_24E = 0;
			Global_11188.f_24F = 0;
		}
		if (HUD::DOES_BLIP_EXIST(Global_11188.f_247))
		{
			HUD::SET_BLIP_SPRITE(Global_11188.f_247, 225);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_11188.f_247, "PVEHICLE");
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_11188.f_247, false);
			HUD::SET_BLIP_PRIORITY(Global_11188.f_247, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			HUD::SET_BLIP_COLOUR(Global_11188.f_247, iVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xCFB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_22(int iParam0, int iParam1)//Position - 0xD42
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar1]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar1], 0))
		{
			if (Global_1622C[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_16222[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)//Position - 0xDB2
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)//Position - 0xDF4
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_19E56.f_2361.f_63.f_3A[128] && !Global_19E56.f_2361.f_63.f_3A[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19E56.f_2361.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_19E56.f_2361.f_63.f_3A[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)//Position - 0x104B
{
	return iParam0 < 3;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1057
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (MISC::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)//Position - 0x10D2
{
	return Global_8D15 == iParam0;
}

void func_28()//Position - 0x10E0
{
	func_310();
	func_226();
	func_68();
	func_29();
}

void func_29()//Position - 0x10F8
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (((((Local_56.f_1D.f_50 && !Local_56.f_1D.f_45) && Local_56 != 4294967295) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_56.f_71))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_71 = iVar0;
						}
					}
				}
			}
			else if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Local_56.f_71, 0) && func_64(ENTITY::GET_ENTITY_MODEL(Local_56.f_71)))
			{
				if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Local_56.f_71, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_56.f_71, Local_56.f_1D.f_30, Local_56.f_1D.f_33, Local_56.f_1D.f_36, 0, true, 0))
					{
						if ((!func_63(Local_56.f_71) && !func_62(Local_56.f_71)) && Local_56.f_71 != Global_11188.f_1E4[Local_56])
						{
							func_30(Local_56, Local_56.f_71, 1);
						}
						Local_56.f_71 = 0;
					}
				}
			}
			else
			{
				Local_56.f_71 = 0;
			}
		}
		else
		{
			Local_56.f_71 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x125C
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (!func_61(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 12) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_11188.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_11513 != 4294967295 && Global_11513 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19E56.f_7F5D.f_12C1 = func_50();
			}
			if (iParam1 != Global_11188.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_11512 = iParam1;
				Global_11513 = iParam0;
				Global_11514 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x1379
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, 4294967295);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19E56.f_933.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19E56.f_7F5D.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19E56.f_7F5D.f_15D6 = iParam1;
	Global_11511 = iParam0;
	Global_19E56.f_7F5D.f_15D4 = 1;
	func_32(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

void func_32(int iParam0, var uParam1)//Position - 0x157B
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_35(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						MISC::SET_BIT(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 11);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 27);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 27);
		}
	}
}

int func_33(int iParam0)//Position - 0x1824
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)//Position - 0x18D4
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x1AC7
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x1AE7
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_37(int iParam0)//Position - 0x1B97
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)//Position - 0x1C74
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)//Position - 0x1E25
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_43())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_477() && !func_476()) && !func_475()) && !func_474()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_475())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x1FA5
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_41()//Position - 0x2069
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x2080
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_43()//Position - 0x3D7B
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x3E36
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x3E7C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[24]))
	{
		if (iParam0 == Global_11188.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_11188.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x3F64
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				return Global_1622C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)//Position - 0x3FC7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x4039
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x4111
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_11188.f_8B[iParam0];
}

int func_50()//Position - 0x412D
{
	var uVar0;
	
	func_60(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_59(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_58(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_53(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_52(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_51(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_51(var uParam0, int iParam1)//Position - 0x4173
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_52(var uParam0, int iParam1)//Position - 0x41F9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)//Position - 0x422C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_54(int iParam0, int iParam1)//Position - 0x427D
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_55(int iParam0)//Position - 0x431F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_56(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)//Position - 0x4344
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)//Position - 0x435B
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)//Position - 0x4368
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_59(var uParam0, int iParam1)//Position - 0x43A2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_60(var uParam0, int iParam1)//Position - 0x43DD
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_61(var uParam0, int iParam1)//Position - 0x4419
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = 4294967295;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_43())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19E56.f_7F5D.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19E56.f_7F5D.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19E56.f_7F5D.f_78E[uParam0->f_E];
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 19))
	{
		if (!func_21(Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 20))
	{
		if (!func_21(Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_62(int iParam0)//Position - 0x5B10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16240[iVar0]))
		{
			if (Global_16240[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x5B4B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (Global_16222[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x5BC7
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::_IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0 == joaat("SUBMERSIBLE2")) || iParam0 == joaat("DODO"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 != joaat("SKYLIFT"));
			break;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x5C5B
{
	if ((iParam0 == joaat("MARSHALL") || iParam0 == joaat("BARRACKS")) || iParam0 == joaat("CRUSADER"))
	{
		return 0;
	}
	if (iParam0 == joaat("RHINO"))
	{
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)//Position - 0x5CCF
{
	if (iParam0 == joaat("JET"))
	{
		return 0;
	}
	if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) && iParam0 != joaat("MARSHALL")) && iParam0 != joaat("RHINO")) && iParam0 != joaat("BARRACKS")) && iParam0 != joaat("CRUSADER"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)//Position - 0x5D28
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_68()//Position - 0x5D4B
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	Var0.f_4E = 4294967295;
	Var0.f_4F = 4294967295;
	Var0.f_60 = 4294967295;
	Var0.f_61 = 1;
	Var0.f_63 = 132;
	Var0.f_64 = 4294967295;
	Var1.f_9 = 49;
	Var1.f_3B = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56 == 4294967295 || PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0, true, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[Local_56], 0)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56]) || PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56], 1)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]) && ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(AUDIO::_0x0626A247D2405330()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56])))) || ((ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]) && ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330())) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56], 1))) || (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_225(0) != bLocal_161) || bLocal_142) || func_224(3212836864))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) && !Global_10B8E) && !bLocal_142) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_56.f_1D.f_50 && Local_56.f_2 == 0) && (Global_11188.f_250[0] != 4294967295 || func_223() != 0)) && Local_56 != 4294967295) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_224(3212836864))
				{
					if (iLocal_115 != 4294967295)
					{
					}
					else if (func_67(Local_56, 0) && func_67(Local_56, 5))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0, true, 0) && !PED::IS_PED_CLIMBING(AUDIO::_0x0626A247D2405330())) && !ENTITY::IS_ENTITY_ATTACHED(AUDIO::_0x0626A247D2405330()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[Local_56], 0)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56]) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_1E4[Local_56], 1)))
							{
								iVar6 = func_223();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_64(func_219(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_11188.f_250)
								{
									if (Global_11188.f_250[iVar4] != 4294967295)
									{
										if ((func_218(Global_11188.f_250[iVar4], iLocal_129) && Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[Global_11188.f_250[iVar4]] == 4294967281) && (Global_11188.f_250[iVar4] != 200 || !Global_19E56.f_61D5.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_217(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_217(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_225(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216("HANGAR_NO"))
										{
											func_215("HANGAR_NO", 4294967295);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216("MARINA_NO"))
										{
											func_215("MARINA_NO", 4294967295);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216("HELIPAD_NO"))
										{
											func_215("HELIPAD_NO", 4294967295);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216(&Var8))
										{
											func_215(&Var8, 4294967295);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && func_213(0, 4294967295, 0))
			{
				if (iLocal_115 != 4294967295)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_212(iLocal_114, 1))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 256);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
						{
							unk_0x4E87F356DA56EB3F(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), false);
						}
					}
					func_211();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_109 = 4294967295;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 4, 0, 0, 0);
				func_208(1, 2, 1, 1, 1);
				func_207("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = 4294967295;
				iVar11 = 0;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0;
				iVar14 = func_223();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_219(iVar12)))
					{
						if (iVar10 == 4294967295)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_219(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_11188.f_250)
				{
					if (Global_11188.f_250[iVar12] != 4294967295)
					{
						if ((func_218(Global_11188.f_250[iVar12], iLocal_129) && Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[Global_11188.f_250[iVar12]] == 4294967281) && (Global_11188.f_250[iVar12] != 200 || !Global_19E56.f_61D5.f_7))
						{
							func_137(Global_11188.f_250[iVar12], &Var0, 0, iLocal_129, 4294967295, 4294967295);
							if (iVar10 == 4294967295)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_42)
							{
								iLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == 4294967295)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_223();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_219(iVar12)))
					{
						MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_133(iVar13, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_219(iVar12)), 0, 1, 0, 0);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_132(iVar13, 4, 0);
						}
						else
						{
							func_132(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_11188.f_250)
				{
					if (Global_11188.f_250[iVar12] != 4294967295)
					{
						if ((func_218(Global_11188.f_250[iVar12], iLocal_129) && Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[Global_11188.f_250[iVar12]] == 4294967281) && (Global_11188.f_250[iVar12] != 200 || !Global_19E56.f_61D5.f_7))
						{
							MISC::SET_BIT(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_137(Global_11188.f_250[iVar12], &Var0, 0, iLocal_129, 4294967295, 4294967295);
							if (Global_11188.f_250[iVar12] != 164)
							{
								func_133(iVar13, func_130(Global_11188.f_250[iVar12]), 0, 1, 0, 0);
							}
							else if (Var0.f_43 == 0)
							{
								func_133(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_127(func_130(Global_11188.f_250[iVar12]), 0);
								func_127("VNX_SWFTC", 0);
							}
							else if (Var0.f_43 == 1)
							{
								func_133(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_127(func_130(Global_11188.f_250[iVar12]), 0);
								func_127("VNX_SWFTB", 0);
							}
							else
							{
								func_133(iVar13, func_130(Global_11188.f_250[iVar12]), 0, 1, 0, 0);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_132(iVar13, 4, 0);
							}
							else
							{
								func_132(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_126(iLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, 4294967295, 1);
						if (func_121())
						{
							if (Global_411C36 != iLocal_109)
							{
								unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_109 = Global_411C36;
								func_126(iLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_119 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (iLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							iLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + 4294967295);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								iLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + 4294967295);
						}
					}
					if (bVar16)
					{
						func_126(iLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_119 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							iLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (iLocal_109 - 1))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								iLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_126(iLocal_109, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_223();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_64(func_219(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_219(iVar20) || !ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56])) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[Local_56], 0)) || Local_56 == 21) || Local_56 == 22) || Local_56 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_219(iVar20)) || (!iLocal_118 && Local_56 == 21)) || (!iLocal_118 && Local_56 == 22)) || (!iLocal_118 && Local_56 == 23))
								{
									func_120("VEH_SELECT_CNFA", 0, 0);
									func_119(4294967295);
									func_118(201, "ITEM_YES", 4294967295);
									func_118(202, "ITEM_NO", 4294967295);
									iLocal_118 = 1;
									iVar20 = func_223() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_117(func_219(iVar20)))
									{
										iLocal_160 = func_219(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										iLocal_111 = 0;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_219(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_117(func_219(iVar20)))
								{
									iLocal_160 = func_219(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									iLocal_111 = 0;
									iLocal_113++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_1E4[Local_56], false, 1);
										VEHICLE::DELETE_VEHICLE(&(Global_11188.f_1E4[Local_56]));
									}
									Var1.f_42 = func_219(iVar20);
									MISC::SET_BIT(&(Var1.f_4D), 14);
									func_114(Local_56, &Var1, 0f, 0f, 0f, -1f, 145);
									func_113(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_223() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_11188.f_250)
						{
							if (Global_11188.f_250[iVar20] != 4294967295)
							{
								if ((func_218(Global_11188.f_250[iVar20], iLocal_129) && Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[Global_11188.f_250[iVar20]] == 4294967281) && (Global_11188.f_250[iVar20] != 200 || !Global_19E56.f_61D5.f_7))
								{
									func_137(Global_11188.f_250[iVar20], &Var0, 0, iLocal_129, 4294967295, 4294967295);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_42 || !ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56])) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[Local_56], 0)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_120("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_120("VEH_SELECT_CNFA", 0, 0);
											}
											func_119(4294967295);
											func_118(201, "ITEM_YES", 4294967295);
											func_118(202, "ITEM_NO", 4294967295);
											iLocal_118 = 1;
											iVar20 = Global_11188.f_250 + 1;
										}
										else if (Var0.f_42 == joaat("MARSHALL"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_11188.f_250 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_1E4[Local_56], false, 1);
												VEHICLE::DELETE_VEHICLE(&(Global_11188.f_1E4[Local_56]));
											}
											func_137(Global_11188.f_250[iVar20], &Var0, 0, iLocal_129, 4294967295, 4294967295);
											MISC::SET_BIT(&(Var0.f_4D), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
											{
												MISC::SET_BIT(&(Var0.f_4D), 22);
											}
											func_114(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
											func_113(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_11188.f_250 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(4294967295);
				func_118(201, "ITEM_SELECT", 4294967295);
				func_118(202, "ITEM_EXIT", 4294967295);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 0, 0, 0, 0);
				func_208(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_207("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_133(iVar23, &Var24, 0, 1, 0, 0);
					MISC::SET_BIT(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_C == 0)
				{
					iLocal_111 = Global_19E56.f_6242.f_139[200];
				}
				else if (Local_131.f_C == 1)
				{
					iLocal_111 = Global_19E56.f_6242.f_272[200];
				}
				else
				{
					iLocal_111 = Global_19E56.f_6242.f_3AB[200];
				}
				func_126(iLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, 4294967295, 1);
						if (func_121())
						{
							if (Global_411C36 != iLocal_111)
							{
								unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_111 = Global_411C36;
								func_126(iLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_119 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (iLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							iLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + 4294967295);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								iLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + 4294967295);
						}
					}
					if (bVar26)
					{
						func_126(iLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_119 = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							iLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (iLocal_111 - 1))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								iLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_126(iLocal_111, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[Local_56]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_1E4[Local_56], false, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_11188.f_1E4[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_19E56.f_6242.f_139[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_19E56.f_6242.f_272[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_19E56.f_6242.f_3AB[200] = uVar29;
					}
					func_137(200, &Var0, 0, iLocal_129, 4294967295, 4294967295);
					MISC::SET_BIT(&(Var0.f_4D), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
					{
						MISC::SET_BIT(&(Var0.f_4D), 22);
					}
					func_114(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
					func_113(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(4294967295);
				func_118(201, "ITEM_SELECT", 4294967295);
				func_118(202, "ITEM_EXIT", 4294967295);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), 0))
				{
					if (!AUDIO::_IS_PLAYER_VEHICLE_RADIO_ENABLED())
					{
						unk_0x4E87F356DA56EB3F(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0), true);
					}
				}
			}
			func_71(1, 4294967295);
			iLocal_113 = 0;
			func_69(&iLocal_114);
			iLocal_114 = 4294967295;
			break;
	}
	if (!bVar2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_162))
		{
			if ((((func_216("HANGAR_NO") || func_216("MARINA_NO")) || func_216("HELIPAD_NO")) || func_216("CAR_GAR_NO_1")) || func_216("CAR_GAR_NO_2"))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)//Position - 0x73C4
{
	int iVar0;
	
	if (*iParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
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

int func_70(int iParam0)//Position - 0x741B
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

void func_71(bool bParam0, int iParam1)//Position - 0x7456
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
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
		func_72(&(Global_43D7.f_161A[iVar0 /*10*/]));
		Global_43D7.f_1657[iVar0] = 0;
	}
	else
	{
		Global_43D7.f_1657[iVar0] = 0;
	}
}

void func_72(int iParam0)//Position - 0x7514
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

int func_73(var uParam0, bool bParam1, int iParam2)//Position - 0x753D
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

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x75DA
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_110(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43D7)
	{
		if (func_108(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43D7 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar58 = Global_43D5;
	}
	else
	{
		fVar58 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43D6;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar59, &iVar60);
		fVar62 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_107())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_107())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43D7.f_165E)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_43D5;
			}
			else
			{
				if (Global_43D7)
				{
					StringCopy(&cVar64, func_106(29), 64);
					StringCopy(&cVar65, func_103(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
					{
						func_102(Global_43D4, Global_43D5, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_43D4 + (fParam5 * 0.5f)), (Global_43D5 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43D7.f_1F7D)
				{
					iVar1 = Global_43D7.f_1F79;
					iVar2 = Global_43D7.f_1F7A;
					iVar3 = Global_43D7.f_1F7B;
					iVar4 = Global_43D7.f_1F7C;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_102(Global_43D4, (Global_43D5 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) != 0)
				{
					func_101();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43D7.f_44)
					{
						if (Global_43D7.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43D7.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_E[iVar16], Global_43D7.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43D7.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43D7.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43D7.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_43D4 + 0.00390625f), ((Global_43D5 + fVar56) + 0.00416664f), 0);
				}
				if (Global_43D7.f_1661 > Global_43D7.f_1467)
				{
					if (Global_43D7.f_1664 != 0)
					{
						func_101();
						func_99((((Global_43D4 + fParam5) - 0.00390625f) - func_100("CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663)), ((Global_43D5 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663);
					}
				}
			}
			iVar6 = Global_43D7.f_1665;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43D7.f_1F87)
			{
				iVar1 = Global_43D7.f_1F83;
				iVar2 = Global_43D7.f_1F84;
				iVar3 = Global_43D7.f_1F85;
				iVar4 = Global_43D7.f_1F86;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43D7.f_1467 && iVar6 <= Global_43D7.f_1460)
			{
				if (iVar6 >= 0)
				{
					if (Global_43D7.f_156B[iVar6])
					{
						if (Global_43D7.f_14EA[iVar6] && iVar6 != Global_43D7.f_1665)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar55 = Global_43D7.f_166C[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43D7.f_1460 <= 1)
					{
						Global_43D7.f_1460++;
					}
					iVar53 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43D7.f_1661 > Global_43D7.f_1467)
			{
				if (Global_43D7.f_1F8C)
				{
					iVar1 = Global_43D7.f_1F88;
					iVar2 = Global_43D7.f_1F89;
					iVar3 = Global_43D7.f_1F8A;
					iVar4 = Global_43D7.f_1F8B;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_102(Global_43D4, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43D7.f_1F99)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_1252)) != 0 && Global_43D7.f_129C != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_43D7.f_129E != 0)
				{
					func_108(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_98(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_102(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_98(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43D7.f_1298)
				{
					if (Global_43D7.f_1256[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_125B[iVar15]);
						iVar15++;
					}
					else if (Global_43D7.f_1256[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_125F[iVar16], Global_43D7.f_1263[iVar16]);
						iVar16++;
					}
					else if (Global_43D7.f_1256[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43D7.f_1256[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_1267[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43D7.f_129E != 0)
				{
					func_108(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					func_97(Global_43D7.f_129E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_129E), func_103(Global_43D7.f_129E, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43D7.f_129C > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_43D7.f_129D) > Global_43D7.f_129C)
					{
						StringCopy(&(Global_43D7.f_1252), "", 16);
						Global_43D7.f_129C = 4294967295;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_411BEA.f_15)) != 0 && Global_411BEA.f_41 != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43D4 + 0.0046875f);
				if (Global_411BEA.f_43 != 0)
				{
					func_108(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_98(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_102(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43D7.f_1F91)
				{
					iVar1 = Global_43D7.f_1F8D;
					iVar2 = Global_43D7.f_1F8E;
					iVar3 = Global_43D7.f_1F8F;
					iVar4 = Global_43D7.f_1F90;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_43D4 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_98(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_411BEA.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_411BEA.f_3D)
				{
					if (Global_411BEA.f_19[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_411BEA.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_411BEA.f_19[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_411BEA.f_22[iVar16], Global_411BEA.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_411BEA.f_19[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_411BEA.f_19[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_411BEA.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_411BEA.f_43 != 0)
				{
					func_108(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_97(Global_411BEA.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_106(Global_411BEA.f_43), func_103(Global_411BEA.f_43, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_411BEA.f_41 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_411BEA.f_42) > Global_411BEA.f_41)
					{
						StringCopy(&(Global_411BEA.f_15), "", 16);
						Global_411BEA.f_41 = 4294967295;
					}
				}
			}
			func_89(iVar59, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43D7.f_165E)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43D7.f_1460;
			if (Global_43D7.f_165F)
			{
				iVar67 = (Global_43D7.f_1662 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43D7.f_166C[iVar6] != 0f)
				{
					fVar55 = Global_43D7.f_166C[iVar6];
				}
				if (Global_43D7.f_165F)
				{
					iVar6 = Global_43D7.f_1E20[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43D7.f_1665 && iVar9 < Global_43D7.f_1467)
				{
					bVar33 = true;
					if (Global_43D7.f_1666 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43D7.f_14EA[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43D7.f_16F2[iVar6] = fVar35;
				fVar34 = (Global_43D4 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43D7.f_1666 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43D7.f_1F93)
					{
						HUD::GET_HUD_COLOUR(Global_43D7.f_1F92, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_43D4 + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43D7.f_16F0 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_87(bVar32, 1, 0, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43D7.f_1468)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_43D7.f_13DF[iVar6], iVar8) || Global_43D7.f_13BE[iVar8] == 5)
						{
							if (Global_43D7.f_165F)
							{
								iVar19 = Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar20 = Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar21 = Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar22 = Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)];
								iVar23 = Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)];
							}
							else
							{
								Global_43D7.f_1E30[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar19;
								Global_43D7.f_1E59[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar20;
								Global_43D7.f_1E82[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar21;
								Global_43D7.f_1EAB[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar22;
								Global_43D7.f_1ED4[((iVar9 * Global_43D7.f_1468) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43D7.f_1776[0] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43D7.f_1776[1] != 4294967295)
							{
								if ((iVar6 * 5 + iVar8) == Global_43D7.f_1773[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43D7.f_13C4[iVar8] != -1f)
							{
								fVar34 = ((Global_43D4 + 0.0046875f) + Global_43D7.f_13C4[iVar8]);
							}
							if ((iVar8 < 4 && Global_43D7.f_13C4[iVar8 + 1] != -1f) && fVar34 < Global_43D7.f_13C4[iVar8 + 1])
							{
								fVar44 = (Global_43D7.f_13C4[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43D4 + Global_43D6) - 0.0046875f) - fVar34);
							}
							if ((Global_43D7.f_13D1[iVar8] && Global_43D7.f_16ED) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43D7.f_13BE[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_43D7.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_108(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43D7.f_1151[(iVar22 + iVar14)] == 2 || Global_43D7.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
											Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_86(bVar32);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_43D7.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[(iVar21 + iVar27)], Global_43D7.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar28)] == 2 || Global_43D7.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_108(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_108(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_97(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[(iVar22 + iVar28)]), func_103(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[(iVar22 + iVar28)]), func_103(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43D7.f_13D9[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
												if (func_85() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_87(0, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
														HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
														GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
														HUD::ADD_TEXT_COMPONENT_INTEGER((Global_43D7.f_1665 + iVar30));
														HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43D7.f_1151[(iVar22 + iVar14)] != 2 && Global_43D7.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_108(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_108(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_97(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_1151[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[(iVar22 + iVar14)]), func_103(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (Global_43D4 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[(iVar22 + iVar14)]), func_103(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[(iVar22 + iVar14)]), func_103(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43D7.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_86(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[iVar20]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_84((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43D7.f_165F)
										{
											func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43D7.f_1F97 && Global_43D7.f_1F98 == iVar6)
											{
												func_86(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_43D7.f_13D9[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43D7.f_13D9[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
											Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
											fVar41 = Global_43D7.f_1F26[((iVar9 * Global_43D7.f_1468) + iVar8)];
										}
										if (bVar52)
										{
											if (func_108(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_87(bVar32, Global_43D7.f_64A[iVar24], Global_43D7.f_74B[iVar24], bVar54, 0, 0, 0);
										func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_43D7.f_104F[iVar21], Global_43D7.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_108(Global_43D7.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43D7.f_165F)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43D7.f_13D9[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar40;
												Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43D7.f_1EFD[((iVar9 * Global_43D7.f_1468) + iVar8)];
												fVar42 = Global_43D7.f_1F4F[((iVar9 * Global_43D7.f_1468) + iVar8)];
											}
											if (bVar52)
											{
												if (func_108(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43D7.f_13D9[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_97(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_106(26), func_103(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_108(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_108(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_97(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_106(27), func_103(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_108(Global_43D7.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_97(Global_43D7.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_106(Global_43D7.f_1151[iVar22]), func_103(Global_43D7.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_82(Global_43D7.f_1151[iVar22])), (fVar37 * func_82(Global_43D7.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43D7.f_13BE[iVar8] == 5)
							{
								if (Global_43D7.f_13CA[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
								if (Global_43D7.f_13D1[iVar8])
								{
									if (func_108(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43D7.f_13CA[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43D7.f_1E20[iVar9] = iVar6;
						Global_43D7.f_1667 = iVar6;
						iVar9++;
						if (Global_43D7.f_14EA[iVar6])
						{
							iVar13++;
						}
						if (Global_43D7.f_166C[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43D7.f_166C[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43D7.f_165E)
					{
						Global_43D7.f_156B[iVar6] = 1;
						if (Global_43D7.f_1469[iVar6])
						{
							if (bVar32)
							{
								Global_43D7.f_1664 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43D7.f_1664 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43D7.f_165E)
			{
				Global_43D7.f_1660 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43D7.f_1663 = iVar11;
				Global_43D7.f_1661 = iVar10;
				Global_43D7.f_165E = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43D7.f_165F)
	{
		Global_43D7.f_1662 = iVar9;
		Global_43D7.f_165F = 1;
	}
	Global_43D7.f_16EF = fVar49;
	Global_43D7.f_16F1 = MISC::GET_GAME_TIMER();
	HUD::_CLEAR_NOTIFICATIONS_POS(Global_43D7.f_16EF);
	if (!Global_43D7.f_1F78)
	{
		func_76(0);
	}
	Global_43D7.f_1F78 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_75(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_75(int iParam0)//Position - 0xA23E
{
	Global_14E696.f_437 = iParam0;
}

void func_76(int iParam0)//Position - 0xA24F
{
	if (func_81())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_80(0))
		{
			func_77(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_77(int iParam0)//Position - 0xA282
{
	if (func_81())
	{
		return;
	}
	if (Global_3959)
	{
		func_79(0, 0);
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
	if (!func_78())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_78()//Position - 0xA2FC
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)//Position - 0xA323
{
	if (bParam0)
	{
		if (func_80(0))
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

int func_80(int iParam0)//Position - 0xA397
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

bool func_81()//Position - 0xA3F1
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

float func_82(int iParam0)//Position - 0xA403
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_83(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xA472
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_84(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xA491
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_85()//Position - 0xA4AF
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

void func_86(bool bParam0)//Position - 0xA4C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_43D7.f_1F94[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA506
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_88(Global_43D7.f_1776[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_88(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA6B4
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_89(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xA93E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_110(bParam4, bParam8))
	{
		return;
	}
	if (func_95())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_92(CAM::_0xDC9DA9E8789F5246(), 0))
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
					func_91(&(Global_43D7.f_12A1[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_43D7.f_1362[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_91(&(Global_43D7.f_12A1[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43D7.f_1393[iVar1] == 4294967295)
					{
						func_90(&(Global_43D7.f_1362[iVar1 /*4*/]));
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
				func_91(&Global_411BEA);
				if (Global_411BEA.f_14 == 4294967295)
				{
					func_90(&(Global_411BEA.f_10));
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

void func_90(char* sParam0)//Position - 0xAE45
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_91(char* sParam0)//Position - 0xAE57
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_92(int iParam0, int iParam1)//Position - 0xAE65
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_93(4294967295, 0) == 8;
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

int func_93(int iParam0, bool bParam1)//Position - 0xAEB0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_94();
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

int func_94()//Position - 0xAEF1
{
	return Global_1407E0;
}

int func_95()//Position - 0xAEFD
{
	vector3 vVar0;
	
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	if (func_96())
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

int func_96()//Position - 0xAF6B
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAF85
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
		
		case 52:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_98(float fParam0)//Position - 0xB074
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_99(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xB0D3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_100(char* sParam0, int iParam1, int iParam2)//Position - 0xB0F6
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_101();
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_101()//Position - 0xB138
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43D7.f_1F82)
	{
		iVar0 = Global_43D7.f_1F7E;
		iVar1 = Global_43D7.f_1F7F;
		iVar2 = Global_43D7.f_1F80;
		iVar3 = Global_43D7.f_1F81;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_43D4 + 0.0046875f), ((Global_43D4 + Global_43D6) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB1C2
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_103(int iParam0, bool bParam1)//Position - 0xB1F1
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1ACF[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_105(CAM::_0xDC9DA9E8789F5246()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_104(&uVar1);
			}
		}
		else
		{
			return func_104(&(Global_43D7.f_1ACF[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_104(var uParam0)//Position - 0xB65C
{
	return uParam0;
}

struct<13> func_105(int iParam0)//Position - 0xB666
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_106(int iParam0)//Position - 0xB67D
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_177E[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_177E[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_105(CAM::_0xDC9DA9E8789F5246()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_104(&uVar0);
		}
		else
		{
			return func_104(&(Global_43D7.f_177E[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_107()//Position - 0xB6F2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB724
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_106(iParam0), 64);
	StringCopy(&cVar1, func_103(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_107())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_107())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_109(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_109(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43D6)
			{
				*fParam4 = (*fParam4 * (Global_43D6 / *fParam3));
				*fParam3 = Global_43D6;
			}
		}
		return 1;
	}
	return 0;
}

float func_109(int iParam0)//Position - 0xB8D5
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_110(bool bParam0, bool bParam1)//Position - 0xB974
{
	if (Global_252F9E.f_761.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_112(8, 4294967295) && func_111() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_11729) || Global_43D7.f_1F9A) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_16C64.f_571)
	{
		return 0;
	}
	return 1;
}

int func_111()//Position - 0xBA11
{
	return Global_140818;
}

bool func_112(int iParam0, int iParam1)//Position - 0xBA1D
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

void func_113(int iParam0)//Position - 0xBA58
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	Global_11188[iParam0] = 0;
	Global_11188.f_45[iParam0] = 0;
}

void func_114(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xBA7D
{
	if (func_61(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
		{
			func_116(iParam0);
			func_115(uParam1, &(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]));
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_473(iParam0, 1);
		}
	}
}

void func_115(var uParam0, var uParam1)//Position - 0xBB7C
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_116(int iParam0)//Position - 0xBC48
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_61(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
			Global_11188.f_8B[iParam0] = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			func_473(iParam0, 0);
		}
	}
}

int func_117(int iParam0)//Position - 0xBCC2
{
	switch (iParam0)
	{
		case joaat("MARSHALL"):
			return 1;
			break;
	}
	return 0;
}

void func_118(int iParam0, char* sParam1, int iParam2)//Position - 0xBCDF
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
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_43D7.f_13BA), Global_43D7.f_129F);
	StringCopy(&(Global_43D7.f_12A1[Global_43D7.f_129F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43D7.f_1362[Global_43D7.f_129F /*4*/]), sParam1, 16);
	Global_43D7.f_1393[Global_43D7.f_129F] = iParam2;
	Global_43D7.f_13A0[Global_43D7.f_129F] = iParam0;
	Global_43D7.f_13AD[Global_43D7.f_129F] = 32;
	Global_43D7.f_129F++;
}

void func_119(int iParam0)//Position - 0xBD8E
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
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_43D7.f_161A[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

void func_120(char* sParam0, int iParam1, int iParam2)//Position - 0xBE36
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1252), sParam0, 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = iParam1;
	Global_43D7.f_129D = MISC::GET_GAME_TIMER();
	Global_43D7.f_129E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
}

int func_121()//Position - 0xBE9B
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_411C36 > 4294967295)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122(int iParam0, int iParam1, bool bParam2)//Position - 0xBEC2
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_411C36 == 4294967290)
	{
		HUD::_SET_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_411C36 = 4294967295;
			return 0;
		}
	}
	if (((Global_411C36 > 4294967295 || Global_411C36 == 4294967293) || Global_411C36 == 4294967294) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_411C36 == 4294967295 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_CURSOR_SPRITE(4);
			Global_411C36 = 4294967290;
			return 1;
		}
		else
		{
			HUD::_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xBFA2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 4294967295;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_411C36 = 4294967295;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43D4;
	fVar2 = (fVar0 + Global_43D6);
	fVar3 = Global_43D7.f_1660;
	fVar1 = (Global_43D7.f_1660 - (IntToFloat(Global_43D7.f_1662) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43D7.f_1662 < 1)
	{
		fVar1 = (Global_43D7.f_1660 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_125();
	if (Global_411C36 == 4294967290)
	{
		return;
	}
	Global_411C36 = 4294967295;
	fVar7 = Global_411C30;
	fVar8 = Global_411C31;
	if (Global_43D7.f_1663 > Global_43D7.f_1662)
	{
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= fVar3) && Global_411C31 < (fVar3 + fVar6))
		{
			Global_411C36 = 4294967294;
			if (bParam3)
			{
				func_124(0);
			}
			return;
		}
		if (((Global_411C30 >= fVar0 && Global_411C30 <= fVar2) && Global_411C31 >= (fVar3 + fVar6)) && Global_411C31 < (fVar3 + 0.034722f))
		{
			Global_411C36 = 4294967293;
			if (bParam3)
			{
				func_124(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43D7.f_1663 == 4294967295)
		{
			Global_411C36 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43D7.f_1662);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_102(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43D6, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_411C36 = Global_43D7.f_1E20[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_411C36 = 4294967292;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_411C36 = 4294967291;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_411C36 = 4294967292;
		return;
	}
	Global_411C36 = 4294967295;
}

void func_124(bool bParam0)//Position - 0xC253
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43D4;
	fVar1 = Global_43D7.f_1660;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_411C36 == 4294967294)
	{
		func_102(fVar0, fVar1, Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_411C36 == 4294967293)
	{
		func_102(fVar0, (fVar1 + fVar2), Global_43D6, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_125()//Position - 0xC2DC
{
	Global_411C32 = Global_411C30;
	Global_411C33 = Global_411C31;
	Global_411C30 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_411C31 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_411C34 = (Global_411C30 - Global_411C32);
	Global_411C35 = (Global_411C31 - Global_411C33);
}

void func_126(int iParam0, bool bParam1, int iParam2)//Position - 0xC324
{
	int iVar0;
	int iVar1;
	
	Global_43D7.f_1666 = iParam0;
	Global_43D7.f_16ED = iParam2;
	if (Global_43D7.f_1666 < Global_43D7.f_1665)
	{
		Global_43D7.f_1665 = Global_43D7.f_1666;
	}
	else if ((Global_43D7.f_165F && Global_43D7.f_1666 > Global_43D7.f_1667) || (!Global_43D7.f_165F && Global_43D7.f_1666 >= (Global_43D7.f_1665 + Global_43D7.f_1467)))
	{
		iVar0 = Global_43D7.f_1665;
		while (iVar0 <= Global_43D7.f_1666)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43D7.f_13DF[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43D7.f_1467 && Global_43D7.f_1665 < 128)
		{
			Global_43D7.f_1665++;
			iVar1 = 0;
			iVar0 = Global_43D7.f_1665;
			while (iVar0 <= Global_43D7.f_1666)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43D7.f_13DF[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43D7.f_1252), "", 16);
		StringCopy(&(Global_411BEA.f_15), "", 16);
	}
}

void func_127(char* sParam0, bool bParam1)//Position - 0xC474
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_43D7.f_1462 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A >= 4)
	{
		return;
	}
	if (Global_43D7.f_166B != 1)
	{
		return;
	}
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		return;
	}
	StringCopy(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]), sParam0, 24);
	Global_43D7.f_1462++;
	Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][Global_43D7.f_166A] = 1;
	Global_43D7.f_166A++;
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		fVar0 = func_129();
		if (Global_43D7.f_13D1[Global_43D7.f_1461] && Global_43D7.f_166A == Global_43D7.f_1668)
		{
			func_108(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)])
		{
			Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43D7.f_166A >= Global_43D7.f_1668)
		{
			fVar3 = func_128();
			if (fVar3 > Global_43D7.f_166C[Global_43D7.f_1460])
			{
				Global_43D7.f_166C[Global_43D7.f_1460] = fVar3;
			}
		}
	}
}

float func_128()//Position - 0xC5B0
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_43D7.f_1151[((Global_43D7.f_1466 - iVar1) + iVar0)] != 0)
		{
			if (func_108(Global_43D7.f_1151[((Global_43D7.f_1466 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_129()//Position - 0xC663
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_87(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_43D7.f_166A)
	{
		if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(Global_43D7.f_1669 + iVar8) /*6*/]));
			}
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43D7.f_49[(Global_43D7.f_1669 + iVar8) /*6*/]));
			}
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_43D7.f_F4E[((Global_43D7.f_1464 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_43D7.f_104F[((Global_43D7.f_1465 - iVar4) + iVar10)], Global_43D7.f_10D0[((Global_43D7.f_1465 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_25846A[((Global_43D7.f_1463 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_43D7.f_49[Global_43D7.f_1669 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_43D7.f_1151[((Global_43D7.f_1466 - iVar5) + iVar7)] != 0)
		{
			func_108(Global_43D7.f_1151[((Global_43D7.f_1466 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_130(int iParam0)//Position - 0xCAAA
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_131(iParam0, 4294967295);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_131(int iParam0, int iParam1)//Position - 0xCC59
{
	switch (iParam0)
	{
		case 0:
			return joaat("ZTYPE");
		
		case 1:
			return joaat("STINGER");
		
		case 2:
			return joaat("JB700");
		
		case 3:
			return joaat("CHEETAH");
		
		case 4:
			return joaat("ENTITYXF");
		
		case 5:
			return joaat("ADDER");
		
		case 6:
			return joaat("MONROE");
		
		case 7:
			return joaat("COGCABRIO");
		
		case 10:
			return joaat("SHAMAL");
		
		case 11:
			return joaat("STUNT");
		
		case 12:
			return joaat("CUBAN800");
		
		case 13:
			return joaat("DUSTER");
		
		case 14:
			return joaat("LUXOR");
		
		case 15:
			return joaat("FROGGER");
		
		case 16:
			return joaat("MAVERICK");
		
		case 17:
			return joaat("RHINO");
		
		case 18:
			return joaat("TITAN");
		
		case 19:
			return joaat("CARGOBOB");
		
		case 20:
			return joaat("BUZZARD");
		
		case 21:
			return joaat("CRUSADER");
		
		case 22:
			return joaat("BARRACKS");
		
		case 24:
			return joaat("MARQUIS");
		
		case 25:
			return joaat("JETMAX");
		
		case 27:
			return joaat("SQUALO");
		
		case 29:
			return joaat("TROPIC");
		
		case 30:
			return joaat("SEASHARK");
		
		case 31:
			return joaat("SUBMERSIBLE");
		
		case 32:
			return joaat("SUNTRAP");
		
		case 258:
			return joaat("TUG");
		
		case 33:
			return joaat("BMX");
		
		case 34:
			return joaat("SCORCHER");
		
		case 35:
			return joaat("TRIBIKE");
		
		case 36:
			return joaat("TRIBIKE2");
		
		case 37:
			return joaat("TRIBIKE3");
		
		case 38:
			return joaat("CRUISER");
		
		case 39:
			return joaat("SCHWARZER");
		
		case 40:
			return joaat("ZION");
		
		case 41:
			return joaat("GAUNTLET");
		
		case 42:
			return joaat("VIGERO");
		
		case 43:
			return joaat("ISSI2");
		
		case 44:
			return joaat("INFERNUS");
		
		case 45:
			return joaat("SURANO");
		
		case 46:
			return joaat("VACCA");
		
		case 47:
			return joaat("NINEF");
		
		case 48:
			return joaat("COMET2");
		
		case 49:
			return joaat("BANSHEE");
		
		case 50:
			return joaat("FELTZER2");
		
		case 51:
			return joaat("BFINJECTION");
		
		case 52:
			return joaat("SANDKING");
		
		case 53:
			return joaat("FUGITIVE");
		
		case 54:
			return joaat("DILETTANTE");
		
		case 55:
			return joaat("SUPERD");
		
		case 56:
			return joaat("EXEMPLAR");
		
		case 57:
			return joaat("BALLER2");
		
		case 58:
			return joaat("CAVALCADE");
		
		case 59:
			return joaat("ROCOTO");
		
		case 60:
			return joaat("FELON");
		
		case 61:
			return joaat("ORACLE2");
		
		case 62:
			return joaat("BATI");
		
		case 63:
			return joaat("AKUMA");
		
		case 64:
			return joaat("RUFFIAN");
		
		case 65:
			return joaat("VADER");
		
		case 66:
			return joaat("BLAZER");
		
		case 67:
			return joaat("PCJ");
		
		case 68:
			return joaat("SANCHEZ");
		
		case 69:
			return joaat("FAGGIO2");
		
		case 70:
			return joaat("BULLET");
		
		case 71:
			return joaat("CARBONIZZARE");
		
		case 72:
			return joaat("COQUETTE");
		
		case 73:
			return joaat("NINEF2");
		
		case 74:
			return joaat("RAPIDGT");
		
		case 75:
			return joaat("RAPIDGT2");
		
		case 76:
			return joaat("STINGERGT");
		
		case 77:
			return joaat("VOLTIC");
		
		case 78:
			return joaat("ANNIHILATOR");
		
		case 79:
			return joaat("MAMMATUS");
		
		case 80:
			return joaat("VELUM");
		
		case 81:
			return joaat("DUMP");
		
		case 82:
			return joaat("AIRBUS");
		
		case 83:
			return joaat("BUS");
		
		case 84:
			return joaat("COACH");
		
		case 85:
			return joaat("JOURNEY");
		
		case 86:
			return joaat("MULE");
		
		case 87:
			return joaat("RENTALBUS");
		
		case 88:
			return joaat("STRETCH");
		
		case 89:
			return joaat("BISON");
		
		case 90:
			return joaat("DOUBLE");
		
		case 91:
			return joaat("FELON2");
		
		case 92:
			return joaat("HEXER");
		
		case 93:
			return joaat("ZION2");
		
		case 94:
			return joaat("BATI2");
		
		case 95:
			return joaat("ELEGY2");
		
		case 96:
			return joaat("KHAMELION");
		
		case 97:
			return joaat("HOTKNIFE");
		
		case 98:
			return joaat("CARBONRS");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("BIFTA");
		
		case 100:
			return joaat("KALAHARI");
		
		case 101:
			return joaat("PARADISE");
		
		case 102:
			return joaat("SPEEDER");
		
		case 103:
			return joaat("BODHI2");
		
		case 104:
			return joaat("DUNE");
		
		case 105:
			return joaat("REBEL");
		
		case 106:
			return joaat("SADLER");
		
		case 107:
			return joaat("SANCHEZ2");
		
		case 108:
			return joaat("SANDKING2");
		
		case 109:
			return joaat("BTYPE");
		
		case 111:
			return joaat("JESTER");
		
		case 114:
			return joaat("MASSACRO");
		
		case 112:
			return joaat("TURISMOR");
		
		case 115:
			return joaat("ZENTORNO");
		
		case 116:
			return joaat("HUNTLEY");
		
		case 110:
			return joaat("ALPHA");
		
		case 113:
			return joaat("VESTRA");
		
		case 117:
			return joaat("COQUETTE");
		
		case 118:
			return joaat("BANSHEE");
		
		case 119:
			return joaat("STINGER");
		
		case 120:
			return joaat("VOLTIC");
		
		case 121:
			return joaat("THRUST");
		
		case 128:
			return joaat("ASEA");
		
		case 129:
			return joaat("ASTEROPE");
		
		case 130:
			return joaat("BOBCATXL");
		
		case 131:
			return joaat("CAVALCADE2");
		
		case 132:
			return joaat("GRANGER");
		
		case 133:
			return joaat("INGOT");
		
		case 134:
			return joaat("INTRUDER");
		
		case 135:
			return joaat("MINIVAN");
		
		case 136:
			return joaat("PREMIER");
		
		case 137:
			return joaat("RADI");
		
		case 138:
			return joaat("RANCHERXL");
		
		case 139:
			return joaat("RATLOADER");
		
		case 140:
			return joaat("STANIER");
		
		case 141:
			return joaat("STRATUM");
		
		case 142:
			return joaat("WASHINGTON");
		
		case 122:
			return joaat("DOMINATOR");
		
		case 123:
			return joaat("F620");
		
		case 124:
			return joaat("FUSILADE");
		
		case 125:
			return joaat("PENUMBRA");
		
		case 126:
			return joaat("SENTINEL");
		
		case 127:
			return joaat("SENTINEL2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("BLADE");
		
		case 144:
			return joaat("WARRENER");
		
		case 145:
			return joaat("GLENDALE");
		
		case 146:
			return joaat("RHAPSODY");
		
		case 147:
			return joaat("PANTO");
		
		case 148:
			return joaat("DUBSTA3");
		
		case 149:
			return joaat("PIGALLE");
		
		case 150:
			return joaat("PICADOR");
		
		case 151:
			return joaat("REGINA");
		
		case 152:
			return joaat("SURFER");
		
		case 153:
			return joaat("YOUGA");
		
		case 154:
			return joaat("BLAZER3");
		
		case 155:
			return joaat("REBEL2");
		
		case 156:
			return joaat("PRIMO");
		
		case 157:
			return joaat("BUFFALO");
		
		case 158:
			return joaat("BUFFALO2");
		
		case 159:
			return joaat("TAILGATER");
		
		case 160:
			return joaat("MONSTER");
		
		case 161:
			return joaat("SOVEREIGN");
		
		case 162:
			return joaat("MILJET");
		
		case 163:
			return joaat("BESRA");
		
		case 164:
			return joaat("SWIFT");
		
		case 165:
			return joaat("COQUETTE2");
		
		case 166:
			return joaat("COQUETTE2");
		
		case 167:
			return joaat("INNOVATION");
		
		case 168:
			return joaat("HAKUCHOU");
		
		case 169:
			return joaat("FUROREGT");
		
		case 170:
			return joaat("KALAHARI");
		
		case 187:
			return joaat("VALKYRIE");
		
		case 177:
			return joaat("HYDRA");
		
		case 185:
			return joaat("SAVAGE");
		
		case 174:
			return joaat("ENDURO");
		
		case 171:
			return joaat("BOXVILLE4");
		
		case 172:
			return joaat("CASCO");
		
		case 173:
			return joaat("DINGHY3");
		
		case 175:
			return joaat("GBURRITO2");
		
		case 176:
			return joaat("GUARDIAN");
		
		case 178:
			return joaat("INSURGENT");
		
		case 179:
			return joaat("INSURGENT2");
		
		case 183:
			return joaat("MULE3");
		
		case 180:
			return joaat("KURUMA");
		
		case 181:
			return joaat("KURUMA2");
		
		case 182:
			return joaat("LECTRO");
		
		case 184:
			return joaat("PBUS");
		
		case 186:
			return joaat("TECHNICAL");
		
		case 188:
			return joaat("VELUM2");
		
		case 189:
			return joaat("GRESLEY");
		
		case 190:
			return joaat("JACKAL");
		
		case 191:
			return joaat("LANDSTALKER");
		
		case 192:
			return joaat("MESA3");
		
		case 193:
			return joaat("NEMESIS");
		
		case 194:
			return joaat("ORACLE");
		
		case 195:
			return joaat("RUMPO");
		
		case 196:
			return joaat("SCHAFTER2");
		
		case 197:
			return joaat("SEMINOLE");
		
		case 198:
			return joaat("SURGE");
		
		case 199:
			return joaat("DODO");
		
		case 200:
			return joaat("MARSHALL");
		
		case 201:
			return joaat("SUBMERSIBLE2");
		
		case 202:
			return joaat("BLISTA2");
		
		case 203:
			return joaat("STALION");
		
		case 204:
			return joaat("DUKES");
		
		case 205:
			return joaat("DUKES2");
		
		case 206:
			return joaat("STALION2");
		
		case 207:
			return joaat("DOMINATOR2");
		
		case 208:
			return joaat("GAUNTLET2");
		
		case 209:
			return joaat("BUFFALO3");
		
		case 210:
			return joaat("SLAMVAN");
		
		case 211:
			return joaat("RATLOADER2");
		
		case 212:
			return joaat("JESTER2");
		
		case 213:
			return joaat("MASSACRO2");
		
		case 214:
			return joaat("FELTZER3");
		
		case 215:
			return joaat("LUXOR2");
		
		case 216:
			return joaat("OSIRIS");
		
		case 217:
			return joaat("SWIFT2");
		
		case 218:
			return joaat("VIRGO");
		
		case 219:
			return joaat("WINDSOR");
		
		case 220:
			return joaat("BRAWLER");
		
		case 221:
			return joaat("CHINO");
		
		case 222:
			return joaat("COQUETTE3");
		
		case 223:
			return joaat("T20");
		
		case 224:
			return joaat("TORO");
		
		case 225:
			return joaat("VINDICATOR");
		
		case 229:
			return joaat("PRIMO");
		
		case 228:
			return joaat("MOONBEAM");
		
		case 227:
			return joaat("FACTION");
		
		case 226:
			return joaat("BUCCANEER");
		
		case 230:
			return joaat("VOODOO2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("XLS");
			}
			else if (iParam1 == 1)
			{
				return joaat("XLS2");
			}
			else
			{
				return joaat("XLS");
			}
			break;
		
		case 264:
			return joaat("SEVEN70");
		
		case 259:
			return joaat("WINDSOR2");
		
		case 260:
			return joaat("PROTOTIPO");
		
		case 261:
			return joaat("FMJ");
		
		case 262:
			return joaat("BESTIAGTS");
		
		case 265:
			return joaat("PFISTER811");
		
		case 266:
			return joaat("REAPER");
		
		case 231:
			return joaat("BTYPE2");
		
		case 232:
			return joaat("LURCHER");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("BALLER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER5");
			}
			else
			{
				return joaat("BALLER3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("BALLER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("BALLER6");
			}
			else
			{
				return joaat("BALLER4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("COG55");
			}
			else if (iParam1 == 1)
			{
				return joaat("COG552");
			}
			else
			{
				return joaat("COG55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("COGNOSCENTI");
			}
			else if (iParam1 == 1)
			{
				return joaat("COGNOSCENTI2");
			}
			else
			{
				return joaat("COGNOSCENTI");
			}
			break;
		
		case 237:
			return joaat("LIMO2");
		
		case 238:
			return joaat("MAMBA");
		
		case 239:
			return joaat("NIGHTSHADE");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER3");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER5");
			}
			else
			{
				return joaat("SCHAFTER3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("SCHAFTER4");
			}
			else if (iParam1 == 1)
			{
				return joaat("SCHAFTER6");
			}
			else
			{
				return joaat("SCHAFTER4");
			}
			break;
		
		case 242:
			return joaat("VERLIERER2");
		
		case 243:
			return joaat("SUPERVOLITO");
		
		case 244:
			return joaat("SUPERVOLITO2");
		
		case 245:
			return Global_10B79;
		
		case 251:
			return joaat("VIRGO3");
		
		case 250:
			return joaat("TORNADO");
		
		case 249:
			return joaat("SABREGT");
		
		case 252:
			return joaat("FACTION");
		
		case 246:
			return joaat("TAMPA");
		
		case 247:
			return joaat("SULTAN");
		
		case 49:
			return joaat("BANSHEE");
		
		case 248:
			return joaat("BTYPE3");
		
		case 253:
			return joaat("VOLATUS");
		
		case 254:
			return joaat("CARGOBOB2");
		
		case 255:
			return joaat("RUMPO3");
		
		case 256:
			return joaat("BRICKADE");
		
		case 257:
			return joaat("NIMBUS");
		
		case 267:
			return joaat("LE7B");
		
		case 268:
			return joaat("OMNIS");
		
		case 269:
			return joaat("TROPOS");
		
		case 270:
			return joaat("BRIOSO");
		
		case 271:
			return joaat("TROPHYTRUCK");
		
		case 272:
			return joaat("TROPHYTRUCK2");
		
		case 273:
			return joaat("CONTENDER");
		
		case 274:
			return joaat("CLIFFHANGER");
		
		case 275:
			return joaat("BF400");
		
		case 279:
			return joaat("TYRUS");
		
		case 280:
			return joaat("LYNX");
		
		case 281:
			return joaat("SHEAVA");
		
		case 276:
			return joaat("RALLYTRUCK");
		
		case 277:
			return joaat("TAMPA2");
		
		case 278:
			return joaat("GARGOYLE");
		
		case 282:
			return joaat("BAGGER");
		
		case 283:
			return joaat("ESSKEY");
		
		case 284:
			return joaat("NIGHTBLADE");
		
		case 285:
			return joaat("DEFILER");
		
		case 286:
			return joaat("AVARUS");
		
		case 287:
			return joaat("ZOMBIEA");
		
		case 288:
			return joaat("ZOMBIEB");
		
		case 289:
			return joaat("CHIMERA");
		
		case 290:
			return joaat("DAEMON2");
		
		case 291:
			return joaat("RATBIKE");
		
		case 292:
			return joaat("SHOTARO");
		
		case 293:
			return joaat("RAPTOR");
		
		case 294:
			return joaat("HAKUCHOU2");
		
		case 296:
			return joaat("BLAZER4");
		
		case 297:
			return joaat("SANCTUS");
		
		case 295:
			return joaat("VORTEX");
		
		case 298:
			return joaat("MANCHEZ");
		
		case 299:
			return joaat("TORNADO6");
		
		case 300:
			return joaat("YOUGA2");
		
		case 301:
			return joaat("WOLFSBANE");
		
		case 302:
			return joaat("FAGGIO3");
		
		case 303:
			return joaat("FAGGIO");
		
		case 304:
			return joaat("DUNE5");
		
		case 305:
			return joaat("PHANTOM2");
		
		case 306:
			return joaat("TECHNICAL2");
		
		case 307:
			return joaat("BLAZER5");
		
		case 308:
			return joaat("BOXVILLE5");
		
		case 309:
			return joaat("WASTELANDER");
		
		case 310:
			return joaat("RUINER2");
		
		case 311:
			return joaat("VOLTIC2");
		
		case 312:
			return joaat("PENETRATOR");
		
		case 313:
			return joaat("TEMPESTA");
		
		case 314:
			return joaat("ITALIGTB");
		
		case 315:
			return joaat("NERO");
		
		case 316:
			return joaat("DIABLOUS");
		
		case 317:
			return joaat("FCR");
		
		case 318:
			return joaat("SPECTER");
		
		case 319:
			return joaat("GP1");
		
		case 320:
			return joaat("INFERNUS2");
		
		case 321:
			return joaat("RUSTON");
		
		case 322:
			return joaat("TURISMO2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_10B7A;
		
		case 324:
			return Global_10B7B;
		
		case 325:
			return joaat("CHEETAH2");
		
		case 326:
			return joaat("TORERO");
		
		case 327:
			return joaat("VAGNER");
		
		case 328:
			return joaat("XA21");
		
		case 329:
			return joaat("APC");
		
		case 330:
			return joaat("DUNE3");
		
		case 331:
			return joaat("HALFTRACK");
		
		case 332:
			return joaat("OPPRESSOR");
		
		case 333:
			return joaat("TAMPA3");
		
		case 334:
			return joaat("TRAILERSMALL2");
		
		case 335:
			return joaat("ARDENT");
		
		case 336:
			return joaat("NIGHTSHARK");
		
		case 337:
			return joaat("LAZER");
		
		case 338:
			return joaat("MICROLIGHT");
		
		case 339:
			return joaat("MOGUL");
		
		case 340:
			return joaat("ROGUE");
		
		case 341:
			return joaat("STARLING");
		
		case 342:
			return joaat("SEABREEZE");
		
		case 343:
			return joaat("TULA");
		
		case 344:
			return joaat("PYRO");
		
		case 345:
			return joaat("MOLOTOK");
		
		case 346:
			return joaat("NOKOTA");
		
		case 347:
			return joaat("BOMBUSHKA");
		
		case 348:
			return joaat("HUNTER");
		
		case 349:
			return joaat("HAVOK");
		
		case 350:
			return joaat("HOWARD");
		
		case 351:
			return joaat("ALPHAZ1");
		
		case 352:
			return joaat("CYCLONE");
		
		case 353:
			return joaat("VISIONE");
		
		case 354:
			return joaat("RETINUE");
		
		case 355:
			return joaat("RAPIDGT3");
		
		case 356:
			return joaat("VIGILANTE");
		
		case 357:
			return Global_10B7C;
		
		case 358:
			return joaat("DELUXO");
		
		case 359:
			return joaat("STROMBERG");
		
		case 360:
			return joaat("RIOT2");
		
		case 361:
			return joaat("CHERNOBOG");
		
		case 362:
			return joaat("KHANJALI");
		
		case 363:
			return joaat("AKULA");
		
		case 364:
			return joaat("THRUSTER");
		
		case 365:
			return joaat("BARRAGE");
		
		case 366:
			return joaat("VOLATOL");
		
		case 367:
			return joaat("COMET4");
		
		case 368:
			return 2445973230;
		
		case 369:
			return 1741861769;
		
		case 370:
			return joaat("SENTINEL3");
		
		case 371:
			return joaat("YOSEMITE");
		
		case 372:
			return joaat("SC1");
		
		case 373:
			return joaat("AUTARCH");
		
		case 374:
			return joaat("GT500");
		
		case 375:
			return joaat("HUSTLER");
		
		case 376:
			return joaat("REVOLTER");
		
		case 377:
			return joaat("PARIAH");
		
		case 378:
			return joaat("RAIDEN");
		
		case 379:
			return joaat("SAVESTRA");
		
		case 380:
			return joaat("RIATA");
		
		case 381:
			return joaat("HERMES");
		
		case 382:
			return joaat("COMET5");
		
		case 383:
			return joaat("Z190");
		
		case 384:
			return joaat("VISERIS");
		
		case 385:
			return joaat("KAMACHO");
		
		case 386:
			return joaat("GB200");
		
		case 387:
			return joaat("FAGALOA");
		
		case 388:
			return joaat("ELLIE");
		
		case 389:
			return joaat("ISSI3");
		
		case 390:
			return joaat("MICHELLI");
		
		case 391:
			return joaat("FLASHGT");
		
		case 392:
			return joaat("HOTRING");
		
		case 393:
			return joaat("TEZERACT");
		
		case 394:
			return joaat("TYRANT");
		
		case 395:
			return joaat("DOMINATOR3");
		
		case 396:
			return joaat("TAIPAN");
		
		case 397:
			return joaat("ENTITY2");
		
		case 398:
			return joaat("JESTER3");
		
		case 399:
			return joaat("CHEBUREK");
		
		case 400:
			return joaat("CARACARA");
		
		case 401:
			return joaat("SEASPARROW");
		
		case 402:
			return Global_10B7D;
		
		case 403:
			return joaat("MULE4");
		
		case 404:
			return joaat("POUNDER2");
		
		case 405:
			return joaat("SWINGER");
		
		case 406:
			return joaat("MENACER");
		
		case 407:
			return joaat("SCRAMJET");
		
		case 408:
			return joaat("STRIKEFORCE");
		
		case 409:
			return joaat("OPPRESSOR2");
		
		case 410:
			return joaat("PATRIOT2");
		
		case 411:
			return joaat("STAFFORD");
		
		case 412:
			return joaat("FREECRAWLER");
		
		case 415:
			return joaat("FUTO");
		
		case 416:
			return joaat("RUINER");
		
		case 417:
			return joaat("ROMERO");
		
		case 418:
			return joaat("PRAIRIE");
		
		case 419:
			return joaat("BALLER");
		
		case 420:
			return joaat("SERRANO");
		
		case 421:
			return joaat("BJXL");
		
		case 422:
			return joaat("HABANERO");
		
		case 423:
			return joaat("FQ2");
		
		case 424:
			return joaat("PATRIOT");
		
		case 413:
			return joaat("BLIMP3");
		
		case 414:
			return joaat("PBUS2");
		
		case 425:
			return joaat("CERBERUS");
		
		case 426:
			return joaat("CERBERUS2");
		
		case 427:
			return joaat("CERBERUS3");
		
		case 428:
			return joaat("BRUTUS");
		
		case 429:
			return joaat("BRUTUS2");
		
		case 430:
			return joaat("BRUTUS3");
		
		case 431:
			return joaat("SCARAB");
		
		case 432:
			return joaat("SCARAB2");
		
		case 433:
			return joaat("SCARAB3");
		
		case 434:
			return joaat("IMPERATOR");
		
		case 435:
			return joaat("IMPERATOR2");
		
		case 436:
			return joaat("IMPERATOR3");
		
		case 437:
			return joaat("ZR380");
		
		case 438:
			return joaat("ZR3802");
		
		case 439:
			return joaat("ZR3803");
		
		case 440:
			return joaat("IMPALER");
		
		case 450:
			return joaat("TAXI");
		
		case 451:
			return joaat("BULLDOZER");
		
		case 452:
			return joaat("SPEEDO2");
		
		case 453:
			return joaat("TRASH2");
		
		case 454:
			return joaat("BARRACKS2");
		
		case 455:
			return joaat("MIXER");
		
		case 456:
			return joaat("DUNE2");
		
		case 457:
			return joaat("TRACTOR");
		
		case 458:
			return joaat("BLISTA3");
		
		case 441:
			return joaat("VAMOS");
		
		case 442:
			return joaat("TULIP");
		
		case 443:
			return joaat("DEVESTE");
		
		case 444:
			return joaat("SCHLAGEN");
		
		case 445:
			return joaat("TOROS");
		
		case 446:
			return joaat("DEVIANT");
		
		case 447:
			return joaat("CLIQUE");
		
		case 448:
			return joaat("ITALIGTO");
		
		case 449:
			return joaat("RCBANDITO");
		
		default:
	}
	return 0;
}

void func_132(int iParam0, int iParam1, bool bParam2)//Position - 0xE65A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_43D7.f_1460 > iParam0)
	{
		return;
	}
	if (Global_43D7.f_1460 >= 128)
	{
		return;
	}
	if (Global_43D7.f_1466 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A < Global_43D7.f_1668)
	{
		return;
	}
	if (Global_43D7.f_1460 != iParam0)
	{
		Global_43D7.f_1460 = iParam0;
		Global_43D7.f_1461 = 0;
	}
	iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
	if (iVar0 != 4)
	{
		while (Global_43D7.f_1461 < 4 && iVar0 != 4)
		{
			Global_43D7.f_1461++;
			iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_43D7.f_1151[Global_43D7.f_1466] = iParam1;
	Global_43D7.f_1466++;
	if (iParam1 != 0)
	{
		func_108(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_43D7.f_13D1[Global_43D7.f_1461])
		{
			func_108(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_43D7.f_13CA[Global_43D7.f_1461])
		{
			Global_43D7.f_13CA[Global_43D7.f_1461] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_43D7.f_166C[iParam0])
			{
				Global_43D7.f_166C[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_43D7.f_13DF[iParam0]), Global_43D7.f_1461);
	Global_43D7.f_1461++;
	Global_43D7.f_166B = 4;
}

void func_133(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xE7D5
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43D7.f_1460 > iParam0)
	{
		return;
	}
	if (Global_43D7.f_1460 >= 128)
	{
		return;
	}
	if (Global_43D7.f_1462 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A < Global_43D7.f_1668)
	{
		return;
	}
	if (Global_43D7.f_1460 != iParam0)
	{
		Global_43D7.f_1460 = iParam0;
		Global_43D7.f_1461 = 0;
	}
	iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
	if (iVar0 != 1)
	{
		while (Global_43D7.f_1461 < 4 && iVar0 != 1)
		{
			Global_43D7.f_1461++;
			iVar0 = Global_43D7.f_13BE[Global_43D7.f_1461];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_43D7.f_64A[Global_43D7.f_1462] = bParam3;
	Global_43D7.f_74B[Global_43D7.f_1462] = iParam4;
	Global_43D7.f_1462++;
	if (!bParam3)
	{
		func_136(Global_43D7.f_1460, 1);
	}
	else
	{
		func_136(Global_43D7.f_1460, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_135(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
		if (Global_43D7.f_13D1[Global_43D7.f_1461])
		{
			func_108(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43D7.f_13CA[Global_43D7.f_1461])
		{
			Global_43D7.f_13CA[Global_43D7.f_1461] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_134(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
			if (fVar4 > Global_43D7.f_166C[iParam0])
			{
				Global_43D7.f_166C[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_43D7.f_13DF[iParam0]), Global_43D7.f_1461);
	Global_43D7.f_1461++;
	Global_43D7.f_166B = 1;
	Global_43D7.f_1669 = (Global_43D7.f_1462 - 1);
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = iParam2;
}

float func_134(char* sParam0)//Position - 0xE9E1
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_135(char* sParam0)//Position - 0xE9FD
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_87(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_136(int iParam0, bool bParam1)//Position - 0xEA3A
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_43D7.f_1779[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_137(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)//Position - 0xEA86
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_42 = func_131(iParam0, iParam4);
	if (uParam1->f_42 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_42 == joaat("FROGGER"))
	{
		uParam1->f_42 = joaat("FROGGER2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_43 = 1;
		return;
	}
	uParam1->f_4D = 0;
	func_206(iParam0, &(uParam1->f_4D));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_205(iParam0))
	{
		if (Global_1116C)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == 4294967295)
		{
			uParam1->f_9[48] = 4294967295;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (func_204(uParam1->f_42))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_42)
	{
		case joaat("BRUTUS"):
		case joaat("BRUTUS2"):
		case joaat("BRUTUS3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
			uParam1->f_9[42] = 4;
			break;
		
		case joaat("IMPERATOR"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("ZR380"):
		case joaat("ZR3802"):
		case joaat("ZR3803"):
			uParam1->f_9[42] = 1;
			break;
		
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
			uParam1->f_9[42] = 4;
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_63 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_63 = 4;
	}
	uParam1->f_41 = 0;
	if (iParam0 == 263)
	{
		if (Global_1116C)
		{
			uParam1->f_41 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_203(uParam1->f_42, &fVar0) && uParam1->f_50 != fVar0)
	{
		uParam1->f_50 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_1116B;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_19E56.f_6242.f_139[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_19E56.f_6242.f_272[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_19E56.f_6242.f_3AB[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_43 = 4294967295;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 2:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 3:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 4:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 5:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 6:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 7:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 8:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 9:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 10:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 11:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 12:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 13:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 14:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 15:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 16:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 17:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 18:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 19:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 20:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 21:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 22:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 23:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 24:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			case 25:
				func_160(func_161(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_147(func_161(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_146(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_145(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_144(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_61 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_63 = 134;
							}
							else
							{
								uParam1->f_63 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_43 = 0;
						}
					}
					else
					{
						uParam1->f_43 = func_147(func_161(iParam0, iVar1));
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_61 = 99;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_61 = 93;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 89;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 2:
				if (func_146(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_145(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_144(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_61 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_63 = 134;
							}
							else
							{
								uParam1->f_63 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_43 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_43 = func_147(func_161(iParam0, iVar1));
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_61 = 106;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_61 = 108;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 67;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 3:
				if (func_146(iParam0))
				{
					if (func_145(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_144(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_61 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_63 = 134;
						}
						else
						{
							uParam1->f_63 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_43 = 2;
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_61 = 22;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_61 = 22;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 28;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 4:
				if (func_146(iParam0))
				{
					if (func_145(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_144(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_61 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_63 = 134;
						}
						else
						{
							uParam1->f_63 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_43 = 3;
					}
				}
				else if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_61 = 101;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_61 = 48;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 81;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_141(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = 4294967197;
						}
						iVar14++;
					}
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 5:
				if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_61 = 98;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_61 = 99;
						uParam1->f_43 = 4294967295;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 41;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_141(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = 4294967197;
						}
						iVar19++;
					}
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 6:
				if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_61 = 5;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_61 = 24;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 111;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 7:
				if (uParam1->f_42 == joaat("KURUMA2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_43 = 4294967295;
				}
				else if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_61 = 1;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_61 = 0;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 81;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_61 = 0;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			case 8:
				if (func_205(iParam0))
				{
					if (!Global_1116C)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_61 = 7;
						uParam1->f_43 = 4294967295;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_61 = 78;
						uParam1->f_43 = 4294967295;
					}
				}
				else if (func_143(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 27;
					uParam1->f_43 = 4294967295;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = 4294967295;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_43 = 4294967295;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_43 = 4294967295;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = 4294967295;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_43 = 4294967295;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = 4294967295;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_43 = 4294967295;
				break;
			
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_43 = 4294967295;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_61 = 1;
					uParam1->f_63 = 132;
				}
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_43 = 4294967295;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_43 = 4294967295;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4294967295;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_61 = 0;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_43 = 4294967295;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_43 = 4294967295;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = 4294967295;
				break;
			
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_42 = joaat("PHANTOM3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_61 = 0;
			uParam1->f_63 = 0;
			uParam1->f_43 = 4294967295;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_42 = joaat("HAULER2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_61 = 0;
			uParam1->f_63 = 0;
			uParam1->f_43 = 4294967295;
		}
	}
	if (func_140(uParam1->f_42))
	{
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_42 = func_139();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_43 = 4294967295;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
		uParam1->f_4A = 255;
		uParam1->f_4C = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_42 = func_138();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_45 = 6;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
		uParam1->f_4A = 255;
		uParam1->f_4C = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (uParam1->f_43 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_43 = 1;
	}
}

int func_138()//Position - 0x1114F
{
	return joaat("TERBYTE");
}

int func_139()//Position - 0x1115C
{
	return joaat("AVENGER");
}

int func_140(int iParam0)//Position - 0x11169
{
	switch (iParam0)
	{
		case joaat("BUZZARD"):
		case joaat("SAVAGE"):
		case joaat("VALKYRIE"):
		case joaat("HYDRA"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("HAVOK"):
		case joaat("HUNTER"):
		case joaat("VOLATUS"):
		case joaat("SUPERVOLITO"):
		case joaat("SUPERVOLITO2"):
		case joaat("SWIFT"):
		case joaat("SWIFT2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("ANNIHILATOR"):
		case joaat("MOGUL"):
		case joaat("ROGUE"):
		case joaat("STARLING"):
		case joaat("SEABREEZE"):
		case joaat("MICROLIGHT"):
		case joaat("TULA"):
		case joaat("LAZER"):
		case joaat("PYRO"):
		case joaat("MOLOTOK"):
		case joaat("NOKOTA"):
		case joaat("HOWARD"):
		case joaat("BOMBUSHKA"):
		case joaat("ALPHAZ1"):
		case joaat("NIMBUS"):
		case joaat("LUXOR2"):
		case joaat("VELUM2"):
		case joaat("DODO"):
		case joaat("MILJET"):
		case joaat("BESRA"):
		case joaat("VESTRA"):
		case joaat("DUSTER"):
		case joaat("SHAMAL"):
		case joaat("CUBAN800"):
		case joaat("LUXOR"):
		case joaat("STUNT"):
		case joaat("MAMMATUS"):
		case joaat("TITAN"):
		case joaat("VELUM"):
		case joaat("AKULA"):
		case joaat("VOLATOL"):
		case joaat("SEASPARROW"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("STRIKEFORCE"))
	{
		return 1;
	}
	return 0;
}

bool func_141(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x112A5
{
	*uParam2 = 4294967295;
	*uParam3 = 4294967295;
	*uParam4 = 4294967295;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != 4294967295;
}

int func_142(int iParam0)//Position - 0x12797
{
	if (((((((((((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422) || iParam0 == 449) || iParam0 == 442) || iParam0 == 441) || iParam0 == 444) || iParam0 == 446) || iParam0 == 448) || iParam0 == 447) || iParam0 == 445) || iParam0 == 443)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x12939
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1298B
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_160(func_161(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_160(func_161(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_145(int iParam0, int iParam1, var uParam2)//Position - 0x12DB9
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = 4294967295;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = 4294967295;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = 4294967295;
		return 0;
	}
	*uParam2 = 4294967295;
	return 0;
}

int func_146(int iParam0)//Position - 0x12E97
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x12FB9
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_159(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				return 14;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 13;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 2))
			{
				return 8;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 3))
			{
				return 12;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 4))
			{
				return 11;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 5))
			{
				return 10;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 6))
			{
				return 9;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 7))
			{
				return 7;
			}
			else if (func_159(CAM::_0xDC9DA9E8789F5246(), 8))
			{
				return 15;
			}
			if (func_148(CAM::_0xDC9DA9E8789F5246()))
			{
			}
			return 4294967295;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return 4294967295;
}

int func_148(int iParam0)//Position - 0x13288
{
	if ((((((((func_158(iParam0) || func_157(iParam0)) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_151(iParam0)) || func_149(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0)//Position - 0x132FE
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_2, 0);
}

int func_150()//Position - 0x13329
{
	return 4294967295;
}

bool func_151(int iParam0)//Position - 0x13332
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 31);
}

bool func_152(int iParam0)//Position - 0x1335E
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 30);
}

bool func_153(int iParam0)//Position - 0x1338A
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 29);
}

bool func_154(int iParam0)//Position - 0x133B6
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 28);
}

bool func_155(int iParam0)//Position - 0x133E2
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 27);
}

bool func_156(int iParam0)//Position - 0x1340E
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 26);
}

bool func_157(int iParam0)//Position - 0x1343A
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 25);
}

bool func_158(int iParam0)//Position - 0x13466
{
	if (iParam0 == func_150())
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_139.f_1, 24);
}

int func_159(int iParam0, int iParam1)//Position - 0x13492
{
	switch (iParam1)
	{
		case 4:
			return func_158(iParam0);
		
		case 3:
			return func_157(iParam0);
		
		case 6:
			return func_156(iParam0);
		
		case 1:
			return func_155(iParam0);
		
		case 0:
			return func_154(iParam0);
		
		case 7:
			return func_153(iParam0);
		
		case 2:
			return func_152(iParam0);
		
		case 5:
			return func_151(iParam0);
		
		case 8:
			return func_149(iParam0);
		
		default:
	}
	return 0;
}

int func_160(int iParam0, var uParam1, var uParam2)//Position - 0x13529
{
	*uParam1 = 4294967295;
	*uParam2 = 4294967295;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_161(int iParam0, int iParam1)//Position - 0x137C3
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_162(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_162(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		default:
	}
	return 4294967295;
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x13D62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_131(iParam0, 4294967295);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::_0x67A5589628E0CFF6())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_202())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_43())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_205(iParam0))
	{
		if (Global_1116C)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_201(iVar0);
	if (iVar1 != 4294967295)
	{
		if (func_199(func_200(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_198(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_40001.f_4CA3) || (iParam0 != 205 && Global_40001.f_4CA2))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_197(iParam0))
	{
		if (func_188(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_187(iVar0);
	if (iVar2 != 4294967295)
	{
		if (func_185(func_186(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_184(iVar0);
	if (iVar3 > 0)
	{
		if (func_182(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_181(iVar0);
	if (iVar4 != 4294967295)
	{
		if (func_179(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_178(iVar0);
	if (iVar5 != 4294967295)
	{
		if (func_171(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_170(iVar0);
	if (iVar6 != 4294967295)
	{
		if (func_163(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x13FDF
{
	if (!Global_11625)
	{
		return 0;
	}
	if (func_170(iParam0) != 4294967295)
	{
		if (func_164(func_169(iParam0)))
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

bool func_164(int iParam0)//Position - 0x14016
{
	return func_165(func_168(iParam0), 4294967295, 4294967295);
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0x1402A
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_94();
	}
	iVar1 = func_167(iParam0, iParam1);
	uVar2 = func_166(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_166(int iParam0)//Position - 0x14067
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_167(int iParam0, int iParam1)//Position - 0x1437F
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_168(int iParam0)//Position - 0x14677
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 121:
			return 25117;
			break;
		
		case 122:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 133:
			return 25125;
			break;
		
		case 134:
			return 25127;
			break;
		
		case 135:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 154:
			return 25136;
			break;
		
		case 155:
			return 25139;
			break;
		
		case 156:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 175:
			return 25148;
			break;
		
		case 176:
			return 25151;
			break;
		
		case 177:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 187:
			return 25160;
			break;
		
		case 188:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 200:
			return 25168;
			break;
		
		case 201:
			return 25169;
			break;
		
		case 202:
			return 25170;
			break;
		
		case 203:
			return 25173;
			break;
		
		case 204:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 228:
			return 25179;
			break;
		
		case 229:
			return 25180;
			break;
		
		case 230:
			return 25183;
			break;
		
		case 231:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 243:
			return 25188;
			break;
		
		case 244:
			return 25191;
			break;
		
		case 245:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 254:
			return 25198;
			break;
		
		case 255:
			return 25202;
			break;
		
		case 256:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 269:
			return 25209;
			break;
		
		case 270:
			return 25212;
			break;
		
		case 271:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 279:
			return 25217;
			break;
		
		case 280:
			return 25221;
			break;
		
		case 281:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 302:
			return 25228;
			break;
		
		case 303:
			return 24979;
			break;
		
		case 304:
			return 25229;
			break;
		
		case 305:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 306:
			return 25395;
			break;
		
		case 307:
			return 25396;
			break;
		
		case 308:
			return 25397;
			break;
		
		case 309:
			return 25398;
			break;
		
		case 310:
			return 25399;
			break;
		
		case 311:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 312:
			return 25265;
			break;
		
		case 313:
			return 25266;
			break;
		
		case 314:
			return 25267;
			break;
		
		case 315:
			return 25268;
			break;
		
		case 316:
			return 24977;
			break;
		
		case 317:
			return 25269;
			break;
		
		case 318:
			return 25270;
			break;
		
		case 319:
			return 25271;
			break;
		
		case 320:
			return 25272;
			break;
		
		case 321:
			return 25273;
			break;
		
		case 322:
			return 25274;
			break;
		
		case 323:
			return 25275;
			break;
		
		case 324:
			return 25276;
			break;
		
		case 325:
			return 25277;
			break;
		
		case 326:
			return 25278;
			break;
		
		case 327:
			return 25279;
			break;
		
		case 328:
			return 25280;
			break;
		
		case 329:
			return 25281;
			break;
		
		case 330:
			return 25282;
			break;
		
		case 331:
			return 25283;
			break;
		
		case 332:
			return 25284;
			break;
		
		case 333:
			return 25285;
			break;
		
		case 334:
			return 25286;
			break;
		
		case 335:
			return 25287;
			break;
		
		case 336:
			return 25288;
			break;
		
		case 337:
			return 25289;
			break;
		
		case 338:
			return 25290;
			break;
		
		case 339:
			return 25291;
			break;
		
		case 340:
			return 25292;
			break;
		
		case 341:
			return 25293;
			break;
		
		case 342:
			return 25294;
			break;
		
		case 343:
			return 25295;
			break;
		
		case 344:
			return 25296;
			break;
		
		case 345:
			return 25297;
			break;
		
		case 346:
			return 25298;
			break;
		
		case 347:
			return 25299;
			break;
		
		case 348:
			return 25300;
			break;
		
		case 349:
			return 25301;
			break;
		
		case 350:
			return 25302;
			break;
		
		case 351:
			return 25303;
			break;
		
		case 352:
			return 25304;
			break;
		
		case 353:
			return 25305;
			break;
		
		case 354:
			return 25306;
			break;
		
		case 355:
			return 25307;
			break;
		
		case 356:
			return 25308;
			break;
		
		case 357:
			return 25309;
			break;
		
		case 358:
			return 25310;
			break;
		
		case 359:
			return 25311;
			break;
		
		case 360:
			return 25312;
			break;
		
		case 361:
			return 25313;
			break;
		
		case 362:
			return 25314;
			break;
		
		case 363:
			return 25315;
			break;
		
		case 364:
			return 25316;
			break;
		
		case 365:
			return 25317;
			break;
		
		case 366:
			return 25318;
			break;
		
		case 367:
			return 25319;
			break;
		
		case 368:
			return 25320;
			break;
		
		case 369:
			return 25321;
			break;
		
		case 370:
			return 25322;
			break;
		
		case 371:
			return 25323;
			break;
		
		case 372:
			return 25324;
			break;
		
		case 373:
			return 25325;
			break;
		
		case 374:
			return 25326;
			break;
		
		case 375:
			return 25327;
			break;
		
		case 376:
			return 25328;
			break;
		
		case 377:
			return 25329;
			break;
		
		case 378:
			return 25330;
			break;
		
		case 379:
			return 25331;
			break;
		
		case 380:
			return 25332;
			break;
		
		case 381:
			return 25333;
			break;
		
		case 382:
			return 25334;
			break;
		
		case 383:
			return 25335;
			break;
		
		case 384:
			return 25336;
			break;
		
		case 385:
			return 25337;
			break;
		
		case 386:
			return 25338;
			break;
		
		case 387:
			return 25339;
			break;
		
		case 388:
			return 25340;
			break;
		
		case 389:
			return 25341;
			break;
		
		case 390:
			return 25342;
			break;
		
		case 391:
			return 25343;
			break;
		
		case 392:
			return 25344;
			break;
		
		case 393:
			return 25345;
			break;
		
		case 394:
			return 25346;
			break;
		
		case 395:
			return 25347;
			break;
		
		case 396:
			return 24970;
			break;
		
		case 397:
			return 25348;
			break;
		
		case 398:
			return 25349;
			break;
		
		case 399:
			return 25350;
			break;
		
		case 400:
			return 25351;
			break;
		
		case 401:
			return 25352;
			break;
		
		case 402:
			return 25353;
			break;
		
		case 403:
			return 25354;
			break;
		
		case 404:
			return 25355;
			break;
		
		case 405:
			return 25356;
			break;
		
		case 406:
			return 25357;
			break;
		
		case 407:
			return 25358;
			break;
		
		case 408:
			return 25359;
			break;
		
		case 409:
			return 25360;
			break;
		
		case 410:
			return 25361;
			break;
		
		case 411:
			return 25362;
			break;
		
		case 412:
			return 25363;
			break;
		
		case 413:
			return 25364;
			break;
		
		case 414:
			return 25365;
			break;
		
		case 415:
			return 25366;
			break;
		
		case 416:
			return 25367;
			break;
		
		case 417:
			return 25368;
			break;
		
		case 418:
			return 25369;
			break;
		
		case 419:
			return 25370;
			break;
		
		case 420:
			return 25371;
			break;
		
		case 421:
			return 25373;
			break;
		
		case 422:
			return 25374;
			break;
		
		case 423:
			return 25375;
			break;
		
		case 424:
			return 25377;
			break;
		
		case 425:
			return 25378;
			break;
		
		case 426:
			return 25379;
			break;
		
		case 427:
			return 25382;
			break;
		
		case 428:
			return 25383;
			break;
		
		case 429:
			return 25386;
			break;
		
		case 430:
			return 25390;
			break;
		
		case 431:
			return 25391;
			break;
		
		case 432:
			return 25392;
			break;
		
		case 433:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 123:
			return 25167;
			break;
		
		case 124:
			return 25171;
			break;
		
		case 125:
			return 25172;
			break;
		
		case 126:
			return 25176;
			break;
		
		case 127:
			return 25177;
			break;
		
		case 128:
			return 25181;
			break;
		
		case 129:
			return 25182;
			break;
		
		case 130:
			return 25186;
			break;
		
		case 131:
			return 25187;
			break;
		
		case 132:
			return 25189;
			break;
		
		case 136:
			return 25190;
			break;
		
		case 137:
			return 25194;
			break;
		
		case 138:
			return 25195;
			break;
		
		case 139:
			return 25196;
			break;
		
		case 140:
			return 25197;
			break;
		
		case 141:
			return 25199;
			break;
		
		case 142:
			return 25200;
			break;
		
		case 143:
			return 25201;
			break;
		
		case 144:
			return 25205;
			break;
		
		case 145:
			return 25206;
			break;
		
		case 146:
			return 25207;
			break;
		
		case 147:
			return 25208;
			break;
		
		case 148:
			return 25210;
			break;
		
		case 149:
			return 25211;
			break;
		
		case 150:
			return 25215;
			break;
		
		case 151:
			return 25216;
			break;
		
		case 152:
			return 25218;
			break;
		
		case 153:
			return 25219;
			break;
		
		case 157:
			return 25220;
			break;
		
		case 158:
			return 25224;
			break;
		
		case 159:
			return 25226;
			break;
		
		case 160:
			return 25227;
			break;
		
		case 161:
			return 25232;
			break;
		
		case 162:
			return 25372;
			break;
		
		case 163:
			return 25376;
			break;
		
		case 164:
			return 25380;
			break;
		
		case 165:
			return 25381;
			break;
		
		case 166:
			return 25384;
			break;
		
		case 167:
			return 25385;
			break;
		
		case 168:
			return 25387;
			break;
		
		case 169:
			return 25388;
			break;
		
		case 170:
			return 25389;
			break;
		
		case 171:
			return 25407;
			break;
		
		case 172:
			return 25408;
			break;
		
		case 173:
			return 25409;
			break;
		
		case 174:
			return 25410;
			break;
		
		case 178:
			return 25411;
			break;
		
		case 179:
			return 25412;
			break;
		
		case 180:
			return 25413;
			break;
		
		case 181:
			return 25414;
			break;
		
		case 182:
			return 25415;
			break;
		
		case 183:
			return 25416;
			break;
		
		case 184:
			return 25417;
			break;
		
		case 185:
			return 25418;
			break;
		
		case 186:
			return 25419;
			break;
		
		case 189:
			return 25420;
			break;
		
		case 190:
			return 25421;
			break;
		
		case 191:
			return 25422;
			break;
		
		case 192:
			return 25423;
			break;
		
		case 193:
			return 25424;
			break;
		
		case 194:
			return 25425;
			break;
		
		case 195:
			return 25426;
			break;
		
		case 196:
			return 25427;
			break;
		
		case 197:
			return 25428;
			break;
		
		case 198:
			return 25429;
			break;
		
		case 199:
			return 25430;
			break;
		
		case 205:
			return 25431;
			break;
		
		case 206:
			return 25432;
			break;
		
		case 207:
			return 25433;
			break;
		
		case 208:
			return 25434;
			break;
		
		case 209:
			return 25435;
			break;
		
		case 210:
			return 25436;
			break;
		
		case 211:
			return 25437;
			break;
		
		case 212:
			return 25438;
			break;
		
		case 213:
			return 25439;
			break;
		
		case 214:
			return 25440;
			break;
		
		case 215:
			return 25441;
			break;
		
		case 216:
			return 25442;
			break;
		
		case 217:
			return 25443;
			break;
		
		case 218:
			return 25444;
			break;
		
		case 219:
			return 25445;
			break;
		
		case 220:
			return 25446;
			break;
		
		case 221:
			return 25447;
			break;
		
		case 222:
			return 25448;
			break;
		
		case 223:
			return 25449;
			break;
		
		case 224:
			return 25450;
			break;
		
		case 225:
			return 25451;
			break;
		
		case 226:
			return 25452;
			break;
		
		case 227:
			return 25453;
			break;
		
		case 232:
			return 25454;
			break;
		
		case 233:
			return 25455;
			break;
		
		case 234:
			return 25456;
			break;
		
		case 235:
			return 25457;
			break;
		
		case 236:
			return 25458;
			break;
		
		case 237:
			return 25459;
			break;
		
		case 238:
			return 25460;
			break;
		
		case 239:
			return 25461;
			break;
		
		case 240:
			return 25462;
			break;
		
		case 241:
			return 25463;
			break;
		
		case 242:
			return 25464;
			break;
		
		case 246:
			return 25465;
			break;
		
		case 247:
			return 25466;
			break;
		
		case 248:
			return 25467;
			break;
		
		case 249:
			return 25468;
			break;
		
		case 250:
			return 25469;
			break;
		
		case 251:
			return 25470;
			break;
		
		case 252:
			return 25471;
			break;
		
		case 253:
			return 25472;
			break;
		
		case 257:
			return 25473;
			break;
		
		case 258:
			return 25474;
			break;
		
		case 259:
			return 25475;
			break;
		
		case 260:
			return 25476;
			break;
		
		case 261:
			return 25477;
			break;
		
		case 262:
			return 25478;
			break;
		
		case 263:
			return 25479;
			break;
		
		case 264:
			return 25480;
			break;
		
		case 265:
			return 25481;
			break;
		
		case 266:
			return 25482;
			break;
		
		case 267:
			return 25483;
			break;
		
		case 268:
			return 25484;
			break;
		
		case 272:
			return 25485;
			break;
		
		case 273:
			return 25486;
			break;
		
		case 274:
			return 25487;
			break;
		
		case 275:
			return 25488;
			break;
		
		case 276:
			return 25489;
			break;
		
		case 277:
			return 25490;
			break;
		
		case 278:
			return 25491;
			break;
		
		case 282:
			return 25492;
			break;
		
		case 283:
			return 25493;
			break;
		
		case 284:
			return 25494;
			break;
		
		case 285:
			return 25495;
			break;
		
		case 286:
			return 25496;
			break;
		
		case 287:
			return 25497;
			break;
		
		case 288:
			return 25498;
			break;
		
		case 289:
			return 25499;
			break;
		
		case 290:
			return 25500;
			break;
		
		case 291:
			return 25501;
			break;
		
		case 292:
			return 25502;
			break;
		
		case 293:
			return 25503;
			break;
		
		case 294:
			return 25504;
			break;
		
		case 295:
			return 25505;
			break;
		
		case 296:
			return 25506;
			break;
		
		case 297:
			return 25507;
			break;
		
		case 298:
			return 25508;
			break;
		
		case 299:
			return 25509;
			break;
		
		case 300:
			return 25510;
			break;
		
		case 301:
			return 25511;
			break;
	}
	return 0;
}

int func_169(int iParam0)//Position - 0x16003
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 8;
			break;
		
		case joaat("CERBERUS2"):
			return 9;
			break;
		
		case joaat("CERBERUS3"):
			return 10;
			break;
		
		case joaat("BRUTUS"):
			return 11;
			break;
		
		case joaat("BRUTUS2"):
			return 12;
			break;
		
		case joaat("BRUTUS3"):
			return 13;
			break;
		
		case joaat("ZR380"):
			return 14;
			break;
		
		case joaat("ZR3802"):
			return 15;
			break;
		
		case joaat("ZR3803"):
			return 16;
			break;
		
		case joaat("SCARAB"):
			return 20;
			break;
		
		case joaat("SCARAB2"):
			return 21;
			break;
		
		case joaat("SCARAB3"):
			return 22;
			break;
		
		case joaat("IMPERATOR"):
			return 17;
			break;
		
		case joaat("IMPERATOR2"):
			return 18;
			break;
		
		case joaat("IMPERATOR3"):
			return 19;
			break;
		
		case joaat("IMPALER"):
			return 102;
			break;
		
		case joaat("RATLOADER2"):
			return 103;
			break;
		
		case joaat("GLENDALE"):
			return 104;
			break;
		
		case joaat("SLAMVAN"):
			return 105;
			break;
		
		case joaat("DOMINATOR"):
			return 106;
			break;
		
		case joaat("ISSI3"):
			return 107;
			break;
		
		case joaat("GARGOYLE"):
			return 108;
			break;
	}
	return 4294967295;
}

int func_170(int iParam0)//Position - 0x16147
{
	switch (iParam0)
	{
		case joaat("CERBERUS"):
			return 0;
		
		case joaat("CERBERUS2"):
			return 1;
		
		case joaat("CERBERUS3"):
			return 2;
		
		case joaat("BRUTUS"):
			return 3;
		
		case joaat("BRUTUS2"):
			return 4;
		
		case joaat("BRUTUS3"):
			return 5;
		
		case joaat("SCARAB"):
			return 6;
		
		case joaat("SCARAB2"):
			return 7;
		
		case joaat("SCARAB3"):
			return 8;
		
		case joaat("IMPERATOR"):
			return 9;
		
		case joaat("IMPERATOR2"):
			return 10;
		
		case joaat("IMPERATOR3"):
			return 11;
		
		case joaat("ZR380"):
			return 12;
		
		case joaat("ZR3802"):
			return 13;
		
		case joaat("ZR3803"):
			return 14;
		
		case joaat("RATLOADER2"):
			return 15;
		
		case joaat("GLENDALE"):
			return 16;
		
		case joaat("SLAMVAN"):
			return 17;
		
		case joaat("DOMINATOR"):
			return 18;
		
		case joaat("IMPALER"):
			return 19;
		
		case joaat("ISSI3"):
			return 20;
		
		case joaat("GARGOYLE"):
			return 21;
		
		default:
	}
	return 4294967295;
}

int func_171(int iParam0)//Position - 0x16241
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			if (func_176(7230, 4294967295, 0) >= func_175(iParam0) || Global_40001.f_5DD4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("POUNDER2"):
			if (func_176(7230, 4294967295, 0) >= func_175(iParam0) || Global_40001.f_5DD5)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("OPPRESSOR2"):
			if (func_172(22050, 4294967295, 4294967295) >= func_175(iParam0) || Global_40001.f_5DD6)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("PBUS2"):
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_111.f_110.f_7, 1) || Global_40001.f_5DD8)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("PATRIOT2"):
			if (func_176(7228, 4294967295, 0) >= func_175(iParam0) || Global_40001.f_5DD9)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("BLIMP3"):
			if (func_176(7228, 4294967295, 0) >= func_175(iParam0) || Global_40001.f_5DDA)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("SCRAMJET"):
			if (func_165(22123, 4294967295, 4294967295) || Global_40001.f_5DD7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)//Position - 0x163BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	iVar1 = func_174(iParam0, iParam1);
	iVar2 = func_173(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_173(int iParam0)//Position - 0x16404
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

int func_174(int iParam0, int iParam1)//Position - 0x167A6
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_94();
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

int func_175(int iParam0)//Position - 0x16AFB
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return Global_40001.f_5DDB;
			break;
		
		case joaat("POUNDER2"):
			return Global_40001.f_5DDC;
			break;
		
		case joaat("OPPRESSOR2"):
			return Global_40001.f_5DDD;
			break;
		
		case joaat("PATRIOT2"):
			return Global_40001.f_5DDE;
			break;
		
		case joaat("BLIMP3"):
			return Global_40001.f_5DDF;
			break;
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)//Position - 0x16B6A
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_177(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_177(var uParam0)//Position - 0x16B9C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_94();
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

int func_178(int iParam0)//Position - 0x16BD0
{
	switch (iParam0)
	{
		case joaat("MULE4"):
			return 0;
			break;
		
		case joaat("POUNDER2"):
			return 1;
			break;
		
		case joaat("OPPRESSOR2"):
			return 2;
			break;
		
		case joaat("SCRAMJET"):
			return 3;
			break;
		
		case joaat("PBUS2"):
			return 4;
			break;
		
		case joaat("PATRIOT2"):
			return 5;
			break;
		
		case joaat("BLIMP3"):
			return 6;
			break;
	}
	return 4294967295;
}

int func_179(int iParam0)//Position - 0x16C3B
{
	int iVar0;
	
	if (!Global_11625)
	{
		return 0;
	}
	iVar0 = func_176(5661, 4294967295, 0);
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(1));
		
		case joaat("AKULA"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(2));
		
		case joaat("RIOT2"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(6));
		
		case joaat("STROMBERG"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(7));
		
		case joaat("CHERNOBOG"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(10));
		
		case joaat("BARRAGE"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(11));
		
		case joaat("KHANJALI"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(12));
		
		case joaat("VOLATOL"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(13));
		
		case joaat("THRUSTER"):
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_180(15));
		
		default:
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x16D1B
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return 4294967295;
}

int func_181(int iParam0)//Position - 0x16DD3
{
	switch (iParam0)
	{
		case joaat("DELUXO"):
			return 0;
			break;
		
		case joaat("AKULA"):
			return 1;
			break;
		
		case joaat("RIOT2"):
			return 2;
			break;
		
		case joaat("STROMBERG"):
			return 3;
			break;
		
		case joaat("CHERNOBOG"):
			return 4;
			break;
		
		case joaat("BARRAGE"):
			return 5;
			break;
		
		case joaat("KHANJALI"):
			return 6;
			break;
		
		case joaat("VOLATOL"):
			return 7;
			break;
		
		case joaat("THRUSTER"):
			return 8;
			break;
	}
	return 4294967295;
}

int func_182(int iParam0)//Position - 0x16E59
{
	int iVar0;
	int iVar1;
	
	if (!Global_11625)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_183();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_183()//Position - 0x16E87
{
	return func_176(6113, 4294967295, 0);
}

int func_184(int iParam0)//Position - 0x16E98
{
	switch (iParam0)
	{
		case joaat("MICROLIGHT"):
			return Global_40001.f_563E;
		
		case joaat("ROGUE"):
			return Global_40001.f_563F;
		
		case joaat("ALPHAZ1"):
			return Global_40001.f_5640;
		
		case joaat("HAVOK"):
			return Global_40001.f_5641;
		
		case joaat("STARLING"):
			return Global_40001.f_5642;
		
		case joaat("MOLOTOK"):
			return Global_40001.f_5643;
		
		case joaat("TULA"):
			return Global_40001.f_5644;
		
		case joaat("BOMBUSHKA"):
			return Global_40001.f_5645;
		
		case joaat("HOWARD"):
			return Global_40001.f_5646;
		
		case joaat("MOGUL"):
			return Global_40001.f_5647;
		
		case joaat("PYRO"):
			return Global_40001.f_5648;
		
		case joaat("SEABREEZE"):
			return Global_40001.f_5649;
		
		case joaat("NOKOTA"):
			return Global_40001.f_564A;
		
		case joaat("HUNTER"):
			return Global_40001.f_564B;
		
		default:
	}
	return 0;
}

bool func_185(int iParam0)//Position - 0x16F88
{
	if (!Global_11625)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_176(5463, 4294967295, 0), iParam0);
}

int func_186(int iParam0)//Position - 0x16FAB
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
		
		case joaat("HALFTRACK"):
			return 1;
		
		case joaat("TRAILERSMALL2"):
			return 2;
		
		case joaat("APC"):
			return 3;
		
		case joaat("TAMPA3"):
			return 5;
		
		case joaat("OPPRESSOR"):
			return 7;
		
		default:
	}
	return 3;
}

int func_187(int iParam0)//Position - 0x16FF7
{
	switch (iParam0)
	{
		case joaat("DUNE3"):
			return 0;
			break;
		
		case joaat("HALFTRACK"):
			return 1;
			break;
		
		case joaat("TRAILERSMALL2"):
			return 2;
			break;
		
		case joaat("APC"):
			return 3;
			break;
		
		case joaat("TAMPA3"):
			return 4;
			break;
		
		case joaat("OPPRESSOR"):
			return 5;
			break;
	}
	return 4294967295;
}

int func_188(int iParam0)//Position - 0x17055
{
	int iVar0;
	
	if (!Global_11625)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_189(iVar0);
}

bool func_189(int iParam0)//Position - 0x17160
{
	int iVar0;
	int iVar1;
	
	if (func_196())
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	iVar1 = iParam0;
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, func_190(iVar1));
}

int func_190(int iParam0)//Position - 0x1718B
{
	return (iParam0 % 32);
}

var func_191(var uParam0)//Position - 0x17198
{
	var uVar0;
	
	uVar0 = func_176(func_192(uParam0), 4294967295, 0);
	return uVar0;
}

int func_192(var uParam0)//Position - 0x171B0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_195(iVar0);
	if ((func_194() == 0 || func_193() == 0) || (func_194() == 999 && func_193() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 9954;
}

int func_193()//Position - 0x1721C
{
	return Global_6374;
}

int func_194()//Position - 0x17227
{
	return Global_6373;
}

int func_195(int iParam0)//Position - 0x17232
{
	return (iParam0 / 32);
}

bool func_196()//Position - 0x1723F
{
	return Global_140844;
}

int func_197(int iParam0)//Position - 0x1724B
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x17305
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)//Position - 0x1735C
{
	if (!Global_11625)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_176(5326, 4294967295, 0), iParam0);
}

int func_200(int iParam0)//Position - 0x1737F
{
	switch (iParam0)
	{
		case joaat("DUNE4"):
			return 0;
		
		case joaat("DUNE5"):
			return 0;
		
		case joaat("WASTELANDER"):
			return 1;
		
		case joaat("BLAZER5"):
			return 2;
		
		case joaat("PHANTOM2"):
			return 3;
		
		case joaat("VOLTIC2"):
			return 4;
		
		case joaat("TECHNICAL2"):
			return 5;
		
		case joaat("BOXVILLE5"):
			return 6;
		
		case joaat("RUINER2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_201(var uParam0)//Position - 0x173E9
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("TECHNICAL2"):
			return 0;
			break;
		
		case joaat("BOXVILLE5"):
			return 1;
			break;
		
		case joaat("WASTELANDER"):
			return 2;
			break;
		
		case joaat("PHANTOM2"):
			return 3;
			break;
		
		case joaat("VOLTIC2"):
			return 4;
			break;
		
		case joaat("DUNE4"):
			return 5;
			break;
		
		case joaat("DUNE5"):
			return 5;
			break;
		
		case joaat("RUINER2"):
			return 6;
			break;
		
		case joaat("BLAZER5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_202()//Position - 0x17472
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 5))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 5))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_2357E.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, 4294967295))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, 4294967295);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_19, 1);
				MISC::SET_BIT(&Global_19, 3);
				MISC::SET_BIT(&Global_19, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, var uParam1)//Position - 0x175C6
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("DUNE5"):
			*uParam1 = 1f;
			break;
		
		case joaat("BOXVILLE5"):
			*uParam1 = 1f;
			break;
		
		case joaat("WASTELANDER"):
			*uParam1 = 1f;
			break;
		
		case joaat("ALPHAZ1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("BOMBUSHKA"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("HOWARD"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("HUNTER"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("MICROLIGHT"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("MOGUL"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("MOLOTOK"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("NOKOTA"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("PYRO"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("ROGUE"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("SEABREEZE"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("STARLING"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("TULA"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("KHANJALI"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("BRUISER"):
			*uParam1 = 1f;
			break;
		
		case joaat("BRUISER2"):
			*uParam1 = 1f;
			break;
		
		case joaat("BRUISER3"):
			*uParam1 = 1f;
			break;
		
		case joaat("BRUTUS"):
			*uParam1 = 1f;
			break;
		
		case joaat("BRUTUS2"):
			*uParam1 = 1f;
			break;
		
		case joaat("BRUTUS3"):
			*uParam1 = 1f;
			break;
		
		case joaat("CERBERUS"):
			*uParam1 = 1f;
			break;
		
		case joaat("CERBERUS2"):
			*uParam1 = 1f;
			break;
		
		case joaat("CERBERUS3"):
			*uParam1 = 1f;
			break;
		
		case joaat("DEATHBIKE"):
			*uParam1 = 1f;
			break;
		
		case joaat("DEATHBIKE2"):
			*uParam1 = 1f;
			break;
		
		case joaat("DEATHBIKE3"):
			*uParam1 = 1f;
			break;
		
		case joaat("DOMINATOR4"):
			*uParam1 = 1f;
			break;
		
		case joaat("DOMINATOR5"):
			*uParam1 = 1f;
			break;
		
		case joaat("DOMINATOR6"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPALER2"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPALER3"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPALER4"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPERATOR"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPERATOR2"):
			*uParam1 = 1f;
			break;
		
		case joaat("IMPERATOR3"):
			*uParam1 = 1f;
			break;
		
		case joaat("ISSI4"):
			*uParam1 = 1f;
			break;
		
		case joaat("ISSI5"):
			*uParam1 = 1f;
			break;
		
		case joaat("ISSI6"):
			*uParam1 = 1f;
			break;
		
		case joaat("MONSTER3"):
			*uParam1 = 1f;
			break;
		
		case joaat("MONSTER4"):
			*uParam1 = 1f;
			break;
		
		case joaat("MONSTER5"):
			*uParam1 = 1f;
			break;
		
		case joaat("SCARAB"):
			*uParam1 = 1f;
			break;
		
		case joaat("SCARAB2"):
			*uParam1 = 1f;
			break;
		
		case joaat("SCARAB3"):
			*uParam1 = 1f;
			break;
		
		case joaat("SLAMVAN4"):
			*uParam1 = 1f;
			break;
		
		case joaat("SLAMVAN5"):
			*uParam1 = 1f;
			break;
		
		case joaat("SLAMVAN6"):
			*uParam1 = 1f;
			break;
		
		case joaat("ZR380"):
			*uParam1 = 1f;
			break;
		
		case joaat("ZR3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("ZR3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_204(int iParam0)//Position - 0x178C7
{
	switch (iParam0)
	{
		case joaat("SCARAB"):
		case joaat("BRUISER"):
		case joaat("CERBERUS"):
		case joaat("MONSTER3"):
		case joaat("DOMINATOR4"):
		case joaat("IMPALER2"):
		case joaat("IMPERATOR"):
		case joaat("ISSI4"):
		case joaat("DEATHBIKE"):
		case joaat("ZR380"):
		case joaat("SLAMVAN4"):
		case 3895979524:
		case joaat("BRUTUS"):
		case joaat("IMPERATOR2"):
		case joaat("IMPERATOR3"):
		case joaat("DEATHBIKE3"):
		case joaat("DEATHBIKE2"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x179B9
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0, int iParam1)//Position - 0x17A11
{
	switch (iParam0)
	{
		case 64:
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 67:
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 72:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 117:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			break;
		
		case 49:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 118:
			MISC::SET_BIT(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			break;
		
		case 1:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 119:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			break;
		
		case 77:
			MISC::SET_BIT(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 120:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 130:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 132:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 135:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 137:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 141:
			MISC::SET_BIT(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 6);
			break;
		
		case 147:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			MISC::SET_BIT(iParam1, 5);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 7);
			MISC::SET_BIT(iParam1, 8);
			break;
		
		case 203:
			MISC::SET_BIT(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 100:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 170:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 160:
			MISC::SET_BIT(iParam1, 15);
			break;
		
		case 161:
			MISC::SET_BIT(iParam1, 15);
			break;
		
		case 192:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 221:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			break;
		
		case 222:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 172:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 165:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 166:
			MISC::SET_BIT(iParam1, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 1);
			break;
		
		case 139:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 104:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 109:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 227:
		case 252:
			MISC::SET_BIT(iParam1, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 2);
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 4);
			break;
		
		case 97:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 52:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 108:
			MISC::SET_BIT(iParam1, 1);
			break;
		
		case 237:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 238:
			GRAPHICS::_0x35FB78DC42B7BD21(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_1116C)
			{
				MISC::SET_BIT(iParam1, 9);
			}
			break;
		
		case 271:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 2);
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 272:
			MISC::SET_BIT(iParam1, 3);
			MISC::SET_BIT(iParam1, 4);
			break;
		
		case 273:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 281:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 267:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 268:
			MISC::SET_BIT(iParam1, 0);
			break;
		
		case 292:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 309:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 329:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 364:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 360:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 401:
			MISC::SET_BIT(iParam1, 0);
			MISC::SET_BIT(iParam1, 1);
			MISC::SET_BIT(iParam1, 6);
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 406:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 404:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 425:
		case 426:
		case 427:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		case 431:
		case 432:
		case 433:
			MISC::SET_BIT(iParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_207(char* sParam0)//Position - 0x17F09
{
	int iVar0;
	
	StringCopy(&(Global_43D7.f_1), sParam0, 16);
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17F54
{
	Global_43D7.f_13D9[0] = iParam0;
	Global_43D7.f_13D9[1] = iParam1;
	Global_43D7.f_13D9[2] = iParam2;
	Global_43D7.f_13D9[3] = iParam3;
	Global_43D7.f_13D9[4] = iParam4;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17F93
{
	Global_43D7.f_13BE[0] = iParam0;
	Global_43D7.f_13BE[1] = iParam1;
	Global_43D7.f_13BE[2] = iParam2;
	Global_43D7.f_13BE[3] = iParam3;
	Global_43D7.f_13BE[4] = iParam4;
	Global_43D7.f_1468 = 0;
	if (iParam0 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam1 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam2 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam3 != 0)
	{
		Global_43D7.f_1468++;
	}
	if (iParam4 != 0)
	{
		Global_43D7.f_1468++;
	}
}

void func_210(bool bParam0, bool bParam1)//Position - 0x1803F
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43D7.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43D7.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25846A[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43D7.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43D7.f_13DF[iVar0] = 0;
		Global_43D7.f_1469[iVar0] = 0;
		Global_43D7.f_14EA[iVar0] = 0;
		Global_43D7.f_16F2[iVar0] = 0f;
		Global_43D7.f_156B[iVar0] = 0;
		Global_43D7.f_166C[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43D7.f_13BE[iVar0] = 0;
		Global_43D7.f_13CA[iVar0] = 0f;
		Global_43D7.f_13C4[iVar0] = -1f;
		Global_43D7.f_13D1[iVar0] = 0;
		Global_43D7.f_13D9[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43D7.f_1362[iVar0 /*4*/]), "", 16);
		Global_43D7.f_1393[iVar0] = 4294967295;
		Global_43D7.f_13A0[iVar0] = 358;
		Global_43D7.f_13AD[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_43D7.f_177E[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43D7.f_1ACF[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43D7.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_411BEA.f_10), "", 16);
	Global_411BEA.f_14 = 4294967295;
	Global_43D7 = 0;
	Global_43D7.f_1460 = 0;
	Global_43D7.f_1461 = 0;
	Global_43D7.f_1462 = 0;
	Global_43D7.f_1464 = 0;
	Global_43D7.f_1465 = 0;
	Global_43D7.f_1466 = 0;
	Global_43D7.f_1463 = 0;
	Global_43D7.f_16ED = 0;
	Global_43D7.f_1666 = 0;
	Global_43D7.f_1665 = 0;
	Global_43D7.f_1667 = 0;
	StringCopy(&(Global_43D7.f_1252), "", 16);
	Global_43D7.f_1298 = 0;
	Global_43D7.f_1299 = 0;
	Global_43D7.f_129A = 0;
	Global_43D7.f_129B = 0;
	Global_43D7.f_129C = 0;
	Global_43D7.f_129D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_1256[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_129E = 0;
	StringCopy(&(Global_411BEA.f_15), "", 16);
	Global_411BEA.f_3D = 0;
	Global_411BEA.f_3E = 0;
	Global_411BEA.f_3F = 0;
	Global_411BEA.f_40 = 0;
	Global_411BEA.f_41 = 0;
	Global_411BEA.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_411BEA.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_411BEA.f_43 = 0;
	StringCopy(&(Global_43D7.f_1), "", 16);
	Global_43D7.f_13D0 = 0f;
	Global_43D7.f_44 = 0;
	Global_43D7.f_45 = 0;
	Global_43D7.f_46 = 0;
	Global_43D7.f_47 = 0;
	Global_43D7.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43D7.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_166B = 0;
	Global_43D7.f_166A = 0;
	Global_43D7.f_1668 = 0;
	Global_43D7.f_1669 = 0;
	Global_43D7.f_129F = 0;
	Global_43D7.f_12A0 = 0;
	Global_43D7.f_1467 = 10;
	Global_43D7.f_1468 = 0;
	Global_43D7.f_16EF = 0f;
	Global_43D7.f_16F0 = 0f;
	Global_43D7.f_165E = 0;
	Global_43D7.f_165F = 0;
	Global_43D7.f_1660 = 0f;
	Global_43D7.f_1661 = 0;
	Global_43D7.f_1663 = 0;
	Global_43D7.f_1662 = 0;
	Global_43D7.f_1664 = 0;
	Global_43D7.f_1F97 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43D7.f_1773[iVar0] = 4294967295;
		Global_43D7.f_1776[iVar0] = 4294967295;
		iVar0++;
	}
	Global_43D7.f_13D7 = 0f;
	Global_43D7.f_13BA = 0;
	Global_43D7.f_13D8 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43D7.f_1779)
	{
		Global_43D7.f_1779[iVar0] = 0;
		iVar0++;
	}
	Global_43D7.f_1F82 = 0;
	Global_43D7.f_1F7D = 0;
	Global_43D7.f_1F87 = 0;
	Global_43D7.f_1F8C = 0;
	Global_43D7.f_1F91 = 0;
	Global_43D7.f_1F93 = 0;
	Global_43D7.f_1F99 = 0;
	Global_43D4 = 0.05f;
	Global_43D5 = 0.05f;
	Global_43D6 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43D6 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43D6 = 0.225f;
	}
}

void func_211()//Position - 0x18519
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_212(int iParam0, bool bParam1)//Position - 0x18537
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_80(0))
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

bool func_213(char* sParam0, int iParam1, bool bParam2)//Position - 0x185EF
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
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
	bVar2 = func_214(&(Global_43D7.f_161A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_214(var uParam0)//Position - 0x186E5
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

void func_215(char* sParam0, int iParam1)//Position - 0x18787
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_216(char* sParam0)//Position - 0x1879E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_217(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x187B1
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == 4294967295)
		{
			func_69(iParam0);
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

bool func_218(int iParam0, int iParam1)//Position - 0x188DC
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6242[iParam0], iVar0);
}

int func_219(int iParam0)//Position - 0x1891A
{
	int iVar0;
	int iVar1[128];
	
	if (func_222(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("ELEGY2");
			iVar0++;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("DUNE2");
			iVar0++;
		}
	}
	if (func_43() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_221(33, 0) && !func_220(1751306471))
		{
			iVar1[iVar0] = joaat("BLISTA3");
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_3)
		{
			iVar1[iVar0] = joaat("STALION2");
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_4)
		{
			iVar1[iVar0] = joaat("GAUNTLET2");
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_5)
		{
			iVar1[iVar0] = joaat("DOMINATOR2");
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_6)
		{
			iVar1[iVar0] = joaat("BUFFALO3");
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_7)
		{
			iVar1[iVar0] = joaat("MARSHALL");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x18A5F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_1DEC.f_2FC)
	{
		if (Global_19E56.f_1DEC.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0, int iParam1)//Position - 0x18A9A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_222(bool bParam0, bool bParam1)//Position - 0x18ABD
{
	if (bParam0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C.f_51D, 2))
		{
			return 1;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_0x1353F87E89946207())
		{
			return 0;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0x18B29
{
	int iVar0;
	
	iVar0 = 0;
	if (func_222(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4872[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (func_43() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_221(33, 0) && !func_220(1751306471))
		{
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_3)
		{
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_4)
		{
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_5)
		{
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_6)
		{
			iVar0++;
		}
		if (Global_19E56.f_61D5.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_224(float fParam0)//Position - 0x18BF8
{
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(AUDIO::_0x0626A247D2405330()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), fParam0) > 0;
		}
	}
	return 0;
}

bool func_225(bool bParam0)//Position - 0x18C4A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_226()//Position - 0x18C75
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	bool bVar15;
	float fVar16;
	int iVar17;
	vector3 vVar18;
	vector3 vVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_1D.f_50 && Local_56.f_1D.f_45) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && Local_56.f_2 == 0) && Local_56 != 4294967295) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_10B8E) && !func_225(1)) && !func_309()) || (((Local_56.f_3 > 1 && !func_225(0)) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && !func_309()))
	{
		func_308(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		vVar5 = { 198.3659f, -1020.273f, -100f };
		vVar6 = { vVar5 };
		vVar7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_307(Local_56);
		switch (Local_56.f_3)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && (func_306(ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()), Local_56.f_1D.f_44, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))) && PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) && !PED::IS_PED_BEING_JACKED(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) && !BRAIN::GET_IS_TASK_ACTIVE(AUDIO::_0x0626A247D2405330(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_305())
					{
						bVar9 = true;
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
								{
									iVar10 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar10))) || iVar10 == joaat("MONSTER")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(AUDIO::_0x0626A247D2405330()) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
						{
							STREAMING::REQUEST_ANIM_DICT(sVar4);
							if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_217(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216("WEB_VEH_INV"))
							{
								func_215("WEB_VEH_INV", 4294967295);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_216("WEB_VEH_FULL"))
					{
						func_215("WEB_VEH_FULL", 4294967295);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						iLocal_173 = 0;
						STREAMING::REQUEST_ANIM_DICT(sVar4);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
						{
							iVar12 = ENTITY::GET_ENTITY_MODEL(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || VEHICLE::IS_BIG_VEHICLE(iVar2)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar12) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar12)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar12))) || iVar12 == joaat("MONSTER")) || FIRE::IS_ENTITY_ON_FIRE(iVar2)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2)) || (PED::IS_PED_IN_ANY_TAXI(AUDIO::_0x0626A247D2405330()) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && (func_306(ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()), Local_56.f_1D.f_44, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))) && PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) && func_305()) && !PED::IS_PED_BEING_JACKED(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) && !BRAIN::GET_IS_TASK_ACTIVE(AUDIO::_0x0626A247D2405330(), 2)) && !func_309()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar4) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar4)))
					{
						if (func_212(iLocal_115, 1))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_303(47, 0);
						func_298(47, 0);
						Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar5, "v_garagem_sp");
						if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
						{
							if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_70))
							{
								if ((MISC::GET_FRAME_COUNT() % 10) == 0)
								{
									INTERIOR::_LOAD_INTERIOR(Local_56.f_70);
								}
							}
							StringCopy(&Global_8047, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
							{
								iVar13 = func_296(Local_56);
								func_61(&vVar14, iVar13);
								vVar6 = { vVar14 };
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar6, 20f, 0);
							}
							else
							{
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_69(&iLocal_115);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_303(47, 0);
				func_298(47, 0);
				PLAYER::FORCE_CLEANUP(8);
				Global_11188.f_241 = 1;
				Global_11188.f_242 = { Local_56.f_1D.f_37 };
				iLocal_155 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
				NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
				PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				unk_0x59B038076F830627(false);
				HUD::DISPLAY_RADAR(false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(CAM::_0xDC9DA9E8789F5246());
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
					{
						if (func_306(ENTITY::GET_ENTITY_HEADING(iVar2), Local_56.f_1D.f_44, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar2, true, true, true, true, true, true, 0, false);
						MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_56[0 /*6*/], 20f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_56[0 /*6*/], 20f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_83.f_56[0 /*6*/], 7f);
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_56[0 /*6*/], 1, false, 0, 1);
						if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, (Local_83.f_56[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_56[0 /*6*/].f_3.f_2);
						}
						if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
						{
							PED::GIVE_PED_HELMET(AUDIO::_0x0626A247D2405330(), 0, 0, 4294967295);
							PED::SET_PED_HELMET(AUDIO::_0x0626A247D2405330(), 1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
					}
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
					func_290(1, 1, 1, 0, 0);
					func_289(&(Local_83[1 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 3;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && !ENTITY::IS_ENTITY_DEAD(iLocal_168, 0))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, 1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
						}
					}
					iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_168, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_168, 0))
						{
							if (!bVar15)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_168, Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(24);
								if (func_288(&Local_141, 24))
								{
									func_283(&Local_141, func_467());
									if (ENTITY::DOES_ENTITY_EXIST(iVar17))
									{
										VEHICLE::DELETE_VEHICLE(&iVar17);
									}
								}
								if (Local_56 == 21)
								{
									MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56 == 22)
								{
									MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56 == 23)
								{
									MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 1084227584);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					vVar18 = { Local_56.f_1D * Vector(2f, 2f, 2f) + Local_56.f_1D.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar19 = { Local_56.f_1D * Vector(1f, 1f, 1f) + Local_56.f_1D.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D, vVar18.x, vVar18.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vVar18.x, vVar18.y, Local_56.f_1D.f_2, vVar19.x, vVar19.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vVar19.x, vVar19.y, Local_56.f_1D.f_2, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					MISC::CLEAR_AREA_OF_OBJECTS(Local_83.f_49[0 /*4*/], 20f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_83.f_56[0 /*6*/], 20f, 0);
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), Local_83.f_49[0 /*4*/], 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), Local_83.f_49[0 /*4*/].f_3);
					iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_49[0 /*4*/], 0f, 0f, Local_83.f_49[0 /*4*/].f_3, 2);
					BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
					func_290(1, 1, 1, 0, 0);
					func_289(&(Local_83[0 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 4;
				}
				Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar5, "v_garagem_sp");
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_70))
					{
						INTERIOR::_LOAD_INTERIOR(Local_56.f_70);
					}
					StringCopy(&Global_8047, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						iVar20 = func_296(Local_56);
						func_61(&vVar21, iVar20);
						vVar6 = { vVar21 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar6, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar7, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_131.f_9), 25);
				func_277(198.0043f, -999.7775f, -100f, 50f, 0);
				func_113(Local_56);
				func_113(26);
				func_113(29);
				func_113(32);
				func_113(28);
				func_113(31);
				func_113(34);
				func_113(27);
				func_113(30);
				func_113(33);
				SYSTEM::SETTIMERA(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_70))
					{
						INTERIOR::_LOAD_INTERIOR(Local_56.f_70);
					}
					StringCopy(&Global_8047, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar5, "v_garagem_sp");
				}
				if (func_276())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E) && CAM::IS_CAM_RENDERING(Local_56.f_6E))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6E))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_E * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_6F) && CAM::IS_CAM_RENDERING(Local_56.f_6F))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6F))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_E * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar23 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar24 = AUDIO::GET_SOUND_ID();
					unk_0x1190AB7024CBD8CB(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar24, "hold", (2250f / 1000f));
					func_290(0, 1, 1, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
						CAM::DESTROY_CAM(Local_56.f_6E, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
						CAM::DESTROY_CAM(Local_56.f_6F, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
					}
					iLocal_120 = 4294967295;
					BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), 194.5394f, -1026.32f, -100f, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), 334.1665f);
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_275(Local_56);
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					func_274();
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
					}
					CAM::DO_SCREEN_FADE_IN(800);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_275(Local_56);
				bVar25 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_70))
					{
						INTERIOR::_LOAD_INTERIOR(Local_56.f_70);
					}
					StringCopy(&Global_8047, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar5, "v_garagem_sp");
				}
				if (func_276())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E) && CAM::IS_CAM_RENDERING(Local_56.f_6E))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6E))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_E * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_6F) && CAM::IS_CAM_RENDERING(Local_56.f_6F))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6F))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_E * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_266(AUDIO::_0x0626A247D2405330(), Local_83.f_56[0 /*6*/], Local_83.f_42[0 /*3*/], ((Local_83[1 /*15*/].f_E * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_274();
					SYSTEM::SETTIMERA(0);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_275(Local_56);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_274();
					func_290(0, 1, 1, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
						CAM::DESTROY_CAM(Local_56.f_6E, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
						CAM::DESTROY_CAM(Local_56.f_6F, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
						{
							iVar28 = func_296(Local_56);
							func_61(&Var29, iVar28);
							ENTITY::SET_ENTITY_COORDS(iVar2, Var29, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar2, Var29.f_3);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar2, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, false, true, 0);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar2, 4);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 1, 0);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar2, 0, 0);
							unk_0x4E87F356DA56EB3F(iVar2, false);
							ENTITY::SET_ENTITY_PROOFS(iVar2, false, false, false, false, false, false, 0, false);
							BRAIN::TASK_LEAVE_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar2, 0);
							unk_0x346478B12F69D4E3(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_3B = 2;
							func_32(iVar2, &Var30);
							func_114(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_265(iVar2);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					iVar31 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar0, 4294967295);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar32]) && !PED::IS_PED_INJURED(uVar0[iVar32])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar32], PLAYER::GET_PLAYER_GROUP(CAM::_0xDC9DA9E8789F5246())))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar32++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_IN(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_19E56.f_7F5D.f_12C0)
				{
					if (!Global_19E56.f_7F5D.f_12C0)
					{
						if (iLocal_156 == 0)
						{
							func_215("CAR_GAR_05", 4294967295);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_215("CAR_GAR_06", 4294967295);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_19E56.f_7F5D.f_12C0 = 1;
							}
						}
					}
					else
					{
						func_215("CAR_GAR_EXIT", 4294967295);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_19E56.f_7F5D.f_12C0 = 1;
				}
				iVar33 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					if (iLocal_115 != 4294967295)
					{
						func_69(&iLocal_115);
					}
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
					{
						if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar2) || PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
						{
							if (!(PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330())))
							{
								if ((((PAD::_0x4F8A26A890FD62FB(0, 71) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 71)) || NETWORK::_0x5C497525F803486B(0, 71)) || unk_0xE11F00B4AC919F45(0, 71))
								{
									iVar33 = 1;
								}
								if ((((PAD::_0x4F8A26A890FD62FB(0, 72) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 72)) || NETWORK::_0x5C497525F803486B(0, 72)) || unk_0xE11F00B4AC919F45(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT(sVar4);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_306(ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330()), 180f, 90f))
					{
						if (iLocal_114 != 4294967295)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == 4294967295)
						{
							func_217(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != 4294967295 && !iLocal_115 == 4294967295)
						{
							if (func_212(iLocal_115, 1))
							{
								func_69(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != 4294967295)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_264())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || iLocal_159)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_49[2 /*4*/], 20f, 0);
						if (iLocal_115 != 4294967295)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
					{
						sLocal_176 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = PED::CREATE_SYNCHRONIZED_SCENE(Local_83.f_49[1 /*4*/], 0f, 0f, Local_83.f_49[1 /*4*/].f_3, 2);
						BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
						func_290(1, 1, 1, 0, 0);
						func_289(&(Local_83[2 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_49[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != 4294967295)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar4))
					{
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), Local_83.f_49[1 /*4*/], 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), Local_83.f_49[1 /*4*/].f_3);
						func_290(1, 1, 1, 0, 0);
						func_289(&(Local_83[2 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_83.f_49[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != 4294967295)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_276())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E) && CAM::IS_CAM_RENDERING(Local_56.f_6E))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6E))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_E * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_6F) && CAM::IS_CAM_RENDERING(Local_56.f_6F))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6F))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_E * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
				{
					fVar35 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					CAM::DO_SCREEN_FADE_OUT(800);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar36 = func_263();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_3B = 2;
						func_114(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_116(iVar36);
					}
					else if (iVar36 != 4294967295)
					{
						if (!iLocal_159)
						{
							func_473(iVar36, 0);
							func_116(iVar36);
						}
					}
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
					STREAMING::REMOVE_ANIM_DICT(sVar4);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar38 = AUDIO::GET_SOUND_ID();
					unk_0x1190AB7024CBD8CB(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "hold", (2250f / 1000f));
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
						CAM::DESTROY_CAM(Local_56.f_6E, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
						CAM::DESTROY_CAM(Local_56.f_6F, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						if (!iLocal_159)
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_1D.f_4D[1]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_120))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_120);
						}
						iLocal_120 = 4294967295;
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_4D[1]);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						STREAMING::REQUEST_MODEL(iLocal_160);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_160))
						{
							iVar40 = VEHICLE::CREATE_VEHICLE(iLocal_160, Local_56.f_1D.f_46[0 /*3*/], Local_56.f_1D.f_4D[0], true, true, false);
							if (iLocal_160 == joaat("WINDSOR"))
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar40, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar40) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar40, 0))
							{
								PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar40, 4294967295);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar40, 0f);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
								if (func_117(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("MARSHALL"):
											VEHICLE::SET_VEHICLE_LIVERY(iVar40, iLocal_111);
											break;
										}
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_168, 0))
						{
							iVar41 = func_49(24);
							if (func_288(&Local_141, 24))
							{
								func_283(&Local_141, func_467());
								if (ENTITY::DOES_ENTITY_EXIST(iVar41))
								{
									VEHICLE::DELETE_VEHICLE(&iVar41);
								}
							}
							if (Local_56 == 21)
							{
								MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
								func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56 == 22)
							{
								MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
								func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56 == 23)
							{
								MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
								func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 1084227584);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_42[1 /*3*/], 1, false, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar2, Local_56.f_1D.f_4D[0]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
								if ((iLocal_160 == joaat("MONSTER") || iLocal_160 == joaat("MARSHALL")) || iLocal_160 == joaat("RHINO"))
								{
									VEHICLE::_0x428BACCDF5E26EAD(iVar2, false);
								}
								else
								{
									VEHICLE::_0x428BACCDF5E26EAD(iVar2, true);
								}
								if (PED::IS_PED_ON_ANY_BIKE(AUDIO::_0x0626A247D2405330()))
								{
									PED::GIVE_PED_HELMET(AUDIO::_0x0626A247D2405330(), 0, 0, 4294967295);
									PED::SET_PED_HELMET(AUDIO::_0x0626A247D2405330(), 1);
								}
								unk_0x4E87F356DA56EB3F(iVar2, true);
								func_232(func_467(), &iVar2, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							func_290(1, 1, 1, 0, 0);
							func_289(&(Local_83[3 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
							iLocal_175 = 0;
							iLocal_177 = 4294967295;
							Local_56.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar4);
							func_274();
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
								CAM::DESTROY_CAM(Local_56.f_6E, 0);
							}
							if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
							{
								CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
								CAM::DESTROY_CAM(Local_56.f_6F, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
							{
								ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
								unk_0x346478B12F69D4E3(iLocal_178, false);
								iLocal_178 = 0;
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							PLAYER::FORCE_CLEANUP(8);
							BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
							ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_4D[1]);
							CAM::DO_SCREEN_FADE_IN(800);
							SYSTEM::SETTIMERA(0);
							func_277(198.0043f, -999.7775f, -100f, 50f, 0);
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
						}
						unk_0x59B038076F830627(false);
						HUD::DISPLAY_RADAR(false);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						iVar42 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar0, 4294967295);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar43]) && !PED::IS_PED_INJURED(uVar0[iVar43])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar43], PLAYER::GET_PLAYER_GROUP(CAM::_0xDC9DA9E8789F5246())))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar2) > iVar43)
									{
										PED::SET_PED_INTO_VEHICLE(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar43], Local_56.f_1D.f_46[1 /*3*/], 0, 0, 1);
								}
							}
							iVar43++;
						}
						PLAYER::FORCE_CLEANUP(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_276())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E) && CAM::IS_CAM_RENDERING(Local_56.f_6E))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6E))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_E * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_56.f_6F) && CAM::IS_CAM_RENDERING(Local_56.f_6F))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_56.f_6F))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_E * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					func_266(AUDIO::_0x0626A247D2405330(), Local_83.f_56[1 /*6*/], Local_83.f_42[1 /*3*/], ((Local_83[3 /*15*/].f_E * 1000f) - 500f), Local_83.f_49[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_231(AUDIO::_0x0626A247D2405330(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_277(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 16;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
				{
					INTERIOR::UNPIN_INTERIOR(Local_56.f_70);
				}
				StringCopy(&Global_8047, "", 32);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				}
				func_230(47, 1);
				func_228(47, 1);
				Global_11188.f_241 = 0;
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				SYSTEM::SETTIMERA(0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
					CAM::DESTROY_CAM(Local_56.f_6E, 0);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
				{
					CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
					CAM::DESTROY_CAM(Local_56.f_6F, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
					unk_0x346478B12F69D4E3(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar2, Local_83.f_49[2 /*4*/], 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar2, Local_83.f_49[2 /*4*/].f_3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
				unk_0x59B038076F830627(true);
				HUD::DISPLAY_RADAR(true);
				func_290(0, 1, 1, 0, 0);
				NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
				if (iLocal_155 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), iLocal_155, 0);
					HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, 0)) && iLocal_168 != func_49(24))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_11188.f_241)
		{
			func_230(47, 1);
			func_228(47, 1);
			Global_11188.f_241 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != 4294967295)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_11188.f_241)
	{
		HUD::_DISABLE_RADAR_THIS_FRAME();
		func_227();
		func_76(0);
		WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), true);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 38, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_165))
			{
				if ((((func_216("WEB_VEH_INV") || func_216("WEB_VEH_FULL")) || func_216("CAR_GAR_05")) || func_216("CAR_GAR_06")) || func_216("CAR_GAR_EXIT"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_227()//Position - 0x1B35F
{
	Global_434C.f_6 = 1;
}

void func_228(int iParam0, bool bParam1)//Position - 0x1B36D
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_7C97[Var0.f_1]), Var0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7C97[Var0.f_1]), Var0);
	}
}

struct<2> func_229(var uParam0)//Position - 0x1B3B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = 4294967295;
	Var3.f_1 = 4294967295;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_230(int iParam0, bool bParam1)//Position - 0x1B402
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_7C90[Var0.f_1]), Var0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7C90[Var0.f_1]), Var0);
	}
}

float func_231(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1B445
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_232(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1B47F
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam1, 0))
	{
		if (iParam2 > Global_19E56.f_933.f_21B.f_953)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 1;
			}
			else
			{
				Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
			}
		}
		else
		{
			Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
		}
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_19 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_59 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		Global_19E56.f_933.f_21B.f_10C9[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_235(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_19E56.f_4E7A[iParam0 /*43*/].f_28 = 1;
				Global_19E56.f_4E7A[iParam0 /*43*/] = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_3 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_4 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_5 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_6 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_A = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_10 = !Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_13 = { Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_19E56.f_4E7A[iParam0 /*43*/].f_17 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_7 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[11];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_8 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[12];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_9 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[23];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_B = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[4];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_C = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[15];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_D = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[16];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_E = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[14];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_F = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[22];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_12 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[20];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_11 = Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[18];
				Global_19E56.f_4E7A[iParam0 /*43*/].f_18 = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 11) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_19 = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 12) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1A = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 4) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1B = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 23) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1C = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 14) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1D = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 16) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1E = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1, 15) + 1;
				Global_19E56.f_4E7A[iParam0 /*43*/].f_20 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[0] = unk_0xC28362974F1C5F02(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_27 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_1F = func_234(*iParam1);
				Global_19E56.f_4E7A[iParam0 /*43*/].f_21[0] = AUDIO::_GET_VEHICLE_HORN_HASH(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = 4294967295;
				}
				func_233(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_19E56.f_4E7A[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = 4294967295;
				}
				func_233(Global_19E56.f_933.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6, 4294967295, iVar3, 0, &(Global_19E56.f_4E7A[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_233(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x1C094
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_141(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == 4294967295) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = 4294967295;
	iParam1 = 4294967295;
	*uParam4 = 4294967295;
	return 0;
}

float func_234(int iParam0)//Position - 0x1C107
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_235(int iParam0, bool bParam1, var uParam2)//Position - 0x1C1B7
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_261(iVar0, bParam1, uParam2) && !func_260(CAM::_0xDC9DA9E8789F5246())) && !func_244(iParam0))
	{
		return 0;
	}
	if (func_260(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_243(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_242(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_240(iParam0)) && !bVar1) && !(func_239(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_236(CAM::_0xDC9DA9E8789F5246())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("CERBERUS"):
			case joaat("CERBERUS2"):
			case joaat("CERBERUS3"):
			case joaat("MONSTER3"):
			case joaat("MONSTER4"):
			case joaat("MONSTER5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_62(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("SENTINEL2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("ISSI2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0)//Position - 0x1C325
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x1C36C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

int func_238(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C6C6
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

int func_239(int iParam0)//Position - 0x1C710
{
	if (((iParam0 == joaat("MULE4") || iParam0 == joaat("POUNDER2")) || iParam0 == joaat("SPEEDO4")) || iParam0 == joaat("TERBYTE"))
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x1C752
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HALFTRACK"):
		case joaat("PHANTOM3"):
		case joaat("HAULER2"):
		case joaat("TRAILERLARGE"):
		case joaat("TRAILERSMALL2"):
		case joaat("BRUISER"):
		case joaat("SCARAB"):
		case joaat("SCARAB2"):
		case joaat("SCARAB3"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			return 1;
			break;
		
		case joaat("CERBERUS"):
		case joaat("CERBERUS2"):
		case joaat("CERBERUS3"):
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (func_241(CAM::_0xDC9DA9E8789F5246()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x1C7E5
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)//Position - 0x1C82C
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_243(int iParam0)//Position - 0x1C872
{
	switch (iParam0)
	{
		case joaat("AVENGER"):
		case joaat("THRUSTER"):
		case joaat("RIOT2"):
		case joaat("CHERNOBOG"):
		case joaat("KHANJALI"):
			return 1;
			break;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x1C8A7
{
	if (func_259(CAM::_0xDC9DA9E8789F5246()) || func_258(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0)//Position - 0x1C8D6
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_248(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_HASH_FROM_PLAYER_HANDLE(CAM::_0xDC9DA9E8789F5246()))
		{
			if (func_246(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("ARDENT"):
				case joaat("NIGHTSHARK"):
				case joaat("DELUXO"):
				case joaat("STROMBERG"):
				case joaat("COMET4"):
				case joaat("REVOLTER"):
				case joaat("SAVESTRA"):
				case joaat("VISERIS"):
				case joaat("CARACARA"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x1C98D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (func_247(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x1C9C3
{
	switch (iParam0)
	{
		case joaat("APC"):
		case joaat("DUNE3"):
		case joaat("HALFTRACK"):
		case joaat("OPPRESSOR"):
		case joaat("TAMPA3"):
		case joaat("TECHNICAL3"):
		case joaat("INSURGENT3"):
		case joaat("VIGILANTE"):
		case joaat("BARRAGE"):
		case joaat("MENACER"):
		case joaat("SCRAMJET"):
			return 1;
			break;
	}
	return 0;
}

int func_248(int iParam0, bool bParam1)//Position - 0x1CA1C
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("TECHNICAL"):
		case joaat("INSURGENT"):
			if (func_250(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_26862F.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_249(iParam0) != 4294967295 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x1CA77
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_252F9E.f_26F[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_250(int iParam0, int iParam1)//Position - 0x1CAB1
{
	if (iParam1 == 0)
	{
		if (func_257(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("FACTION"):
		case joaat("BUCCANEER"):
		case joaat("CHINO"):
		case joaat("MOONBEAM"):
		case joaat("PRIMO"):
		case joaat("VOODOO2"):
			return func_256();
			break;
		
		case joaat("SABREGT"):
			if (Global_40001.f_370C)
			{
				return func_255();
			}
			break;
		
		case joaat("TORNADO"):
		case joaat("TORNADO2"):
		case joaat("TORNADO3"):
			if (Global_40001.f_370D)
			{
				return func_255();
			}
			break;
		
		case joaat("VIRGO3"):
			if (Global_40001.f_370B)
			{
				return func_255();
			}
			break;
		
		case joaat("MINIVAN"):
			if (Global_40001.f_370E)
			{
				return func_255();
			}
			break;
		
		case joaat("SLAMVAN"):
			if (Global_40001.f_3710)
			{
				return func_255();
			}
			break;
		
		case joaat("SULTAN"):
		case joaat("BANSHEE"):
			return func_254();
			break;
		
		case joaat("COMET2"):
			if (Global_40001.f_486A)
			{
				return func_253();
			}
			break;
		
		case joaat("DIABLOUS"):
			if (Global_40001.f_486C)
			{
				return func_253();
			}
			break;
		
		case joaat("FCR"):
			if (Global_40001.f_4870)
			{
				return func_253();
			}
			break;
		
		case joaat("ELEGY2"):
			if (Global_40001.f_486D)
			{
				return func_253();
			}
			break;
		
		case joaat("NERO"):
			if (Global_40001.f_4874)
			{
				return func_253();
			}
			break;
		
		case joaat("ITALIGTB"):
			if (Global_40001.f_4872)
			{
				return func_253();
			}
			break;
		
		case joaat("SPECTER"):
			if (Global_40001.f_4877)
			{
				return func_253();
			}
			break;
		
		case joaat("TECHNICAL"):
			if (Global_40001.f_500D)
			{
				return func_252();
			}
			break;
		
		case joaat("INSURGENT"):
			if (Global_40001.f_500E)
			{
				return func_252();
			}
			break;
		
		case joaat("RATLOADER"):
		case joaat("RATLOADER2"):
			return func_251();
			break;
		
		case joaat("GLENDALE"):
			return func_251();
			break;
		
		case joaat("IMPALER"):
			return func_251();
			break;
		
		case joaat("ISSI3"):
			return func_251();
			break;
		
		case joaat("GARGOYLE"):
			return func_251();
			break;
		
		case joaat("DOMINATOR"):
			return func_251();
			break;
		
		case joaat("DOMINATOR2"):
			return func_251();
			break;
		
		case joaat("IMPERATOR"):
			return func_251();
			break;
		
		case joaat("IMPERATOR2"):
			return func_251();
			break;
		
		case joaat("IMPERATOR3"):
			return func_251();
			break;
		
		case joaat("DEATHBIKE"):
			return func_251();
			break;
		
		case joaat("DEATHBIKE2"):
			return func_251();
			break;
		
		case joaat("DEATHBIKE3"):
			return func_251();
			break;
		
		case joaat("IMPALER2"):
		case joaat("BRUTUS"):
		case joaat("BRUISER"):
		case joaat("SLAMVAN4"):
		case joaat("ISSI4"):
		case joaat("MONSTER3"):
		case joaat("SCARAB"):
		case joaat("CERBERUS"):
		case joaat("DOMINATOR4"):
		case joaat("ZR380"):
		case joaat("IMPALER3"):
		case joaat("BRUTUS2"):
		case joaat("BRUISER2"):
		case joaat("SLAMVAN5"):
		case joaat("ISSI5"):
		case joaat("MONSTER4"):
		case joaat("SCARAB2"):
		case joaat("CERBERUS2"):
		case joaat("DOMINATOR5"):
		case joaat("ZR3802"):
		case joaat("IMPALER4"):
		case joaat("BRUTUS3"):
		case joaat("BRUISER3"):
		case joaat("SLAMVAN6"):
		case joaat("ISSI6"):
		case joaat("MONSTER5"):
		case joaat("SCARAB3"):
		case joaat("CERBERUS3"):
		case joaat("DOMINATOR6"):
		case joaat("ZR3803"):
			return func_251();
			break;
	}
	return 0;
}

bool func_251()//Position - 0x1CE25
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

bool func_252()//Position - 0x1CE36
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

bool func_253()//Position - 0x1CE47
{
	return DLC::IS_DLC_PRESENT(3337689893);
}

bool func_254()//Position - 0x1CE58
{
	return DLC::IS_DLC_PRESENT(210122941);
}

bool func_255()//Position - 0x1CE69
{
	return DLC::IS_DLC_PRESENT(2400444888);
}

bool func_256()//Position - 0x1CE7A
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

int func_257(int iParam0, int iParam1)//Position - 0x1CE8B
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return 1;
			break;
		
		case joaat("SABREGT2"):
			if (!Global_40001.f_370C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("TORNADO5"):
			if (!Global_40001.f_370D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("VIRGO2"):
			if (!Global_40001.f_370B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("MINIVAN2"):
			if (!Global_40001.f_370E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SLAMVAN3"):
			if (!Global_40001.f_3710)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("FACTION3"):
			if (!Global_40001.f_370F)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("COMET3"):
			if (Global_40001.f_486A)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("DIABLOUS2"):
			if (Global_40001.f_486C)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("FCR2"):
			if (Global_40001.f_4870)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ELEGY"):
			if (Global_40001.f_486D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("NERO2"):
			if (Global_40001.f_4874)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("ITALIGTB2"):
			if (Global_40001.f_4872)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SPECTER2"):
			if (Global_40001.f_4877)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("TECHNICAL3"):
			if (Global_40001.f_500D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("INSURGENT3"):
			if (Global_40001.f_500E)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0x1D201
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_150())
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x1D260
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_150())
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_260(int iParam0)//Position - 0x1D2C0
{
	if (iParam0 != func_150())
	{
		if (func_238(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_237(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, var uParam2)//Position - 0x1D307
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICEOLD1")) || iParam0 == joaat("POLICEOLD2")) || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICE4")) || iParam0 == joaat("FBI")) || iParam0 == joaat("FBI2")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("POLICEB")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("RIOT")) || iParam0 == joaat("SHERIFF")) || iParam0 == joaat("PRANGER")) || iParam0 == joaat("SHERIFF2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("AMBULANCE") || iParam0 == joaat("FIRETRUK")) || iParam0 == joaat("TAXI")) || iParam0 == joaat("LGUARD")) || iParam0 == joaat("RIPLEY")) || iParam0 == joaat("DILETTANTE2")) || iParam0 == joaat("AIRBUS")) || iParam0 == joaat("AIRTUG"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("BURRITO") || iParam0 == joaat("RUMPO2")) || iParam0 == joaat("SPEEDO")) || iParam0 == joaat("SPEEDO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("SCORCHER") || iParam0 == joaat("BMX")) || iParam0 == joaat("CRUISER")) || iParam0 == joaat("FIXTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("CADDY") || iParam0 == joaat("FORKLIFT")) || iParam0 == joaat("CADDY2")) || iParam0 == joaat("CRUSADER")) || iParam0 == joaat("TRIBIKE")) || iParam0 == joaat("TRIBIKE2")) || iParam0 == joaat("TRIBIKE3")) || iParam0 == joaat("TRACTOR")) || iParam0 == joaat("TRACTOR2")) || iParam0 == joaat("MOWER")) || iParam0 == joaat("TORNADO4")) || iParam0 == joaat("DOCKTUG")) || iParam0 == joaat("STRETCH")) || iParam0 == joaat("BISON2")) || iParam0 == joaat("BISON3")) || iParam0 == joaat("BENSON")) || iParam0 == joaat("POUNDER")) || iParam0 == joaat("SUBMERSIBLE")) || iParam0 == joaat("EMPEROR3")) || iParam0 == joaat("DUNE2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_242(CAM::_0xDC9DA9E8789F5246()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("BLAZER")) && iParam0 != joaat("BLAZER3")) && iParam0 != joaat("BLAZER4")) && iParam0 != joaat("BLAZER5")) && iParam0 != joaat("CHIMERA")) && iParam0 != joaat("TRAILERLARGE")) && iParam0 != joaat("TRAILERSMALL2")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("MONSTER"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("INSURGENT") || iParam0 == joaat("TECHNICAL")) || iParam0 == joaat("LIMO2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_262(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("INSURGENT") || iParam0 == joaat("INSURGENT2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_262(int iParam0)//Position - 0x1D71F
{
	switch (iParam0)
	{
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("FORKLIFT"):
			return 1;
			break;
	}
	return 0;
}

int func_263()//Position - 0x1D748
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (iVar0 == Global_11188.f_1E4[21])
			{
				return 21;
			}
			if (iVar0 == Global_11188.f_1E4[26])
			{
				return 26;
			}
			if (iVar0 == Global_11188.f_1E4[29])
			{
				return 29;
			}
			if (iVar0 == Global_11188.f_1E4[32])
			{
				return 32;
			}
			if (iVar0 == Global_11188.f_1E4[22])
			{
				return 22;
			}
			if (iVar0 == Global_11188.f_1E4[27])
			{
				return 27;
			}
			if (iVar0 == Global_11188.f_1E4[30])
			{
				return 30;
			}
			if (iVar0 == Global_11188.f_1E4[33])
			{
				return 33;
			}
			if (iVar0 == Global_11188.f_1E4[23])
			{
				return 23;
			}
			if (iVar0 == Global_11188.f_1E4[28])
			{
				return 28;
			}
			if (iVar0 == Global_11188.f_1E4[31])
			{
				return 31;
			}
			if (iVar0 == Global_11188.f_1E4[34])
			{
				return 34;
			}
		}
	}
	return 4294967295;
}

bool func_264()//Position - 0x1D879
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

void func_265(int iParam0)//Position - 0x1D88E
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) && iParam0 == Global_11511)
	{
		Global_19E56.f_7F5D.f_15D4 = 0;
		Global_11511 = 0;
	}
}

int func_266(int iParam0, struct<4> Param1, var uParam2, var uParam3, vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)//Position - 0x1D8C7
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { Param1 };
	vVar1 = { Param1.f_3 };
	vVar2 = { vParam4 };
	vVar3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		iLocal_178 = iVar4;
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_178, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_178, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_178, true, true, 0);
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::GIVE_PED_HELMET(iParam0, 0, 0, 4294967295);
			PED::SET_PED_HELMET(iParam0, 1);
		}
		vVar5 = { unk_0x8000C77B5F336760(iLocal_178, true) };
		fLocal_179 = (vVar5.z - vVar0.z);
		ENTITY::SET_ENTITY_COORDS(iLocal_178, vVar0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_178, 0))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_178, 3);
		}
		iLocal_180 = MISC::GET_GAME_TIMER();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_178, 0))
		{
			fVar6 = SYSTEM::TO_FLOAT(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_273(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_272(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_271(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_269(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178, func_267(vVar0 + Vector(fLocal_179, 0f, 0f), vVar2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
			if (iLocal_175 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, func_267((0f - vVar1.x), (0f - vVar1.y), (vVar1.z + 180f), (0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), fVar6, fVar7, fVar8), 2, 1);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (PED::IS_PED_ON_ANY_BIKE(iParam0))
					{
						PED::SET_PED_RESET_FLAG(iParam0, 236, true);
						PED::SET_PED_RESET_FLAG(iParam0, 309, true);
					}
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_178, func_267(vVar1, vVar3, fVar6, fVar7, fVar8), 2, 1);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, false, 0);
			unk_0x346478B12F69D4E3(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > (SYSTEM::TO_FLOAT(iLocal_180) + fParam5) && SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > ((SYSTEM::TO_FLOAT(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 236, false);
		PED::SET_PED_RESET_FLAG(iParam0, 309, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_178, Param6, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_178, Param6.f_3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178, 1084227584);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_178, true, 0);
			unk_0x346478B12F69D4E3(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::REMOVE_PED_HELMET(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_267(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4)//Position - 0x1DBBF
{
	return func_268(vParam0.x, vParam1.x, fParam2, fParam3, fParam4), func_268(vParam0.y, vParam1.y, fParam2, fParam3, fParam4), func_268(vParam0.z, vParam1.z, fParam2, fParam3, fParam4);
}

float func_268(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x1DBF9
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_269(float fParam0)//Position - 0x1DC15
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_270(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_270(float fParam0)//Position - 0x1DC51
{
	return (fParam0 * 57.29578f);
}

float func_271(float fParam0)//Position - 0x1DC61
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_270(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_272(float fParam0)//Position - 0x1DC9F
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_270((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_273(float fParam0, float fParam1, float fParam2)//Position - 0x1DCDD
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

void func_274()//Position - 0x1DD04
{
	Global_11188.f_229 = 1;
	Global_11188.f_22A = 0;
}

void func_275(var uParam0)//Position - 0x1DD1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_19E56.f_7F5D.f_45[iVar1 /*78*/].f_42;
		if (iLocal_49[iVar2] != 0)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_49[iVar2]);
				MISC::SET_BIT(&(uLocal_48[iVar2]), 2);
				func_471(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_276()//Position - 0x1DDAA
{
	return !Global_11188.f_229;
}

void func_277(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x1DDBA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_11188.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_11188.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_278(iVar0);
			}
		}
		iVar0++;
	}
}

void func_278(int iParam0)//Position - 0x1DE0A
{
	bool bVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_61(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_11188.f_8B[iParam0]));
			}
		}
		Global_11188[iParam0] = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_11515.f_42 == 0) && Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] != 0) && Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] > 3) && (!func_279(0, Global_11188.f_22B[0 /*21*/].f_C) || !func_279(1, Global_11188.f_22B[0 /*21*/].f_C)))
			{
				func_115(&(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]), &Global_11515);
				Global_11563 = Global_19E56.f_7F5D.f_15D7;
			}
			func_473(iParam0, 0);
		}
	}
}

int func_279(int iParam0, int iParam1)//Position - 0x1DF7C
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_280(&(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_280(var uParam0)//Position - 0x1DFEE
{
	return *uParam0;
}

void func_281(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x1DFF9
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[25]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[25], 0))
			{
				if (Global_11188.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_282(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x8000C77B5F336760(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_11564 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_114(iParam3, &Var0, vParam1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_282(int iParam0)//Position - 0x1E122
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_116(iParam0);
	func_473(iParam0, 0);
}

int func_283(var uParam0, int iParam1)//Position - 0x1E149
{
	int iVar0;
	
	if (!func_38(uParam0->f_42))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_11512))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_279(0, iParam1))
	{
		Global_19E56.f_7F5D.f_15D8[iVar0] = 0;
	}
	else if (!func_279(1, iParam1))
	{
		Global_19E56.f_7F5D.f_15D8[iVar0] = 1;
	}
	func_284(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_42));
	func_115(uParam0, &(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][Global_19E56.f_7F5D.f_15D8[iVar0] /*78*/]));
	Global_19E56.f_7F5D.f_15D8[iVar0]++;
	if (Global_19E56.f_7F5D.f_15D8[iVar0] >= func_280(&(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/])))
	{
		Global_19E56.f_7F5D.f_15D8[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_16A1D[iVar0 /*98*/] == uParam0->f_42 && MISC::ARE_STRINGS_EQUAL(&(Global_16A1D[iVar0 /*98*/].f_1B), &(uParam0->f_1)))
		{
			Global_16A1D[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_284(int iParam0, char* sParam1)//Position - 0x1E2A1
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_19E56.f_7F5D.f_15DC[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_285("IMPOUND_HELPM", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), 4294967295, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_285("IMPOUND_HELPF", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), 4294967295, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_285("IMPOUND_HELPT", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), 4294967295, 10000, 4, 0, 0, 0);
				break;
		}
		Global_19E56.f_7F5D.f_15DC[iParam0] = 1;
	}
}

void func_285(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1E350
{
	func_286(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_286(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E370
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_287();
	}
}

void func_287()//Position - 0x1E543
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_288(var uParam0, int iParam1)//Position - 0x1E663
{
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (!func_61(&(Global_11188.f_22B[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_115(&(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]), uParam0);
	}
	return 1;
}

int func_289(var uParam0, var uParam1, var uParam2)//Position - 0x1E6AE
{
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::DESTROY_CAM(*uParam2, 0);
	}
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::SET_CAM_COORD(*uParam1, *uParam0);
		CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, uParam0->f_C);
		CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
		CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
		CAM::SET_CAM_FOV(*uParam2, uParam0->f_C);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_D);
		CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_D);
		if (uParam0->f_E > 0.1f)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_E * 1000f)), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(*uParam1, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_290(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1E7B5
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_295(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_78())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_294(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_295(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_294(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_292(CAM::_0xDC9DA9E8789F5246())) && !func_92(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_291()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_292(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_291()//Position - 0x1E8DE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_292(int iParam0)//Position - 0x1E8FB
{
	if (func_92(iParam0, 0))
	{
		return 1;
	}
	if (func_293())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_293()//Position - 0x1E93D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_294(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1E94E
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_295(int iParam0)//Position - 0x1E981
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 13);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 13);
	}
}

int func_296(int iParam0)//Position - 0x1E9A4
{
	func_61(&(Global_11188.f_22B[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_11188.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(26))
			{
				return 26;
			}
			if (!func_297(29))
			{
				return 29;
			}
			if (!func_297(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_11188.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(27))
			{
				return 27;
			}
			if (!func_297(30))
			{
				return 30;
			}
			if (!func_297(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_11188.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_297(28))
			{
				return 28;
			}
			if (!func_297(31))
			{
				return 31;
			}
			if (!func_297(34))
			{
				return 34;
			}
			break;
	}
	return 4294967295;
}

bool func_297(int iParam0)//Position - 0x1EAA6
{
	return func_67(iParam0, 0);
}

void func_298(int iParam0, bool bParam1)//Position - 0x1EAB5
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_300(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iVar1)
			{
				func_228(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_299(iParam0))
			{
				func_228(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_299(int iParam0)//Position - 0x1EB40
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 != 4294967295 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7C97[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_300(int iParam0, int iParam1)//Position - 0x1EB74
{
	struct<5> Var0;
	
	Var0 = { func_301(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_301(int iParam0)//Position - 0x1EB99
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_302(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_302(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_302(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_302(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_302(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_302(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_302(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1004B2[34 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_302(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_302(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_302(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_302(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_302(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_302(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_302(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_302(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_302(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_302(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_302(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_302(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_302(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_302(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_302(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_302(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_302(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_302(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_302(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_302(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_302(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_302(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_302(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_302(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_302(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_302(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_302(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_302(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_302(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_302(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_302(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_302(int iParam0, bool bParam1)//Position - 0x20EE5
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 4294967295:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_303(int iParam0, bool bParam1)//Position - 0x21A9B
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_300(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == iVar1)
			{
				func_230(iParam0, 1);
				return;
			}
			INTERIOR::CAP_INTERIOR(iVar1, 1);
		}
		else if (!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (func_304(iParam0))
			{
				func_230(iParam0, 0);
			}
			INTERIOR::CAP_INTERIOR(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_304(iParam0))
			{
				func_230(iParam0, 0);
			}
		}
	}
}

int func_304(int iParam0)//Position - 0x21B41
{
	struct<2> Var0;
	
	Var0 = { func_229(iParam0) };
	if (Var0.f_1 != 4294967295 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7C90[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_305()//Position - 0x21B75
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) || func_296(Local_56) != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_306(float fParam0, float fParam1, float fParam2)//Position - 0x21B9E
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)//Position - 0x21C13
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_308(int iParam0, var uParam1)//Position - 0x21C81
{
	uParam1->f_49[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_49[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_C = 25.2218f;
	(uParam1[2 /*15*/])->f_D = 0.2f;
	(uParam1[2 /*15*/])->f_E = 3.5f;
	uParam1->f_3D[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_C = 25.1687f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_49[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_C = 29.9579f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 3f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_56[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_C = 30.0324f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 3f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_42[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_49[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_49[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_C = 25.1856f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_49[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_C = 29.9864f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 3f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_56[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_C = 28.4803f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 4f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_42[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_49[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_49[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_C = 40.0015f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_49[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_C = 30.0319f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 4f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_C = 30f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 3f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_42[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_49[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_49[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_309()//Position - 0x22472
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

void func_310()//Position - 0x2248E
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_10B8E)
	{
		if (Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] != 4294967281)
		{
			if (!Global_11188[Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]])
			{
				if (func_362(func_50(), Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143]))
				{
					iVar0 = Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/][iLocal_143];
					func_360(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_473(Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143], 1);
					}
					Global_19E56.f_7F5D.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] = 4294967281;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != 4294967295)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
		Local_56.f_7 = ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330());
		Local_56.f_5 = 4294967295;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
				CAM::DESTROY_CAM(Local_56.f_6E, 0);
			}
			if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
			{
				CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
				CAM::DESTROY_CAM(Local_56.f_6F, 0);
			}
			ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
			unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
			}
			iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar2, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, true, 0);
				unk_0x346478B12F69D4E3(iVar2, false);
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = MISC::GET_GAME_TIMER();
			while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar4) < iVar3)
			{
				SYSTEM::WAIT(0);
			}
			if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
			{
				INTERIOR::UNPIN_INTERIOR(Local_56.f_70);
			}
			StringCopy(&Global_8047, "", 32);
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				func_303(47, 1);
				func_298(47, 1);
			}
			BRAIN::ENABLE_SCRIPT_BRAIN_SET();
			HUD::SET_MULTIPLAYER_BANK_CASH();
			unk_0x59B038076F830627(true);
			HUD::DISPLAY_RADAR(true);
			func_290(0, 1, 1, 0, 0);
			bLocal_142 = false;
			Global_6471 = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) && !Local_56.f_1D.f_45)) || (!PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))) || (!bLocal_142 && func_67(Local_56, 5))) || (!bLocal_142 && PAD::IS_CONTROL_JUST_PRESSED(2, 199))) || (!bLocal_142 && HUD::IS_PAUSE_MENU_ACTIVE())) || !func_358(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || PED::IS_PED_CLIMBING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_ON_VEHICLE(AUDIO::_0x0626A247D2405330())) || Global_6409) || (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && PED::IS_PED_BEING_JACKED(AUDIO::_0x0626A247D2405330())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56 != 4294967295 && func_67(Local_56, 0)) && !func_67(Local_56, 5)) && !bLocal_158) && !bVar5)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_01", 16);
					func_217(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_212(Local_56.f_5, 1))
			{
				if (func_357(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_02", 16);
				func_217(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_212(Local_56.f_5, 1))
			{
				if (func_357(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 90;
				}
				else
				{
					unk_0x1190AB7024CBD8CB(4294967295, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56 == 15 || Local_56 == 17) || Local_56 == 16)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if (Local_56 == 18 || Local_56 == 19)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					else if (Local_56 == 12 || Local_56 == 13)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_57.f_4 = 117;
						bLocal_142 = true;
					}
					Local_57 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_6471 = 1;
					if (bLocal_142)
					{
						if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
						{
							func_303(47, 0);
							func_298(47, 0);
							Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
							{
								if (!INTERIOR::IS_INTERIOR_READY(Local_56.f_70))
								{
									INTERIOR::_LOAD_INTERIOR(Local_56.f_70);
								}
								StringCopy(&Global_8047, "v_garagem_sp", 32);
							}
						}
						PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 1);
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				Local_56.f_70 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!INTERIOR::IS_VALID_INTERIOR(Local_56.f_70) || INTERIOR::IS_INTERIOR_CAPPED(Local_56.f_70)) || INTERIOR::IS_INTERIOR_DISABLED(Local_56.f_70))
				{
					func_303(47, 0);
					func_298(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = MISC::GET_GAME_TIMER();
						Local_56.f_2 = 5;
					}
				}
				else if (STREAMING::NEW_LOAD_SCENE_START(Local_56.f_1D.f_E, vVar9, fVar7, iVar8) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = MISC::GET_GAME_TIMER();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_56.f_70) || INTERIOR::IS_INTERIOR_READY(Local_56.f_70))) || (MISC::GET_GAME_TIMER() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_168, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_168);
				}
				iLocal_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_168) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_168, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_168))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_168)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_168))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_168, false, 0);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), false, 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
				}
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 16);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 32);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 128);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
				}
				func_290(1, 1, 1, 0, 0);
				HUD::CLEAR_PRINTS();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_1D.f_45)
				{
					STREAMING::_SET_FOCUS_AREA(Local_56.f_1D.f_E, vVar9);
				}
				if (!CAM::DOES_CAM_EXIST(Local_56.f_6E))
				{
					Local_56.f_6E = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_290(1, 1, 1, 0, 0);
					func_289(&(Local_56.f_1D.f_E), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				unk_0x59B038076F830627(false);
				HUD::DISPLAY_RADAR(false);
				BRAIN::ENABLE_SCRIPT_BRAIN_SET();
				Local_56.f_2 = 7;
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !func_355(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_05", 16);
				func_215(&Var6, 4294967295);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (Local_56 == 12 || Local_56 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					vVar9 = { SYSTEM::COS((Local_56.f_1D.f_1D.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_1D.f_2 + 90f)), 0f };
					STREAMING::NEW_LOAD_SCENE_START(Local_56.f_1D.f_1D, vVar9, fVar7, iVar8);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_290(1, 1, 1, 0, 0);
					func_289(&(Local_56.f_1D.f_1D), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				HUD::SET_MULTIPLAYER_BANK_CASH();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 7000 && !func_355(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_215(&Var6, 7000);
				}
			}
			else
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				Local_56.f_4 = MISC::GET_GAME_TIMER();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 3500 && !func_355(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_03", 16);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_90(&Var6);
						GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000 && !func_355(1000))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57))
				{
					if (Local_57.f_2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_57, "SHARD_ANIM_OUT");
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.33f);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
						CAM::DESTROY_CAM(Local_56.f_6E, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
					{
						CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
						CAM::DESTROY_CAM(Local_56.f_6F, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					iVar11 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar11) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar11, 0)) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar11, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar11, Local_56.f_1D.f_2C, 1, true, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar11, Local_56.f_1D.f_2F);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar11, 1084227584);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_2C, 1, true, 0, 1);
							ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), Local_56.f_1D.f_2F);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_168) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_168, 0))
					{
						iVar12 = func_49(24);
						if (func_288(&Local_141, 24))
						{
							func_283(&Local_141, func_467());
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								VEHICLE::DELETE_VEHICLE(&iVar12);
							}
						}
						if (Local_56 == 21)
						{
							MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 154.4846f);
							func_281(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56 == 22)
						{
							MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 319.6985f);
							func_281(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56 == 23)
						{
							MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_168, 270.8741f);
							func_281(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168, 1084227584);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar11) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar11, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar11, true, 0);
						unk_0x346478B12F69D4E3(iVar11, false);
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar11, 1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = MISC::GET_GAME_TIMER();
					while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar14) < iVar13)
					{
						SYSTEM::WAIT(0);
					}
					if (INTERIOR::IS_VALID_INTERIOR(Local_56.f_70))
					{
						INTERIOR::UNPIN_INTERIOR(Local_56.f_70);
					}
					StringCopy(&Global_8047, "", 32);
					if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						func_303(47, 1);
						func_298(47, 1);
						Global_19E56.f_7F5D.f_12C0 = 1;
					}
					BRAIN::ENABLE_SCRIPT_BRAIN_SET();
					HUD::SET_MULTIPLAYER_BANK_CASH();
					unk_0x59B038076F830627(true);
					HUD::DISPLAY_RADAR(true);
					func_290(0, 1, 1, 0, 0);
					bLocal_142 = false;
					Global_6471 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_57))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_57);
				}
				func_327(iLocal_129, Local_57.f_4, Local_56.f_1D.f_43);
				func_326(Local_56, 5, 1);
				func_313(Local_56);
				if (HUD::DOES_BLIP_EXIST(Global_11188.f_D0[Local_56]))
				{
					HUD::REMOVE_BLIP(&(Global_11188.f_D0[Local_56]));
				}
				iLocal_151 = Local_56;
				func_312();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((MISC::GET_GAME_TIMER() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_04", 16);
					func_311(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_311(char* sParam0)//Position - 0x23671
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_312()//Position - 0x23687
{
	if (func_225(0))
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

void func_313(int iParam0)//Position - 0x236D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_325(iVar0, 0);
	iVar2 = func_324(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_323(iVar0);
		if (func_321(iVar0, iVar1, 1))
		{
			func_314(iVar0);
			func_323(iVar0);
		}
	}
}

void func_314(int iParam0)//Position - 0x237D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_B5F8[iVar0 /*203*/].f_9 - 1);
	if (!Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_319(Global_91A4[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_315(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_91A4[iVar1 /*12*/].f_3)
		{
			case 0:
				func_315(0, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_315(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_315(2, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_315(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x23B49
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_467();
	bVar1 = false;
	StringCopy(&cVar2, func_318(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_316(HUD::_SET_NOTIFICATION_MESSAGE(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_317(iParam1)), 0));
		}
		else
		{
			func_316(HUD::_SET_NOTIFICATION_MESSAGE("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_317(iParam1)), 0));
		}
		switch (Global_38B1)
		{
			case 0:
				StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
				Global_919C++;
				if (Global_919C > 16)
				{
					Global_919C = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
				Global_919E++;
				if (Global_919E > 16)
				{
					Global_919E = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
				Global_919D++;
				if (Global_919D > 16)
				{
					Global_919D = 16;
				}
				break;
			
			default:
				StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x1190AB7024CBD8CB(4294967295, "Notification", &Global_38A6, true);
	}
}

void func_316(int iParam0)//Position - 0x23D31
{
	Global_919F[Global_91A3] = iParam0;
	Global_41F0 = 1;
	Global_41EF = iParam0;
	Global_91A3++;
	if (Global_91A3 == 3)
	{
		Global_91A3 = 0;
	}
}

char* func_317(int iParam0)//Position - 0x23D5F
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_318(int iParam0, int iParam1)//Position - 0x240CC
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT("CELL_E_381");
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_319(int iParam0)//Position - 0x2451F
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 4294967295)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_320(int iParam0)//Position - 0x24550
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_B5F8[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_B5F8[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_B5F8[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 4294967295 && iVar2 != 4294967295)
	{
		return iVar1;
	}
	return 4294967295;
}

int func_321(int iParam0, int iParam1, bool bParam2)//Position - 0x245B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_325(iParam0, 1);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_B5F8[iVar0 /*203*/].f_2 = iParam0;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_B5F8[iVar0 /*203*/].f_A[Global_B5F8[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_B5F8[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = 4294967295;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 4294967295)
		{
			if (Global_B5F8[iVar0 /*203*/].f_4[iVar1] == Global_91A4[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B5F8[iVar0 /*203*/].f_4[Global_B5F8[iVar0 /*203*/].f_3] = Global_91A4[iParam1 /*12*/].f_3;
			Global_B5F8[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = 4294967295;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 4294967295)
		{
			if (Global_B5F8[iVar0 /*203*/].f_4[iVar1] == Global_91A4[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B5F8[iVar0 /*203*/].f_4[Global_B5F8[iVar0 /*203*/].f_3] = Global_91A4[iParam1 /*12*/].f_2;
			Global_B5F8[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_B5F8[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_B5F8[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_322(Global_B5F8[iVar0 /*203*/].f_4[iVar1], Global_B5F8[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_322(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x247B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = 4294967295;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_9EA1[iParam1 /*46*/].f_2A - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_9EA1[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_319(Global_91A4[iVar5 /*12*/].f_1) };
		if (Global_91A4[iVar5 /*12*/].f_2 == iParam0 && !Global_91A4[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_91A4[iVar5 /*12*/].f_2;
		iVar0 = Global_B48E[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_B48E[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_919C = (Global_919C - 1);
						if (Global_919C < 0)
						{
							Global_919C = 0;
						}
						break;
					
					case 1:
						Global_919D = (Global_919D - 1);
						if (Global_919D < 0)
						{
							Global_919D = 0;
						}
						break;
					
					case 2:
						Global_919E = (Global_919E - 1);
						if (Global_919E < 0)
						{
							Global_919E = 0;
						}
						break;
					}
				}
		}
		Global_B48E[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_B48E[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_B48E[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_56[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B48E[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_B48E[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_B48E[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_919C = (Global_919C - 1);
						if (Global_919C < 0)
						{
							Global_919C = 0;
						}
						break;
					
					case 1:
						Global_919D = (Global_919D - 1);
						if (Global_919D < 0)
						{
							Global_919D = 0;
						}
						break;
					
					case 2:
						Global_919E = (Global_919E - 1);
						if (Global_919E < 0)
						{
							Global_919E = 0;
						}
						break;
					}
				}
		}
		iVar8 = 4294967295;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_B5F8[iVar9 /*203*/].f_1 == iParam1 && Global_B5F8[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 4294967295)
		{
			return;
		}
		Global_B48E[iParam0 /*120*/].f_12[iVar0] = Global_B5F8[iVar8 /*203*/].f_1;
		Global_B48E[iParam0 /*120*/].f_1[iVar0] = (Global_B5F8[iVar8 /*203*/].f_9 - 1);
		Global_B48E[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B48E[iParam0 /*120*/].f_56[iVar0] = 1;
		Global_B48E[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B48E[iParam0 /*120*/]++;
		iVar10 = Global_B48E[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_B5F8[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_91A4[iVar11 /*12*/].f_2;
		if (Global_B5F8[iVar8 /*203*/].f_A[(Global_B5F8[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_B5F8[iVar8 /*203*/].f_A[(Global_B5F8[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_319(Global_91A4[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B48E[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_315(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_315(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_315(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_315(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_323(int iParam0)//Position - 0x24B85
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_617E, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_320(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_B5F8[iVar0 /*203*/] = 0;
}

int func_324(int iParam0, int iParam1, int iParam2)//Position - 0x24BC2
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_BB86 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B5F8[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_B5F8[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_B5F8[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_BB87[iVar1 /*53*/].f_34 == 0)
		{
			Global_BB87[iVar1 /*53*/].f_34 = iVar0;
			Global_BB87[iVar1 /*53*/] = iParam0;
			Global_BB87[iVar1 /*53*/].f_1 = iParam1;
			Global_BB87[iVar1 /*53*/].f_2 = iParam2;
			Global_19E56.f_5211.f_136++;
			if (Global_19E56.f_5211.f_136 == 0)
			{
				Global_19E56.f_5211.f_136 = 1;
			}
			Global_BB87[iVar1 /*53*/].f_A = 0;
			Global_BB87[iVar1 /*53*/].f_3 = Global_19E56.f_5211.f_136;
			Global_BB87[iVar1 /*53*/].f_4 = 1;
			Global_BB86++;
			return Global_BB87[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_325(int iParam0, bool bParam1)//Position - 0x24CDD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_320(iParam0);
	if (iVar0 > 4294967295)
	{
		if (Global_B5F8[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B5F8[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 4294967295;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = 4294967295;
	iVar5 = 4294967295;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B5F8[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_B5F8[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_B5F8[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_B5F8[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_B5F8[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_B5F8[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_B48E[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_B48E[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_B48E[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_B48E[iVar6 /*120*/].f_12[iVar8] == Global_B5F8[iVar4 /*203*/].f_1)
							{
								if (Global_B48E[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_919C = (Global_919C - 1);
											break;
										
										case 1:
											Global_919D = (Global_919D - 1);
											break;
										
										case 2:
											Global_919E = (Global_919E - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_B5F8[iVar4 /*203*/].f_2 = iParam0;
	Global_B5F8[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_B5F8[iVar4 /*203*/] = 1;
	}
	Global_19E56.f_5211.f_136++;
	if (Global_19E56.f_5211.f_136 == 0)
	{
		Global_19E56.f_5211.f_136 = 1;
	}
	Global_B5F8[iVar4 /*203*/].f_1 = Global_19E56.f_5211.f_136;
	Global_B5F8[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_326(int iParam0, int iParam1, bool bParam2)//Position - 0x24EF5
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

int func_327(int iParam0, int iParam1, int iParam2)//Position - 0x24F30
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_328(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x24F79
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_354();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_353(99, 1);
					func_352(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_352(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_352(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_337(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_336(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_352(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_352(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_352(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_336(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_352(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_352(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_352(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_352(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_352(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_352(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_352(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_352(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_352(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_352(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_352(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_352(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_352(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_352(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_352(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_336(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_352(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_352(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_352(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_352(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_352(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_352(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_335(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_353(95, iParam3);
					break;
				
				case 1:
					func_353(97, iParam3);
					break;
				
				case 2:
					func_353(96, iParam3);
					break;
			}
			func_353(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_331(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_331(iVar1);
	}
	iVar5 = (Global_D06B[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_D06B[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_D06B[iVar2] = 2147483647;
				}
				else
				{
					Global_D06B[iVar2] = (Global_D06B[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_352(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_352(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_352(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_D06B[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_D06B[iVar2];
			Global_D06B[iVar2] = (Global_D06B[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/]++;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_330(iParam0);
	if (Global_8D15 == 15)
	{
		func_329(0);
	}
	return 1;
}

void func_329(bool bParam0)//Position - 0x25578
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_D073[iVar0 /*3*/][0] = Global_19E56.f_5038[iVar0];
		Global_D073.f_1F[iVar0 /*3*/][0] = Global_19E56.f_5038.f_B[iVar0];
		Global_D073.f_3E[iVar0 /*3*/][0] = Global_19E56.f_5038.f_16[iVar0];
		Global_D073.f_5D[iVar0 /*3*/][0] = Global_19E56.f_5038.f_21[iVar0];
		Global_D073.f_7C[iVar0 /*3*/][0] = Global_19E56.f_5038.f_2C[iVar0];
		Global_D073.f_9B[iVar0 /*3*/][0] = Global_19E56.f_5038.f_37[iVar0];
		Global_D073.f_BA[iVar0 /*3*/][0] = Global_19E56.f_5038.f_42[iVar0];
		Global_D073.f_D9[iVar0 /*3*/][0] = Global_19E56.f_5038.f_4D[iVar0];
		Global_D073.f_F8[iVar0 /*3*/][0] = Global_19E56.f_5038.f_58[iVar0];
		if (!bParam0)
		{
			Global_D073[iVar0 /*3*/][1] = Global_19E56.f_5038[iVar0];
			Global_D073.f_1F[iVar0 /*3*/][1] = Global_19E56.f_5038.f_B[iVar0];
			Global_D073.f_3E[iVar0 /*3*/][1] = Global_19E56.f_5038.f_16[iVar0];
			Global_D073.f_5D[iVar0 /*3*/][1] = Global_19E56.f_5038.f_21[iVar0];
			Global_D073.f_7C[iVar0 /*3*/][1] = Global_19E56.f_5038.f_2C[iVar0];
			Global_D073.f_9B[iVar0 /*3*/][1] = Global_19E56.f_5038.f_37[iVar0];
			Global_D073.f_BA[iVar0 /*3*/][1] = Global_19E56.f_5038.f_42[iVar0];
			Global_D073.f_D9[iVar0 /*3*/][1] = Global_19E56.f_5038.f_4D[iVar0];
			Global_D073.f_F8[iVar0 /*3*/][1] = Global_19E56.f_5038.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_330(int iParam0)//Position - 0x257FA
{
	int iVar0;
	
	iVar0 = Global_D06B[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_331(int iParam0)//Position - 0x25854
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_334(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_334(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_334(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_334(137, 0, 4294967295, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0))
		{
			bVar0 = true;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_333() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_333() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_332(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_332(int iParam0)//Position - 0x25966
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_333()//Position - 0x25A14
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_334(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x25A21
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_335(int iParam0)//Position - 0x25F89
{
	func_353(93, iParam0);
	func_353(29, iParam0);
	func_353(30, iParam0);
}

bool func_336(int iParam0)//Position - 0x25FA9
{
	if (iParam0 == 8)
	{
		return func_165(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_165(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_165(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_165(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_333() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_337(bool bParam0)//Position - 0x2602D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_351(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_338(27, 1);
	return 1;
}

int func_338(int iParam0, int iParam1)//Position - 0x260E4
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_339(iParam0, iParam1);
}

int func_339(int iParam0, int iParam1)//Position - 0x260FF
{
	if (func_27(14) && !func_350(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_646A != 0 && !Global_11625)
	{
		return 0;
	}
	if (func_349(&Global_412216))
	{
		if (func_347(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_340(&Global_412216, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_340(var uParam0, int iParam1)//Position - 0x2619C
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_350(iParam1))
	{
		return 0;
	}
	if (func_347(uParam0, iParam1))
	{
		return 0;
	}
	if (func_346(uParam0) < 0f)
	{
		func_345(uParam0, 0);
	}
	func_343(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_341(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_341(var uParam0, int iParam1)//Position - 0x2624D
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_350(iParam1))
	{
		return 0;
	}
	if (func_347(uParam0, iParam1))
	{
		return 0;
	}
	if (func_346(uParam0) < 0f)
	{
		func_345(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_342(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_342(var uParam0, int iParam1)//Position - 0x262C8
{
	return (*uParam0)[iParam1] == 78;
}

void func_343(var uParam0)//Position - 0x262D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_344(uParam0, iVar0);
		iVar0++;
	}
	func_345(uParam0, (Global_412215 - 0.5f));
}

void func_344(var uParam0, int iParam1)//Position - 0x2630D
{
	(*uParam0)[iParam1] = 78;
}

void func_345(var uParam0, float fParam1)//Position - 0x2631D
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_346(var uParam0)//Position - 0x2633A
{
	return uParam0->f_50;
}

bool func_347(var uParam0, int iParam1)//Position - 0x26346
{
	return func_348(uParam0, iParam1) != 4294967295;
}

int func_348(var uParam0, int iParam1)//Position - 0x26358
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_349(var uParam0)//Position - 0x26385
{
	return uParam0->f_4F == 1;
}

int func_350(int iParam0)//Position - 0x26393
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_351(int iParam0, int iParam1)//Position - 0x263E3
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

void func_352(int iParam0, int iParam1)//Position - 0x26434
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_353(int iParam0, int iParam1)//Position - 0x26457
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_CAD3[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_CAD3[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_354()//Position - 0x264B4
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[0] == iVar0)
		{
			Global_D06B[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[1] == iVar0)
		{
			Global_D06B[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[2] == iVar0)
		{
			Global_D06B[2] = iVar0;
		}
	}
}

int func_355(int iParam0)//Position - 0x26529
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_1C) > iParam0)
		{
			Global_1B = MISC::GET_GAME_TIMER();
		}
		Global_1C = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_1B) > iParam0)
		{
			if (func_356())
			{
				Global_1B = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_356()//Position - 0x26573
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x265A5
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

bool func_358(int iParam0)//Position - 0x265FD
{
	return func_359(iParam0, Global_8D15);
}

int func_359(int iParam0, int iParam1)//Position - 0x2660E
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

void func_360(int iParam0, int iParam1, int iParam2)//Position - 0x267EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_467();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_130(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_321(iVar0, iVar1, 1))
	{
		func_361(iVar0, sVar3);
		func_314(iVar0);
		func_323(iVar0);
	}
}

void func_361(int iParam0, char* sParam1)//Position - 0x269F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_362(int iParam0, int iParam1)//Position - 0x26AAE
{
	int iVar0;
	int iVar1;
	
	if (!func_367(iParam1) || !func_367(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_364(iParam0);
	iVar1 = func_364(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	iVar1 = func_363(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x26BBA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_364(int iParam0)//Position - 0x26BCD
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_365(int iParam0)//Position - 0x26BE0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_366(int iParam0)//Position - 0x26BF3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_367(int iParam0)//Position - 0x26C05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 4294967281)
	{
		return 0;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_364(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_365(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_366(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_368()//Position - 0x26CE1
{
	int iVar0;
	var uVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	int iVar21;
	
	iVar0 = 0;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (Global_19E56.f_7F5D.f_15D4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_11511))
			{
				func_283(&(Global_19E56.f_7F5D.f_1586), Global_19E56.f_7F5D.f_15D6);
				Global_19E56.f_7F5D.f_15D4 = 0;
			}
			else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11511, 0) || func_47(Global_11511, Global_19E56.f_7F5D.f_15D6, 1))
			{
				Global_19E56.f_7F5D.f_15D4 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0) == Global_11511) && func_395(AUDIO::_0x0626A247D2405330()) != Global_19E56.f_7F5D.f_15D6)
				{
					Global_19E56.f_7F5D.f_15D6 = func_395(AUDIO::_0x0626A247D2405330());
				}
				if (Global_11511 != iLocal_128)
				{
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(Global_11511, &uVar1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						if (MISC::GET_HASH_KEY(sVar2) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
						{
							Global_19E56.f_7F5D.f_15D4 = 0;
							iLocal_169 = Global_11511;
							if (Global_11188.f_8B[24] == Global_11511 || (Global_11512 == Global_11511 && Global_11513 == 24))
							{
								func_394(458, 24, 4294967295, 1);
							}
							else
							{
								func_394(458, 0, 4294967295, 1);
							}
							Global_11511 = 0;
						}
					}
				}
				if (((Global_19E56.f_7F5D.f_15D6 != func_467() && Global_16A1D[Global_19E56.f_7F5D.f_15D6 /*98*/] == Global_19E56.f_7F5D.f_1586.f_42) && MISC::ARE_STRINGS_EQUAL(&(Global_16A1D[Global_19E56.f_7F5D.f_15D6 /*98*/].f_1B), &(Global_19E56.f_7F5D.f_1586.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_115(&(Global_19E56.f_7F5D.f_1586), &(Global_19E56.f_7F5D.f_15E0[Global_19E56.f_7F5D.f_15D6 /*78*/]));
					Global_19E56.f_7F5D.f_15D4 = 0;
					iLocal_169 = 0;
					func_394(458, 0, 4294967295, 1);
					Global_11511 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_11511) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11511, 0)) && !func_47(Global_11511, Global_19E56.f_7F5D.f_15D6, 1))
		{
			Global_19E56.f_7F5D.f_15D4 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_169, 0))
		{
			if (((!Global_19E56.f_7F5D.f_15D4 && iLocal_169 != Global_11511) && iLocal_169 != iLocal_170) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_169, 1))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_394(458, 0, 4294967295, 1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_394(458, 0, 4294967295, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_170, 0))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_11515.f_42 != 0 && Global_11512 == 0)
	{
		func_283(&Global_11515, Global_11563);
		Global_11515.f_42 = 0;
	}
	vVar3 = { 433.6721f, -1006.538f, 25.96351f };
	vVar4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vVar3, vVar4, fVar5, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_393(iLocal_129))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
			{
				iLocal_145 = func_391(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(iLocal_145, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145, "IMPOUND_BLIPNAME");
				HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			HUD::REMOVE_BLIP(&iLocal_145);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_145))
	{
		HUD::REMOVE_BLIP(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					if (func_393(iLocal_129))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vVar3, vVar4, fVar5, 0, true, 0))
						{
							if (func_357(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_279(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_217(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_217(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_215("SCLUB_NO_MONEY", 4294967295);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && func_213(0, 4294967295, 0))
			{
				if (func_212(iLocal_125, 1))
				{
					func_69(&iLocal_125);
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					func_390();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_279(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						iLocal_121 = 4294967295;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_279(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									vVar11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									vVar11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_374(&iLocal_128, iVar10, vVar11, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_373(18, 1, 0);
									}
									else
									{
										func_373(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
									{
										PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
									}
									func_327(iLocal_129, 119, 250);
									func_372(iVar10);
									func_31(iLocal_128, func_467());
									func_71(1, 4294967295);
									iLocal_124 = 3;
									func_69(&iLocal_125);
									iLocal_125 = 4294967295;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_467())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_390();
			if (!iLocal_116 || iLocal_117)
			{
				func_210(0, 0);
				func_209(1, 1, 0, 0, 0);
				func_208(1, 2, 1, 1, 1);
				func_207("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = 4294967295;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_279(iVar14, iLocal_129))
					{
						func_133(iVar15, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_19E56.f_7F5D.f_13AE[iVar12 /*157*/][iVar14 /*78*/].f_42), 0, 1, 0, 0);
						if (iVar13 == 4294967295)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						MISC::SET_BIT(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_133(iVar15, "IMPOUND_COST", 1, 1, 0, 0);
						func_371(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_126(iLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_123(0, 0, 0, 1);
						func_122(0, 4294967295, 1);
						if (func_121())
						{
							if (Global_411C36 != iLocal_121)
							{
								unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_121 = Global_411C36;
								func_126(iLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar16 = (iLocal_121 - 1);
						while (iVar16 >= 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = true;
								iVar16 = 0;
							}
							iVar16 = (iVar16 + 4294967295);
						}
						if (!bVar17)
						{
							iVar16 = 31;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = true;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + 4294967295);
							}
						}
						if (bVar17)
						{
							func_126(iLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 31)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = true;
								iVar18 = 31;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0;
							while (iVar18 <= (iLocal_121 - 1))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = true;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_126(iLocal_121, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_120("IMPOUND_CNF", 0, 0);
						func_119(4294967295);
						func_118(201, "ITEM_YES", 4294967295);
						func_118(202, "ITEM_NO", 4294967295);
						iLocal_118 = 1;
					}
					else
					{
						if (iLocal_121 == 0)
						{
							vVar20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							vVar20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_279(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_374(&iLocal_128, iLocal_123[iLocal_121], vVar20, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
							{
								if (iLocal_121 == 0)
								{
									func_373(18, 1, 0);
								}
								else
								{
									func_373(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
								{
									PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
								}
								func_327(iLocal_129, 119, 250);
								func_372(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_467());
								func_71(1, 4294967295);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = 4294967295;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_119)
			{
				func_120("", 0, 0);
				func_119(4294967295);
				func_118(201, "ITEM_SELECT", 4294967295);
				func_118(202, "ITEM_EXIT", 4294967295);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_213(0, 4294967295, 0))
			{
				func_74(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_370())
			{
				func_31(iLocal_128, func_467());
				iLocal_124 = 99;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_128, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_128, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(iLocal_128, true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), true) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_128))
							{
								func_369(iLocal_128, 1, 145);
								VEHICLE::DELETE_VEHICLE(&iLocal_128);
								MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_128, 0))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(iLocal_128, func_467());
							iLocal_124 = 99;
						}
					}
					else
					{
						MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			}
			func_69(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = 4294967295;
				iVar21++;
			}
			func_373(18, 0, 0);
			func_373(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!iLocal_127)
			{
				func_373(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_373(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_369(int iParam0, int iParam1, int iParam2)//Position - 0x27AD3
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_370()//Position - 0x27B13
{
	if (MISC::IS_POSITION_OCCUPIED(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_371(int iParam0, bool bParam1)//Position - 0x27BBD
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43D7.f_1464 >= 256)
	{
		return;
	}
	if (Global_43D7.f_166A >= 4)
	{
		return;
	}
	if (Global_43D7.f_166B != 1)
	{
		return;
	}
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		return;
	}
	Global_43D7.f_F4E[Global_43D7.f_1464] = iParam0;
	Global_43D7.f_1464++;
	Global_43D7.f_84C[Global_43D7.f_1669 /*5*/][Global_43D7.f_166A] = 2;
	Global_43D7.f_166A++;
	if (Global_43D7.f_166A >= Global_43D7.f_1668)
	{
		fVar0 = func_129();
		if (Global_43D7.f_13D1[Global_43D7.f_1461] && Global_43D7.f_166A == Global_43D7.f_1668)
		{
			func_108(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)])
		{
			Global_43D7.f_13CA[(Global_43D7.f_1461 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43D7.f_166A >= Global_43D7.f_1668)
		{
			fVar3 = func_128();
			if (fVar3 > Global_43D7.f_166C[Global_43D7.f_1460])
			{
				Global_43D7.f_166C[Global_43D7.f_1460] = fVar3;
			}
		}
	}
}

void func_372(int iParam0)//Position - 0x27CF8
{
	int iVar0;
	
	switch (func_467())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_280(&(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/])))
	{
		return;
	}
	Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42 = 0;
}

void func_373(int iParam0, bool bParam1, bool bParam2)//Position - 0x27D67
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_89A8[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_89A8[iParam0 /*31*/].f_1, 1))
			{
				Global_89A8[iParam0 /*31*/].f_16 = -1f;
			}
			else
			{
				Global_89A8[iParam0 /*31*/].f_16 = 1f;
			}
			OBJECT::_SET_DOOR_AJAR_ANGLE(Global_89A8[iParam0 /*31*/], Global_89A8[iParam0 /*31*/].f_16, 0, 0);
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_89A8[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_89A8[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_89A8[iParam0 /*31*/].f_16 = 0f;
			OBJECT::_SET_DOOR_AJAR_ANGLE(Global_89A8[iParam0 /*31*/], Global_89A8[iParam0 /*31*/].f_16, 0, 0);
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Global_89A8[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_374(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x27E17
{
	int iVar0;
	
	if (!func_279(iParam1, func_467()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (func_467())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	STREAMING::REQUEST_MODEL(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
	if (STREAMING::HAS_MODEL_LOADED(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42, vParam2, fParam3, false, false, false);
		func_375(*iParam0, &(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
		VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (bParam4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
		}
		return 1;
	}
	return 0;
}

void func_375(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x27F1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (!func_383(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_42 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_33(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("SANDKING") || uParam1->f_42 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_33(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_33((iVar1 + 1)));
			}
		}
		if (uParam1->f_42 == joaat("NIGHTSHARK"))
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != 4294967295)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 15) || func_382(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_381())
		{
			uParam1->f_3E = 0;
			uParam1->f_3F = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_3E = 255;
			uParam1->f_3F = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 4294967295 && !func_35(uParam1->f_42))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 4294967295 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						func_380(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_380(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_376(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, func_33(iVar2 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar2 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("OMNIS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("LE7B"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == 4294967295)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42) && unk_0x86AFA41F8E0E6D36(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("AVENGER"))) && !((((Global_440000.f_CFE4 == 6 || Global_440000.f_CFE4 == 7) || Global_440000.f_CFE4 == 18) || Global_440000.f_CFE4 == 19) && Global_440000.f_2 == 20))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 23))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4D, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_376(int iParam0, var uParam1, var uParam2)//Position - 0x2846B
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_257(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_379(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_379(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_378(iParam0);
	if (func_377(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_377(int iParam0)//Position - 0x2862E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != 4294967295)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_378(var uParam0)//Position - 0x2870A
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_379(int iParam0, int iParam1)//Position - 0x2874A
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("FACTION3"):
				return 3;
				break;
		}
		iVar0 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0, 38);
		iVar1 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_380(int iParam0, int iParam1)//Position - 0x2882F
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TORNADO6"))
		{
			return;
		}
		if (iVar0 == 4294967295)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_381()//Position - 0x28894
{
	return DLC::IS_DLC_PRESENT(2603778600);
}

int func_382(int iParam0)//Position - 0x288A5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x288F0
{
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!func_389(CAM::_0xDC9DA9E8789F5246(), 4294967295))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	if (func_385(CAM::_0xDC9DA9E8789F5246()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (func_384(iParam0) != 4294967295)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_384(int iParam0)//Position - 0x28977
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return 4294967295;
}

int func_385(int iParam0)//Position - 0x289A6
{
	if (func_388(iParam0) == 233)
	{
		return func_386(iParam0);
	}
	return 4294967295;
}

int func_386(int iParam0)//Position - 0x289C3
{
	if (func_387(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_B0;
	}
	return 4294967295;
}

int func_387(int iParam0, int iParam1)//Position - 0x289E6
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x28A21
{
	if (func_387(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_389(int iParam0, int iParam1)//Position - 0x28A44
{
	int iVar0;
	
	if (func_238(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (AUDIO::_0x0626A247D2405330() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_390()//Position - 0x28A91
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 239, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 240, 1);
}

int func_391(vector3 vParam0, bool bParam1)//Position - 0x28ADC
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_392(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_392(bool bParam0, float fParam1, float fParam2)//Position - 0x28B08
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_393(int iParam0)//Position - 0x28B1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_279(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_394(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28B49
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_94();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_395(int iParam0)//Position - 0x29087
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_396(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_396(int iParam0)//Position - 0x290C4
{
	if (func_25(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_397(int iParam0)//Position - 0x290EE
{
	int iVar0;
	struct<8> Var1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2704.f_19, 7))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				MISC::SET_BIT(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_428(iVar0) };
				if (Global_6484 == iVar0 || Global_6484 == 0)
				{
					func_3(1);
					Var1 = { func_427("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					AUDIO::START_AUDIO_SCENE(&Var1);
					iVar0 = (Global_6484 + 1 % 8);
					func_425(iParam0, iVar0);
					iParam0->f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					MISC::SET_BIT(iParam0, 12);
					if (iVar0 == 7)
					{
						MISC::SET_BIT(&(Global_19E56.f_2704.f_19), 7);
						func_424(255, 0);
					}
				}
				else
				{
					func_425(iParam0, 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2704.f_19), 12);
				}
			}
		}
		else
		{
			func_423();
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 31))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 25))
				{
					func_422(iParam0);
				}
				else if (func_421())
				{
					func_405(iParam0);
					iParam0->f_3 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (!func_404(0))
				{
					func_424(255, 0);
				}
			}
			else if (func_404(0))
			{
				if (MISC::GET_GAME_TIMER() > iParam0->f_3)
				{
					func_424(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_398(iParam0);
			}
		}
	}
}

void func_398(int iParam0)//Position - 0x2926C
{
	struct<8> Var0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 31))
	{
		func_403(iParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 25))
	{
		func_399(iParam0);
	}
	Var0 = { func_427("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Var0))
	{
		AUDIO::STOP_AUDIO_SCENE(&Var0);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 6);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 30);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 8);
}

void func_399(int iParam0)//Position - 0x292D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_402(iVar0);
	iVar2 = func_401(iVar1);
	iVar3 = func_400(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 25);
}

int func_400(int iParam0)//Position - 0x2931D
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("DUNE");
		
		default:
	}
	return 0;
}

int func_401(int iParam0)//Position - 0x29349
{
	switch (iParam0)
	{
		case 12:
			return 3753204865;
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("EMPEROR2");
		
		case 17:
			return joaat("SCORCHER");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_402(int iParam0)//Position - 0x293E5
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return 4294967295;
}

void func_403(int iParam0)//Position - 0x29437
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(unk_0x8000C77B5F336760(iParam0->f_4, false), 10f);
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_5))
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(unk_0x8000C77B5F336760(iParam0->f_5, false), 10f);
		PED::DELETE_PED(&(iParam0->f_5));
	}
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 31);
}

bool func_404(bool bParam0)//Position - 0x29491
{
	if (bParam0)
	{
		return Global_191A2.f_2 > 0.5f;
	}
	return Global_191A2.f_2 >= 255f;
}

void func_405(int iParam0)//Position - 0x294BC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_402(iVar0);
	func_406(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_420(iVar0), func_419(iVar0), 1);
	MISC::SET_BIT(iParam0, 31);
}

void func_406(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x294F5
{
	switch (iParam0)
	{
		case 12:
			func_418(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 109:
			func_417(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 43:
			func_416(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 35:
			func_415(uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 28:
			func_414(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 17:
			func_413(uParam1, uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 49:
			func_411(uParam1, uParam2, vParam3, fParam4);
			break;
		
		case 25:
			func_410(uParam1, vParam3, fParam4);
			break;
		
		case 14:
			func_409(uParam1, vParam3, fParam4);
			break;
		
		case 86:
			func_407(uParam1, vParam3, fParam4);
			break;
	}
}

void func_407(var uParam0, vector3 vParam1, float fParam2)//Position - 0x295E6
{
	int iVar0;
	
	iVar0 = func_401(86);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_408(*uParam0);
		return;
	}
}

void func_408(int iParam0)//Position - 0x297ED
{
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	PED::APPLY_PED_BLOOD_SPECIFIC(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_409(var uParam0, vector3 vParam1, float fParam2)//Position - 0x29B25
{
	int iVar0;
	
	iVar0 = func_401(14);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(5, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_408(*uParam0);
		return;
	}
}

void func_410(var uParam0, vector3 vParam1, float fParam2)//Position - 0x29D2C
{
	int iVar0;
	
	iVar0 = func_401(25);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.02f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.23f), (vParam1.y + 0.04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.05f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x - 0.05f), (vParam1.y - 0.11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, (vParam1.x + 0.09f), (vParam1.y - 0.06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_408(*uParam0);
		return;
	}
}

void func_411(var uParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x29EBB
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_401(49);
	iVar1 = func_400(49);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar0, vParam2, fParam3, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		GRAPHICS::ADD_DECAL(1110, ((vParam2.x + 0.12f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, ((vParam2.x - 0.03f) - 0.3f), ((vParam2.y + 0.04f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, ((vParam2.x - 0.2f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, ((vParam2.x - 0.05f) - 0.3f), ((vParam2.y - 0.15f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		GRAPHICS::ADD_DECAL(1110, ((vParam2.x + 0.01f) - 0.3f), ((vParam2.y - 0.06f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_408(*uParam0);
		vVar2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar1, vParam2 + vVar2, fParam3, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam1, 2f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 1084227584);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 2f);
		unk_0xC0078C1F63760E5D(*uParam1, 1f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 0, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 1, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 2, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 3, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 4, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam1, 5, func_412());
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		VEHICLE::_SET_VEHICLE_LIGHTS_MODE(*uParam1, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam1, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

int func_412()//Position - 0x2A15D
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_413(var uParam0, var uParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x2A17E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_401(17);
	iVar1 = func_400(17);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		*uParam0 = PED::CREATE_PED(4, iVar1, vParam2, fParam3, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		vVar2 = { 0.02f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.23f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.11f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.09f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			vVar2 = { 0.5783f, 0.1357f, -0.0683f };
			GRAPHICS::ADD_DECAL(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.0477f, 0.1103f, -0.1388f };
			GRAPHICS::ADD_DECAL(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.5048f, 0.4595f, -0.1953f };
			GRAPHICS::ADD_DECAL(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_408(*uParam0);
		*uParam1 = VEHICLE::CREATE_VEHICLE(iVar0, (vParam2.x - 0.4f), (vParam2.y - 0.5f), vParam2.z, fParam3, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam1, 0f, 85f, 0f, 2, 1);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam1, 20.5f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam1, 15f);
		PHYSICS::ACTIVATE_PHYSICS(*uParam1);
		return;
	}
}

void func_414(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2A460
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_401(28);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		vVar1 = { 0.02f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.5206f, 0f, 0.003f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.1258f, 0.0362f, -0.0837f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6107f, 0.4678f, -0.0815f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_415(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2A694
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_401(35);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, vParam1, fParam2, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 170f, 0f, 2, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_BODY_HEALTH(*uParam0, 1f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, 15f);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 0, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 1, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 2, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 3, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 4, func_412());
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, 5, func_412());
		VEHICLE::_SET_VEHICLE_LIGHTS_MODE(*uParam0, 3);
		VEHICLE::SET_VEHICLE_LIGHTS(*uParam0, 2);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		if (bParam3)
		{
			vVar1 = { 0.4947f, 2.3632f, 0.1294f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			vVar1 = { 0.9243f, 2.6606f, 0.1951f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			vVar1 = { 1.5467f, 2.5044f, 0.2418f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			vVar1 = { 1.357f, 3.8779f, 0.3259f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_416(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2A880
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_401(43);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 227, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4125f, -0.5815f, -0.2056f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = { 0.6332f, -1.1758f, -0.7106f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_417(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2AA70
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_401(109);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4936f, -0.1763f, -0.0522f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.0645f, 0.0483f, -0.0698f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6011f, -0.1704f, -0.1473f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_408(*uParam0);
		return;
	}
}

void func_418(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2ACC5
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_401(12);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		*uParam0 = PED::CREATE_PED(28, iVar0, vParam1, fParam2, 1, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(*uParam0, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		PHYSICS::ACTIVATE_PHYSICS(*uParam0);
		vVar1 = { 0.04f, 0.02f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.01f, 0.05f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, -0.01f, 0f };
		GRAPHICS::ADD_DECAL(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.2417f, -0.3975f, -0.2282f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.0747f, -0.8188f, -0.2576f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.4322f, -1.1548f, -0.4902f };
			GRAPHICS::ADD_DECAL(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_408(*uParam0);
		return;
	}
}

float func_419(int iParam0)//Position - 0x2AEBA
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_420(int iParam0)//Position - 0x2AF1E
{
	switch (iParam0)
	{
		case 1:
			return Global_1918B[0 /*3*/];
		
		case 2:
			return Global_1918B[1 /*3*/];
		
		case 3:
			return Global_1918B[2 /*3*/];
		
		case 4:
			return Global_1918B[3 /*3*/];
		
		case 5:
			return Global_1918B[4 /*3*/];
		
		case 6:
			return Global_1918B[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_421()//Position - 0x2AF9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_402(iVar0);
	iVar2 = func_401(iVar1);
	iVar3 = func_400(iVar1);
	if (iVar2 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_422(int iParam0)//Position - 0x2AFEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_402(iVar0);
	iVar2 = func_401(iVar1);
	iVar3 = func_400(iVar1);
	if (iVar2 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar2);
	}
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3);
	}
	MISC::SET_BIT(iParam0, 25);
}

void func_423()//Position - 0x2B031
{
	if (Global_191A2.f_3 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	Global_191A2.f_3 = MISC::GET_FRAME_COUNT();
	if (Global_191A2.f_2 == 0f && Global_191A2.f_1 == 0f)
	{
		return;
	}
	if (Global_191A2.f_2 != Global_191A2.f_1)
	{
		Global_191A2.f_2 = (Global_191A2.f_2 + Global_191A2);
		if (Global_191A2 <= 0f)
		{
			if (Global_191A2.f_2 < Global_191A2.f_1)
			{
				Global_191A2.f_2 = Global_191A2.f_1;
			}
		}
		else if (Global_191A2.f_2 > Global_191A2.f_1)
		{
			Global_191A2.f_2 = Global_191A2.f_1;
		}
	}
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_191A2.f_2), 0);
}

void func_424(int iParam0, int iParam1)//Position - 0x2B0F2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_191A2 = 0f;
		Global_191A2.f_1 = fVar0;
		Global_191A2.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_191A2.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (MISC::GET_FRAME_TIME() * 1000f));
		Global_191A2 = (fVar1 / fVar2);
		Global_191A2.f_1 = fVar0;
	}
}

void func_425(int iParam0, int iParam1)//Position - 0x2B14F
{
	func_426(&(Global_19E56.f_2704.f_19), iParam1, 14336, 11);
}

void func_426(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B16B
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_427(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2B18F
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_428(int iParam0)//Position - 0x2B1B4
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_19175[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_429()//Position - 0x2B1DC
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (func_430(8))
					{
						iLocal_53[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[4], 471.48f, fVar0, 30.33f, 1, false, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_53[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[1], 471.48f, fVar0, 30.15f, 1, false, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_430(9))
					{
						iLocal_53[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[5], 471.48f, fVar0, 29.98f, 1, false, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_430(10))
					{
						iLocal_53[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_53[3], 471.48f, fVar0, 29.82f, 1, false, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(iLocal_53[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar2]))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_53[iVar2], true, 0);
							ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_53[iVar2], 1);
							INTERIOR::_0x82EBB79E258FA2B7(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_470();
				iLocal_52 = 0;
			}
		}
	}
}

int func_430(int iParam0)//Position - 0x2B414
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_431()//Position - 0x2B440
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11188.f_229)
	{
		if (!iLocal_54)
		{
			Global_11188.f_22A = 0;
			iLocal_54 = 1;
		}
		else if (Global_11188.f_22A >= 68)
		{
			Global_11188.f_229 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_466(&Local_140, iVar1);
			if ((Local_140.f_45 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Local_140.f_37, false);
			}
			else
			{
				fLocal_152[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Local_131, false);
			}
			if (func_465())
			{
				func_464(iVar1);
				func_462(iVar1);
				func_461(iVar1);
				func_460(iVar1);
				func_458(iVar1);
				func_457(iVar1);
				func_456(iVar1);
				func_433(iVar1);
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iVar1], 2))
				{
					if (Global_11188.f_229)
					{
						iLocal_54 = 0;
					}
					func_471(iVar1);
				}
			}
			else
			{
				func_432(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_471(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != 4294967295)
	{
		func_471(iLocal_151);
		iLocal_151 = 4294967295;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_471(iLocal_47);
	if (iLocal_157)
	{
		func_471(21);
		func_471(22);
		func_471(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_11188.f_229)
	{
		Global_11188.f_22A++;
	}
}

void func_432(int iParam0)//Position - 0x2B639
{
	if (iLocal_49[iParam0] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_433(int iParam0)//Position - 0x2B65C
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 2))
	{
		func_432(iParam0);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(uLocal_48[iParam0]), 2);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), vLocal_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("BLIMP"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 19) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56 == 21) || (iLocal_129 == 0 && Local_56 == 22)) || (iLocal_129 == 0 && Local_56 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iParam0], 0))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (iParam0 == 24)
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_11188.f_8B[iParam0], 4294967295, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iVar3 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_11188.f_8B[iParam0], 4294967295);
					}
					iVar4 = func_395(iVar3);
					if (iVar4 != Global_19E56.f_7F5D.f_15D7)
					{
						if (func_25(iVar4))
						{
							func_455("Updating last character to use vehicle gen", iVar4);
							Global_19E56.f_7F5D.f_15D7 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_11188.f_8B[iParam0], 1))
				{
					func_454("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
					{
						VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
					}
					Global_11188.f_8B[iParam0] = 0;
					Global_11188[iParam0] = 1;
					func_453(iParam0);
					return;
				}
				if (((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_454("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
					{
						VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
					Global_11188.f_8B[iParam0] = 0;
					Global_11188[iParam0] = 1;
					func_453(iParam0);
					return;
				}
				if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_11188.f_8B[iParam0], AUDIO::_0x0626A247D2405330(), 1))
					{
						func_454("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
						{
							VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
						Global_11188.f_8B[iParam0] = 0;
						Global_11188[iParam0] = 1;
						func_453(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(Global_11188.f_8B[iParam0], true), vLocal_50[iParam0 /*3*/], true) > fVar5) || (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(Global_11188.f_8B[iParam0], true), Local_131, true) > fVar5))
				{
					func_454("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
					{
						VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
					Global_11188.f_8B[iParam0] = 0;
					Global_11188[iParam0] = 1;
					func_453(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_454("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
					{
						VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
					Global_11188.f_8B[iParam0] = 0;
					Global_11188[iParam0] = 1;
					func_453(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_11188.f_8B[iParam0], iLocal_129, 1) && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0]))
					{
						func_454("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
						{
							VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
						}
						Global_11188.f_8B[iParam0] = 0;
						Global_11188[iParam0] = 1;
						func_453(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_19E56.f_7F5D.f_12C1;
						func_451(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_362(iVar6, iVar7))
						{
							if ((!func_63(Global_11188.f_8B[iParam0]) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
							{
								VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
							}
							func_31(Global_11188.f_8B[iParam0], Global_19E56.f_7F5D.f_15D7);
							Global_11188[iParam0] = 1;
							func_453(iParam0);
						}
						else if (func_37(Global_11188.f_8B[iParam0]))
						{
							func_32(Global_11188.f_8B[iParam0], &Global_2587EB);
							Global_2587EA = Global_19E56.f_7F5D.f_15D7;
							iLocal_170 = Global_11188.f_8B[iParam0];
						}
					}
					func_454("No longer needed: Player out for range");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
					MISC::CLEAR_AREA(Local_131, 3f, 0, 0, 0, false);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, 0, 0, 0, 0, false, 0);
					Global_11188.f_8B[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_11188.f_248 = { Local_131 };
						Global_11188.f_24B = { 0f, 0f, 0f };
					}
					return;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 30))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 31))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_11188.f_8B[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_11188.f_8B[iParam0]))
						{
							vVar8 = { unk_0x8000C77B5F336760(Global_11188.f_8B[iParam0], true) };
							if (vVar8.z >= func_450(iParam0))
							{
								VEHICLE::SET_BOAT_ANCHOR(Global_11188.f_8B[iParam0], true);
								MISC::SET_BIT(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_11188.f_8B[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
	{
		func_454("No longer needed: Vehicle not driveable");
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
		Global_11188.f_8B[iParam0] = 0;
		Global_11188[iParam0] = 1;
		func_453(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	if (Global_11513 == iParam0)
	{
		func_454("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_11512) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11512, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iParam0], 0))
			{
				if (Global_11188.f_8B[iParam0] == Global_11512)
				{
					func_454("Vehicle to be handed over is the same vehicle.");
					Global_11513 = 4294967295;
					Global_11512 = 0;
					return;
				}
				else
				{
					func_454("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_11188.f_8B[iParam0])) && !func_62(Global_11188.f_8B[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_8B[iParam0]) != joaat("MONSTER"))
					{
						VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
					Global_11188.f_8B[iParam0] = 0;
				}
			}
			Global_11188.f_8B[iParam0] = Global_11512;
			Global_11188[iParam0] = 1;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uLocal_48[iParam0]), 0);
			MISC::SET_BIT(&(uLocal_48[iParam0]), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uLocal_48[iParam0]), 3);
			vLocal_50[iParam0 /*3*/] = { unk_0x8000C77B5F336760(Global_11512, true) };
			Global_11513 = 4294967295;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_3B = 2;
				func_32(Global_11512, &Var9);
				if (Global_11514)
				{
					func_114(iParam0, &Var9, unk_0x8000C77B5F336760(Global_11512, true), ENTITY::GET_ENTITY_HEADING(Global_11512), func_46(Global_11512));
				}
				else
				{
					func_114(iParam0, &Var9, Global_19E56.f_7F5D.f_748[Local_131.f_E /*3*/], Global_19E56.f_7F5D.f_78E[Local_131.f_E], func_46(Global_11512));
				}
				Global_11188.f_8B[iParam0] = Global_11512;
				Global_11188.f_1E4[iParam0] = Global_11188.f_8B[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_467();
				if (func_25(iVar10))
				{
					func_454("Players stored switch vehicle cleared for prep getaway.");
					Global_16B48[iVar10] = 0;
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
			if (iParam0 == 24)
			{
				VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], false);
			}
			Global_11512 = 0;
			if (Global_2587EB.f_42 != 0)
			{
				func_283(&Global_2587EB, Global_2587EA);
				Global_2587EB.f_42 = 0;
			}
			return;
		}
		if (Global_2587EB.f_42 != 0)
		{
			func_283(&Global_2587EB, Global_2587EA);
			Global_2587EB.f_42 = 0;
		}
		func_454("Vehicle to be handed over doesn't exist.");
		Global_11513 = 4294967295;
		Global_11512 = 0;
	}
	if (Global_11188[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_11188[iParam0] = 0;
			func_454("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_11188.f_248 = { 0f, 0f, 0f };
			Global_11188.f_24B = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_19E56.f_7F5D.f_7A6[Local_131.f_E] != 0) && Global_19E56.f_7F5D.f_7A6[Local_131.f_E] > 3) && Local_131.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_50();
			iVar13 = Global_19E56.f_7F5D.f_12C1;
			func_451(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_362(iVar12, iVar13))
			{
				func_283(&(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/]), Global_19E56.f_7F5D.f_15D7);
				func_453(iParam0);
				Global_11188[iParam0] = 1;
				func_454("Cannot be created: Vehicle ready for impound");
				Global_2587EB.f_42 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_11188.f_248 = { 0f, 0f, 0f };
		Global_11188.f_24B = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Vehicle gen not available");
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_449() && func_448(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Player character not valid");
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iParam0]))
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_11188.f_1E4[iParam0] = 0;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 6))
	{
		if (func_447(Local_131.f_4, 4294967295))
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_446(Local_131.f_4, 4294967295))
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_445(iParam0))
	{
		Global_11188[iParam0] = 1;
		func_454("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_19E56.f_7F5D.f_7A6[Local_131.f_E] > 0) && Global_19E56.f_7F5D.f_7A6[Local_131.f_E] <= 3)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_C = (Global_19E56.f_7F5D.f_7A6[Local_131.f_E] - 1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_CAR(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_C = (Global_19E56.f_7F5D.f_7A6[Local_131.f_E] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_444(Local_131.f_C, iVar14, Local_131, -1f))
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_473(iParam0, 0);
			}
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 19) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_16252[Local_131.f_C /*3*/][1] != 4294967295 && (MISC::GET_GAME_TIMER() - Global_16252[Local_131.f_C /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_11188[iParam0] = 1;
					func_454("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar15, "...", 24);
					StringIntConCat(&vVar15, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_16252[Local_131.f_C /*3*/][1])) / 1000), 24);
					StringConCat(&vVar15, " seconds", 24);
					func_454(&vVar15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_16252[Local_131.f_C /*3*/][0] != 4294967295 && (MISC::GET_GAME_TIMER() - Global_16252[Local_131.f_C /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_11188[iParam0] = 1;
					func_454("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar16, "...", 24);
					StringIntConCat(&vVar16, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_16252[Local_131.f_C /*3*/][1])) / 1000), 24);
					StringConCat(&vVar16, " seconds", 24);
					func_454(&vVar16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_11188.f_248 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_C, iVar14);
		STREAMING::REQUEST_MODEL(iLocal_49[iParam0]);
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_49[iParam0]))
		{
			func_454("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_443(iLocal_49[iParam0], Local_131, 1))
		{
			func_454("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, 0, 0, 0, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (iVar14 == 2)
		{
			func_438(&(Global_11188.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_438(&(Global_11188.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_11188[iParam0] = 1;
			func_454("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		MISC::SET_BIT(&(uLocal_48[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_131.f_4))
		{
			func_454("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_443(Local_131.f_4, Local_131, 1))
		{
			func_454("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_131, 3f, 0, 0, 0, false);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 23))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("SUBMERSIBLE2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_11188.f_8B[iParam0] = VEHICLE::CREATE_VEHICLE(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 10))
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_131.f_4))
			{
				MISC::SET_BIT(&(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/].f_4D), 22);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/].f_4D, 14))
			{
				func_32(Global_11188.f_8B[iParam0], &Local_141);
				func_437(Local_141.f_4D, &(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/].f_4D), Local_131.f_4);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/].f_4D), 14);
			}
			func_375(Global_11188.f_8B[iParam0], &(Global_19E56.f_7F5D.f_45[Local_131.f_E /*78*/]), 0, 1);
			Global_11188.f_1E4[iParam0] = Global_11188.f_8B[iParam0];
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 9))
			{
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], Local_131.f_A, Local_131.f_B);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 8))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_11188.f_8B[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_11188.f_8B[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_11188.f_8B[iParam0], 0);
				unk_0x156B8835BE8B6B6C(Global_11188.f_8B[iParam0], false);
				VEHICLE::_0x51BB2D88D31A914B(Global_11188.f_8B[iParam0], false);
				VEHICLE::_0x192547247864DFDD(Global_11188.f_8B[iParam0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_11188.f_8B[iParam0], false);
				ENTITY::FREEZE_ENTITY_POSITION(Global_11188.f_8B[iParam0], true);
				unk_0x346478B12F69D4E3(Global_11188.f_8B[iParam0], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
	{
		func_436("Created - Coords: ", Local_131);
		func_435("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_11188.f_248 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("MILJET"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], 121, 21);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_11188.f_8B[iParam0], 8, 156);
				break;
			
			case joaat("BESRA"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], 122, 89);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_11188.f_8B[iParam0], 25, 121);
				break;
			
			case joaat("BUZZARD"):
			case joaat("BUZZARD2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_11188.f_8B[iParam0], 5, 156);
				break;
			
			case joaat("DUKES2"):
				break;
			
			case joaat("RHINO"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], 131, 132);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_11188.f_8B[iParam0], 132, 156);
				break;
			
			case joaat("LUXOR2"):
			case joaat("SWIFT2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_11188.f_8B[iParam0], 159, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_11188.f_8B[iParam0], 160, 156);
				break;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 22))
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_11188.f_8B[iParam0], true);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 30))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_131.f_9), 31);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 26))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_11188.f_8B[iParam0], 7);
			VEHICLE::SET_VEHICLE_ALARM(Global_11188.f_8B[iParam0], 1);
		}
		func_434(Global_11188.f_8B[iParam0], iParam0);
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 29) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 30))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_11188.f_8B[iParam0], 1084227584);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_11188.f_8B[iParam0], 0f);
		ENTITY::_SET_ENTITY_SOMETHING(Global_11188.f_8B[iParam0], true);
		VEHICLE::_0x428BACCDF5E26EAD(Global_11188.f_8B[iParam0], INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 5));
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(uLocal_48[iParam0]), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uLocal_48[iParam0]), 1);
	Global_11188[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_11188.f_45[iParam0] = 1;
	}
	iVar17 = func_172(458, 4294967295, 4294967295);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_11188.f_8B[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2587EB.f_42 = 0;
	}
}

void func_434(int iParam0, int iParam1)//Position - 0x2CE7A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				break;
			}
	}
}

void func_435(char* sParam0, float fParam1)//Position - 0x2CF20
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_436(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x2CF39
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_437(var uParam0, var uParam1, int iParam2)//Position - 0x2CF52
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("COQUETTE2"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 1);
			break;
		
		case joaat("KALAHARI"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 2);
			break;
		
		case joaat("VOLTIC"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 2);
			break;
		
		case joaat("BANSHEE"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			break;
		
		case joaat("STALION"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 2);
			break;
		
		case joaat("CHINO"):
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_438(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x2D028
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 49;
		Var2.f_51 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_19E56.f_933.f_21B.f_10C8) && Global_19E56.f_2361.f_63.f_3A[131])
		{
			Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_7, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_442(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_54, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_55, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5D, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5E, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_376(iParam0, &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_440(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_19E56.f_933.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
				}
				func_439(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_7, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_442(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_54, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_55, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5D, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5E, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_376(iParam0, &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1F), &(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_440(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_19E56.f_933.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
				}
				func_439(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2);
			if (STREAMING::HAS_MODEL_LOADED(Var2))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2, vParam2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_18);
				}
				if (func_442(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0 && Var2.f_1A < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_1A);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_58);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_57);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var2.f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Var2.f_59 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > 4294967295)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_5A == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_5A);
						}
					}
				}
				func_376(iParam0, &(Var2.f_1F), &(Var2.f_51));
				GRAPHICS::_ADD_CLAN_DECAL_TO_VEHICLE(*iParam0, Var2.f_60);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BAGGER") && !Global_19E56.f_2361.f_63.f_3A[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("BODHI2"))
					{
						func_440(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_19E56.f_933.f_21B.f_10C8) && Global_19E56.f_2361.f_63.f_3A[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("TAILGATER"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_19E56.f_933.f_21B.f_10C8 = 1;
					func_232(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2);
				}
				if (bVar5)
				{
					func_439(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_439(int iParam0, int iParam1)//Position - 0x2DE6C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			Global_16222[iVar0] = iParam0;
			Global_1622C[iVar0] = iParam1;
			Global_16236[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_16236[iVar0]))
			{
				Global_16252[iParam1 /*3*/][0] = 4294967295;
			}
			else
			{
				Global_16252[iParam1 /*3*/][1] = 4294967295;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_440(var uParam0)//Position - 0x2DEEE
{
	if (!func_441(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_19E56.f_2361.f_63.f_3A[119]);
	}
}

bool func_441(int iParam0)//Position - 0x2DF19
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_442(var uParam0, int iParam1)//Position - 0x2DF28
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_19E56.f_4E7A.f_105)
	{
		*uParam0 = { Global_19E56.f_4E7A.f_10B };
		*iParam1 = Global_19E56.f_4E7A.f_10F;
		return 1;
	}
	return 0;
}

int func_443(int iParam0, vector3 vParam1, int iParam2)//Position - 0x2DF69
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if ((iParam2 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) > 0)
	{
		func_454("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &vVar0, &vVar1);
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar0, true);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vParam1, true) < (fVar2 * 0.5f))
	{
		func_435("player is in vehicle bounds - fLength: ", fVar2);
		func_435("player is in vehicle bounds - fDistance: ", MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vParam1, true));
		return 1;
	}
	return 0;
}

int func_444(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x2DFFB
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_B = 12;
	Var1.f_1F = 49;
	Var1.f_51 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == iVar2 && Global_1622C[iVar0] == iParam0)
				{
					if (fParam3 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(Global_16222[iVar0], false), vParam2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x2E0C0
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("FROGGER2"))
		{
			if (((func_447(Local_131.f_4, 4294967295) || func_446(Local_131.f_4, 4294967295)) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("exile2")) > 0) || !func_430(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[20]) && !ENTITY::IS_ENTITY_DEAD(Global_11188.f_1E4[20], 0)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[20], 0))
		{
			if (Local_131.f_4 == ENTITY::GET_ENTITY_MODEL(Global_11188.f_1E4[20]))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Global_11188.f_1E4[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_A && iVar1 == Local_131.f_B)
				{
					func_278(20);
				}
			}
		}
	}
	return 0;
}

int func_446(int iParam0, int iParam1)//Position - 0x2E1A8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_131, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == 4294967295 || VEHICLE::GET_VEHICLE_LIVERY(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_447(int iParam0, int iParam1)//Position - 0x2E207
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = PED::GET_PED_NEARBY_VEHICLES(AUDIO::_0x0626A247D2405330(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uVar0[iVar1], 0)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == 4294967295 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x2E282
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_358(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_449()//Position - 0x2E2A4
{
	return Global_11188.f_8A;
}

float func_450(int iParam0)//Position - 0x2E2B2
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E2E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_366(*uParam0);
	iVar3 = func_365(*uParam0);
	iVar4 = func_364(*uParam0);
	iVar5 = func_363(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_452(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_452(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E466
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_453(int iParam0)//Position - 0x2E49E
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 13))
	{
		func_473(iParam0, 0);
	}
}

void func_454(char* sParam0)//Position - 0x2E4BB
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_455(char* sParam0, int iParam1)//Position - 0x2E4CD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_456(int iParam0)//Position - 0x2E4E5
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = 4294967295;
	iVar4 = 1193854962;
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = 160628940;
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			vVar1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar1, true) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]))
		{
			STREAMING::REQUEST_MODEL(iVar4);
			iLocal_147 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar4, vVar1, false, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_146[iVar3], 0f, 0f, fVar2, 2, 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_146[iVar3], false);
					unk_0x346478B12F69D4E3(iLocal_146[iVar3], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != 4294967295)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_146[iVar3]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_146[iVar3])) && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vVar1, true) > 255f)
		{
			OBJECT::DELETE_OBJECT(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_457(int iParam0)//Position - 0x2E73E
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_11188.f_15A[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_F, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_11188.f_15A[iParam0])
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_11188.f_19F[iParam0], 0);
				}
			}
			else if (!Global_11188.f_15A[iParam0])
			{
				Global_11188.f_19F[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_131.f_F, Local_131.f_12, 0, 1, 1, 1);
			}
		}
		Global_11188.f_15A[iParam0] = bVar0;
	}
}

void func_458(int iParam0)//Position - 0x2E7FB
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 16))
			{
				iVar0 = func_459(9);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 18))
			{
				iVar0 = func_459(4);
			}
			if (iVar0 == Local_131.f_C)
			{
				func_326(iParam0, 5, 1);
			}
		}
	}
}

int func_459(int iParam0)//Position - 0x2E86C
{
	return Global_19E56.f_612C[iParam0 /*4*/];
}

void func_460(int iParam0)//Position - 0x2E87F
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 4))
		{
			func_326(iParam0, 3, 1);
		}
		else
		{
			func_326(iParam0, 3, 1);
		}
	}
}

void func_461(int iParam0)//Position - 0x2E8BE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_130)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 0) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0 || func_67(iParam0, 5)) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_11188.f_D0[iParam0]))
				{
					if (func_430(0))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_11188.f_D0[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_37);
							if (Local_140.f_3A != 4294967295)
							{
								HUD::SET_BLIP_SPRITE(Global_11188.f_D0[iParam0], Local_140.f_3A);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_3B)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_11188.f_D0[iParam0], &(Local_140.f_3B));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_11188.f_D0[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_140.f_37);
							if (Local_131.f_D != 4294967295)
							{
								HUD::SET_BLIP_SPRITE(Global_11188.f_D0[iParam0], Local_131.f_D);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_3B)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_11188.f_D0[iParam0], &(Local_140.f_3B));
								}
								if (Local_131.f_C == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_C == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_C == 2)
								{
									iVar1 = 44;
								}
								HUD::SET_BLIP_COLOUR(Global_11188.f_D0[iParam0], iVar1);
							}
						}
						else
						{
							Global_11188.f_D0[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_131);
							if (Local_131.f_D != 4294967295)
							{
								HUD::SET_BLIP_SPRITE(Global_11188.f_D0[iParam0], Local_131.f_D);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_140.f_3B)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_11188.f_D0[iParam0], &(Local_140.f_3B));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_C == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_C == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_C == 2)
									{
										iVar2 = 44;
									}
									HUD::SET_BLIP_COLOUR(Global_11188.f_D0[iParam0], iVar2);
								}
							}
						}
						HUD::SET_BLIP_AS_SHORT_RANGE(Global_11188.f_D0[iParam0], !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 1));
						HUD::SET_BLIP_FLASHES(Global_11188.f_D0[iParam0], false);
						HUD::SET_BLIP_PRIORITY(Global_11188.f_D0[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (HUD::DOES_BLIP_EXIST(Global_11188.f_D0[iParam0]))
		{
			HUD::REMOVE_BLIP(&(Global_11188.f_D0[iParam0]));
		}
	}
}

void func_462(int iParam0)//Position - 0x2EC38
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 3))
			{
				func_463(&(Local_131.f_5), 0, 0, 4294967295, 10000, 7, 0, 0, 0);
				func_326(iParam0, 1, 1);
			}
			else
			{
				func_326(iParam0, 1, 1);
			}
		}
	}
}

void func_463(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2EC94
{
	func_286(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_464(int iParam0)//Position - 0x2ECB5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 7) || Local_131.f_C == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_1D = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_11188.f_250)
					{
						Global_11188.f_250[iVar0] = 4294967295;
						iVar0++;
					}
					Local_56.f_6 = 4294967295;
					if ((Local_56 == 12 || Local_56 == 13) || Local_56 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56 == 15 || Local_56 == 16) || Local_56 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56 == 18 || Local_56 == 19) || Local_56 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_131(iVar0, 4294967295);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_11188.f_250)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_11188.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2))
										{
											Global_11188.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::_IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2 == joaat("SUBMERSIBLE2"))
										{
											Global_11188.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_11188.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = 4294967295;
		Local_56.f_1 = 99999.99f;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iParam0], 0))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_8B[iParam0], 0))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uLocal_48[iParam0], 3))
						{
							MISC::SET_BIT(&(uLocal_48[iParam0]), 0);
							func_326(iParam0, 4, 1);
							func_326(iParam0, 2, 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iParam0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[iParam0], 0)) && ENTITY::GET_ENTITY_MODEL(Global_11188.f_1E4[iParam0]) == joaat("HYDRA"))
		{
			if (!iLocal_171)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_11188.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					VEHICLE::_SET_DESIRED_VERTICAL_FLIGHT_PHASE(Global_11188.f_1E4[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_11188.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				VEHICLE::_SET_DESIRED_VERTICAL_FLIGHT_PHASE(Global_11188.f_1E4[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_465()//Position - 0x2F0DB
{
	return 1;
}

var func_466(var uParam0, int iParam1)//Position - 0x2F0E4
{
	uParam0->f_50 = 0;
	uParam0->f_45 = 0;
	StringCopy(&(uParam0->f_3B), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_E.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_C = 38.2303f;
			uParam0->f_E.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_E.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_1D.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_C = 38.2303f;
			uParam0->f_1D.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_1D.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_A = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_D = 60.1875f;
			uParam0->f_30 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_33 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_36 = 60.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1184.2f, -3345f, 17.5f };
			uParam0->f_E.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_C = 30.3f;
			uParam0->f_E.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_E.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_1D.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_C = 37.8f;
			uParam0->f_1D.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_1D.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_A = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_D = 66.1875f;
			uParam0->f_30 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_33 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_36 = 66.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_2C = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_2F = 14.8763f;
			uParam0->f_E = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_C = 50f;
			uParam0->f_E.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_C = 50f;
			uParam0->f_1D.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_A = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_D = 28.125f;
			uParam0->f_30 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_33 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME2", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_A = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -738f, -1440f, 6.3f };
			uParam0->f_E.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -738f, -1440f, 6f };
			uParam0->f_E.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_1D.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_1D.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_33 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 419850;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_A = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_E.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_E.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_1D.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_1D.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_33 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 419850;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_A = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_D = 17.75f;
			uParam0->f_2C = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_2F = 236.5858f;
			uParam0->f_E = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_C = 40f;
			uParam0->f_E.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_33 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME2", 16);
			uParam0->f_43 = 0;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_A = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_2F = 112.3787f;
			uParam0->f_E = { -859.6f, -1374f, 4.3f };
			uParam0->f_E.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_C = 32.9f;
			uParam0->f_E.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_E.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_1D.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_1D.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_A = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_2F = 110.6762f;
			uParam0->f_E = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_E.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_C = 30f;
			uParam0->f_E.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_E.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_1D.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_1D.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_A = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_2F = 109.8916f;
			uParam0->f_E = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_E.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_C = 31.2f;
			uParam0->f_E.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_E.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_1D.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_1D.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_2F = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME1", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 243.8699f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_4D[0] = 66.202f;
			uParam0->f_46[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_4D[1] = 71.6237f;
			uParam0->f_50 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_2F = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME2", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 53.0985f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_4D[0] = 274.6339f;
			uParam0->f_46[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_4D[1] = 215.8295f;
			uParam0->f_50 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_2F = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME3", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 271.2097f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_4D[0] = 358.5703f;
			uParam0->f_46[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_4D[1] = 70.2711f;
			uParam0->f_50 = 1;
			break;
	}
	return uParam0->f_50;
}

int func_467()//Position - 0x30890
{
	func_468();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_468()//Position - 0x308A9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_396(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_395(AUDIO::_0x0626A247D2405330());
			if (func_25(iVar0) && (!func_27(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_25(Global_19E56.f_933.f_21B.f_10CD))
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

void func_469()//Position - 0x309A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (HUD::DOES_BLIP_EXIST(Global_11188.f_D0[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Global_11188.f_D0[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iVar0]))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iVar0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iVar0]));
				Global_11188.f_8B[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_6E))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_6E, false);
		CAM::DESTROY_CAM(Local_56.f_6E, 0);
	}
	if (CAM::DOES_CAM_EXIST(Local_56.f_6F))
	{
		CAM::SET_CAM_ACTIVE(Local_56.f_6F, false);
		CAM::DESTROY_CAM(Local_56.f_6F, 0);
	}
	if (Local_56.f_3 != 0)
	{
		func_274();
		unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
	}
	if (HUD::DOES_BLIP_EXIST(Global_11188.f_247))
	{
		HUD::REMOVE_BLIP(&(Global_11188.f_247));
	}
	if (iLocal_115 != 4294967295)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != 4294967295)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != 4294967295)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != 4294967295)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_11188.f_241)
		{
			func_230(47, 1);
			func_228(47, 1);
			Global_11188.f_241 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_11188.f_229 = 0;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_470()//Position - 0x30B02
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_471(int iParam0)//Position - 0x30B35
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_150[iVar0], iVar1))
	{
		MISC::SET_BIT(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_472()//Position - 0x30B7B
{
	int iVar0;
	
	if (func_297(25))
	{
		if (Global_19E56.f_7F5D.f_45[22 /*78*/].f_42 != 0 && !func_39(Global_19E56.f_7F5D.f_45[22 /*78*/].f_42, 0))
		{
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_42 = joaat("FUGITIVE");
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_4D = 0;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_41 = 0;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_3E = 255;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_3F = 255;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_40 = 255;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_5 = 0;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_6 = 0;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_7 = 0;
			Global_19E56.f_7F5D.f_45[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_19E56.f_7F5D.f_45[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_19E56.f_7F5D.f_45[22 /*78*/].f_3B[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_297(21) && Global_19E56.f_7F5D.f_45[9 /*78*/].f_42 != 0) && !func_39(Global_19E56.f_7F5D.f_45[9 /*78*/].f_42, 0))
	{
		Global_19E56.f_7F5D.f_45[9 /*78*/].f_42 = 0;
	}
	if ((func_297(22) && Global_19E56.f_7F5D.f_45[10 /*78*/].f_42 != 0) && !func_39(Global_19E56.f_7F5D.f_45[10 /*78*/].f_42, 0))
	{
		Global_19E56.f_7F5D.f_45[10 /*78*/].f_42 = 0;
	}
	if ((func_297(23) && Global_19E56.f_7F5D.f_45[11 /*78*/].f_42 != 0) && !func_39(Global_19E56.f_7F5D.f_45[11 /*78*/].f_42, 0))
	{
		Global_19E56.f_7F5D.f_45[11 /*78*/].f_42 = 0;
	}
	if (func_297(26) && !func_39(Global_19E56.f_7F5D.f_45[12 /*78*/].f_42, 0))
	{
		func_473(26, 0);
	}
	if (func_297(27) && !func_39(Global_19E56.f_7F5D.f_45[13 /*78*/].f_42, 0))
	{
		func_473(27, 0);
	}
	if (func_297(28) && !func_39(Global_19E56.f_7F5D.f_45[14 /*78*/].f_42, 0))
	{
		func_473(28, 0);
	}
	if (func_297(29) && !func_39(Global_19E56.f_7F5D.f_45[15 /*78*/].f_42, 0))
	{
		func_473(29, 0);
	}
	if (func_297(30) && !func_39(Global_19E56.f_7F5D.f_45[16 /*78*/].f_42, 0))
	{
		func_473(30, 0);
	}
	if (func_297(31) && !func_39(Global_19E56.f_7F5D.f_45[17 /*78*/].f_42, 0))
	{
		func_473(31, 0);
	}
	if (func_297(32) && !func_39(Global_19E56.f_7F5D.f_45[18 /*78*/].f_42, 0))
	{
		func_473(32, 0);
	}
	if (func_297(33) && !func_39(Global_19E56.f_7F5D.f_45[19 /*78*/].f_42, 0))
	{
		func_473(33, 0);
	}
	if (func_297(34) && !func_39(Global_19E56.f_7F5D.f_45[20 /*78*/].f_42, 0))
	{
		func_473(34, 0);
	}
}

void func_473(int iParam0, bool bParam1)//Position - 0x30F00
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_326(iParam0, 1, 0);
			func_326(iParam0, 2, 0);
			func_326(iParam0, 3, 0);
			func_326(iParam0, 4, 0);
			func_326(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_326(iParam0, 0, 0);
	}
}

int func_474()//Position - 0x30F5D
{
	return 0;
}

int func_475()//Position - 0x30F66
{
	return 1;
}

int func_476()//Position - 0x30F6F
{
	return 1;
}

int func_477()//Position - 0x30F78
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

void func_478(var uParam0)//Position - 0x30F91
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
	uParam0->f_2 = 4294967295;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_482();
	func_481();
	func_479();
}

void func_479()//Position - 0x30FCE
{
	Global_19800 = 2405.849f;
	Global_19803 = 2408.22f;
	Global_19806 = 2386.096f;
	Global_19809 = 69.1875f;
	Global_1980C[0 /*3*/] = 2417.105f;
	Global_1980C[1 /*3*/] = 2407.058f;
	Global_1980C[2 /*3*/] = 2371.92f;
	Global_1980C[3 /*3*/] = 2399.583f;
	Global_1980C[4 /*3*/] = 2416.519f;
	Global_1980C[5 /*3*/] = 2430.345f;
	Global_1980C[6 /*3*/] = 2385.819f;
	Global_19822[0] = 157.8636f;
	Global_19822[1] = 174.7226f;
	Global_19822[2] = 270.7562f;
	Global_19822[3] = 190.7495f;
	Global_19822[4] = 27.6506f;
	Global_19822[5] = 358.1218f;
	Global_19822[6] = 339.4363f;
	Global_1982A = 2399.82f;
	Global_1982D = 2414.7f;
	func_480(&Global_191A1, 64);
}

void func_480(var uParam0, int iParam1)//Position - 0x310BE
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_481()//Position - 0x310CF
{
	Global_191A6[0 /*3*/].f_1 = 5141.01f;
	Global_191A6[1 /*3*/].f_1 = 6048.71f;
	Global_191A6[2 /*3*/].f_1 = 6185.32f;
	Global_191A6[3 /*3*/].f_1 = 5180.99f;
	Global_191A6[4 /*3*/].f_1 = 4582.72f;
	Global_191A6[5 /*3*/].f_1 = 4831.82f;
	Global_191A6[6 /*3*/].f_1 = 4322.66f;
	Global_191A6[7 /*3*/].f_1 = 3503.92f;
	Global_191A6[8 /*3*/].f_1 = 3777.54f;
	Global_191A6[9 /*3*/].f_1 = 3810.8f;
	Global_191A6[10 /*3*/].f_1 = 3095.88f;
	Global_191C8[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_191C8[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_191C8[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_191C8[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_191C8[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_191C8[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_191C8[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_191C8[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_191C8[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_191C8[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_191C8[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_191C8[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_191C8[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_191C8[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_191C8[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_191C8[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_191C8[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_191C8[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_191C8[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_191C8[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_191C8[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_191C8[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_191C8[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_191C8[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_191C8[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_191C8[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_191C8[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_191C8[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_191C8[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_191C8[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_191C8[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_191C8[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_191C8[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_191C8[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_191C8[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_191C8[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_191C8[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_191C8[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_191C8[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_191C8[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_191C8[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_191C8[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_191C8[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_191C8[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_191C8[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_191C8[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_191C8[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_191C8[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_191C8[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_191C8[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_191C8[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_191C8[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_191C8[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_191C8[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_191C8[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_191C8[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_191C8[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_191C8[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_191C8[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_191C8[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_191C8[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_191C8[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_191C8[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_480(&Global_191A1, 16);
}

void func_482()//Position - 0x315D3
{
	Global_19175[0 /*3*/] = -1567.382f;
	Global_19175[1 /*3*/] = -1436.305f;
	Global_19175[2 /*3*/] = 31.2408f;
	Global_19175[3 /*3*/] = 278.1924f;
	Global_19175[4 /*3*/] = 1116.002f;
	Global_19175[5 /*3*/] = 1676.193f;
	Global_1918B[0 /*3*/] = -1592.642f;
	Global_1918B[1 /*3*/] = -1573.501f;
	Global_1918B[2 /*3*/] = -1459.359f;
	Global_1918B[3 /*3*/] = 21.1005f;
	Global_1918B[4 /*3*/] = 262.9409f;
	Global_1918B[5 /*3*/] = 1091.07f;
	func_480(&Global_191A1, 1);
}

