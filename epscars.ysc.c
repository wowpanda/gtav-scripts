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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	struct<27> Local_41 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_42[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 16;
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
	var uLocal_83 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vLocal_40 = { -690.938f, 512.2703f, 109.3639f };
	iLocal_52 = 4294967295;
	iLocal_60 = 60000;
	iLocal_231 = 99;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	iLocal_51 = Global_19E56.f_2725.f_67;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_41, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, vLocal_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_83(&Local_41, 2);
	Local_41.f_4 = 3;
	MISC::CLEAR_AREA_OF_VEHICLES(vLocal_40, 5f, 0, 0, 0, 0, false, 0);
	func_82(&vLocal_61, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8.25f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar1);
	iLocal_64 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0, vVar1, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_19E56.f_2725.f_68 == 0)
	{
		Global_19E56.f_2725.f_68 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	func_77(1);
	func_76(0);
	while (true)
	{
		if (func_89(90) == 1)
		{
			func_88();
			func_90();
		}
		func_75(AUDIO::_0x0626A247D2405330());
		if (MISC::GET_MISSION_FLAG() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_46)
		{
			case 0:
				func_64(&iLocal_45);
				break;
			
			case 4:
				func_63(&iLocal_45);
				break;
			
			case 1:
				func_62(&iLocal_45);
				break;
			
			case 2:
				func_56(&iLocal_45);
				break;
			
			case 3:
				func_52(&iLocal_45);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_41);
		if (func_43(&Local_41))
		{
			if (func_37(&Local_41))
			{
				if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == Global_11511)
				{
					Global_11511 = 0;
					Global_19E56.f_7F5D.f_15D4 = 0;
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Local_41.f_E, 8.5f, 0, 0, 0, 0, false, 0);
				Global_19E56.f_2725.f_67 = iLocal_51;
				func_35();
				func_34(&uLocal_65, 0, AUDIO::_0x0626A247D2405330(), "MICHAEL", 0, 1);
				func_22(&uLocal_65, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				func_19();
			}
		}
		if (Global_19E56.f_2725.f_68 != 0)
		{
			iLocal_49 = (Global_19E56.f_2725.f_68 + 14 % func_18(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
			if (((CLOCK::GET_CLOCK_DAY_OF_MONTH() == iLocal_49 && !func_17(0)) && !PLAYER::IS_PLAYER_DEAD(CAM::_0xDC9DA9E8789F5246())) && PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_230, &uLocal_232, &iLocal_231);
		if ((iLocal_59 > 0 && MISC::GET_GAME_TIMER() > iLocal_59) && iLocal_231 == 99)
		{
			iLocal_59 = 0;
			if (func_86())
			{
				func_76(6);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)//Position - 0x3E4
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iVar0 = AUDIO::GET_SOUND_ID();
				unk_0x1190AB7024CBD8CB(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_TITLE");
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_NOTE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_3());
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			*uParam1 = MISC::GET_GAME_TIMER();
			*iParam2++;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7000)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.33f);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()//Position - 0x539
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

int func_3()//Position - 0x563
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_51, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)//Position - 0x596
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_49(2, vLocal_42[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_52))
	{
		func_48(2, vLocal_42[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, vLocal_42[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_43)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_43[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_19E56.f_2725.f_68 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)//Position - 0x632
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_11(iParam0);
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
		MemCopy(&Var3, {func_10(Global_91A4[iVar4 /*12*/].f_1)}, 4);
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
		func_6(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_91A4[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_91A4[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B5F8[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x99F
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
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
			func_7(HUD::_SET_NOTIFICATION_MESSAGE(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_8(iParam1)), 0));
		}
		else
		{
			func_7(HUD::_SET_NOTIFICATION_MESSAGE("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_8(iParam1)), 0));
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
		unk_0x1190AB7024CBD8CB(4294967295, "Notification", &Global_38A6, 1);
	}
}

void func_7(var uParam0)//Position - 0xB85
{
	Global_919F[Global_91A3] = uParam0;
	Global_41F0 = 1;
	Global_41EF = uParam0;
	Global_91A3++;
	if (Global_91A3 == 3)
	{
		Global_91A3 = 0;
	}
}

char* func_8(int iParam0)//Position - 0xBB3
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

char* func_9(int iParam0, int iParam1)//Position - 0xF1E
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

struct<16> func_10(int iParam0)//Position - 0x1371
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

int func_11(int iParam0)//Position - 0x13A2
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

void func_12(int iParam0, char* sParam1)//Position - 0x1406
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
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

char* func_13(int iParam0)//Position - 0x14BB
{
	if (iParam0 == iLocal_43[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_43[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_43[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_43[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_43[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)//Position - 0x151C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_51, iParam0);
}

bool func_15(int iParam0)//Position - 0x152C
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_51, iParam0 + 5);
}

int func_16()//Position - 0x1548
{
	return (5 - func_3());
}

int func_17(int iParam0)//Position - 0x1556
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

int func_18(int iParam0, int iParam1)//Position - 0x15B0
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

void func_19()//Position - 0x1652
{
	int iVar0;
	
	iLocal_231 = 0;
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, 4294967295);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)//Position - 0x1694
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

int func_21(char* sParam0)//Position - 0x16E5
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16F8
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x1746
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_30();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_28();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_24();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x1A12
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_25()//Position - 0x1A44
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_26()//Position - 0x1AD9
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1B00
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()//Position - 0x1B99
{
	if (func_29(14))
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
		Global_38B1 = func_70();
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

bool func_29(int iParam0)//Position - 0x1C3B
{
	return Global_8D15 == iParam0;
}

void func_30()//Position - 0x1C49
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x1CA1
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

void func_32()//Position - 0x1CDC
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1D33
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

void func_34(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D89
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_35()//Position - 0x1E24
{
	if (func_36(0))
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

bool func_36(bool bParam0)//Position - 0x1E6F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_37(var uParam0)//Position - 0x1E9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(AUDIO::_0x0626A247D2405330(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, true, 0) && !uParam0->f_1A)
			{
				if (func_38(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_19E56.f_2725.f_68 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		iLocal_59 = (MISC::GET_GAME_TIMER() + iLocal_60);
	}
	return iVar2;
}

int func_38(int iParam0)//Position - 0x1F41
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_42(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_41(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_40(iVar0, ENTITY::GET_ENTITY_HEALTH(iParam0) < 875);
				func_39(iVar0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)//Position - 0x1FA1
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_51, iParam0);
		iLocal_52 = iParam0;
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_51, iParam0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1FC5
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_51, iParam0 + 5);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_51, iParam0 + 5);
	}
}

int func_41(int iParam0, int iParam1)//Position - 0x1FE9
{
	if (iParam0 == iLocal_43[iParam1])
	{
		return 1;
	}
	if (iLocal_43[iParam1] != joaat("TORNADO2"))
	{
		return 0;
	}
	if (iParam0 == joaat("TORNADO"))
	{
		return 1;
	}
	if (iParam0 == joaat("TORNADO2"))
	{
		return 1;
	}
	if (iParam0 == joaat("TORNADO3"))
	{
		return 1;
	}
	if (iParam0 == joaat("TORNADO4"))
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x204B
{
	if (!func_75(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 750)
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
	{
		return 1;
	}
	return VEHICLE::_0x42A4BEB35D372407(iParam0) > 0;
}

bool func_43(var uParam0)//Position - 0x2094
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_44(var uParam0)//Position - 0x20AD
{
	vector3 vVar0;
	
	uParam0->f_1A = 0;
	if (MISC::IS_POSITION_OCCUPIED(uParam0->f_13[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, AUDIO::_0x0626A247D2405330(), 0))
	{
		uParam0->f_1A = 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(uParam0->f_13[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, AUDIO::_0x0626A247D2405330(), 0))
	{
		uParam0->f_1A = 1;
	}
	else
	{
		vVar0 = { func_45(uParam0->f_13[0 /*3*/], uParam0->f_13[1 /*3*/], 0.5f, 1) };
		uParam0->f_1A = MISC::IS_POSITION_OCCUPIED(vVar0, 1.2f, 0, 1, 1, 0, 0, AUDIO::_0x0626A247D2405330(), 0);
		if (uParam0->f_1A)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_11 = (uParam0->f_11 - uParam0->f_12);
		if (uParam0->f_11 <= 0f)
		{
			uParam0->f_11 = 0f;
			uParam0->f_4 = 2;
			AUDIO::STOP_SOUND(iLocal_47);
			iLocal_48 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_48)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_47, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_48 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_11 = (uParam0->f_11 + uParam0->f_12);
		if (uParam0->f_11 >= 1f)
		{
			uParam0->f_11 = 1f;
			uParam0->f_4 = 1;
			AUDIO::STOP_SOUND(iLocal_47);
			iLocal_48 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(4294967295, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_48)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_47, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_48 = 1;
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, uParam0->f_11, 0);
	}
}

Vector3 func_45(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x226D
{
	if (bParam3)
	{
		fParam2 = func_46(fParam2, 0f, 1f);
	}
	return vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1 - vParam0;
}

float func_46(float fParam0, float fParam1, float fParam2)//Position - 0x2296
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

void func_47(int iParam0)//Position - 0x22BD
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_617E, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_B5F8[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, bool bParam2)//Position - 0x22FA
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (Global_B5F8[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_B5F8[iVar0 /*203*/].f_A[(Global_B5F8[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_49(int iParam0, int iParam1, bool bParam2)//Position - 0x2421
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0, 1);
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
			func_50(Global_B5F8[iVar0 /*203*/].f_4[iVar1], Global_B5F8[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x261D
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
		Var3 = { func_10(Global_91A4[iVar5 /*12*/].f_1) };
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
			Var3 = { func_10(Global_91A4[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B48E[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_51(int iParam0, bool bParam1)//Position - 0x29F1
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
	
	iVar0 = func_11(iParam0);
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

void func_52(int iParam0)//Position - 0x2C09
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_44);
			func_54("EPS_DROP_PERSON", 4294967295);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
				if (func_75(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				func_54("EPS_DROP_ESCAPE", 4294967295);
				func_76(2);
			}
			break;
	}
}

int func_53()//Position - 0x2CA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_75(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iLocal_54 = 0;
		return 0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
	if (!func_75(iVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(ENTITY::GET_ENTITY_MODEL(iVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_54)
					{
						func_54("EPS_DROP_FAIL", 4294967295);
						iLocal_54 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(char* sParam0, int iParam1)//Position - 0x2D38
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_55(int iParam0)//Position - 0x2D4F
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_56(int iParam0)//Position - 0x2D6F
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_41, 1);
			Local_41.f_4 = 4;
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
			{
				FIRE::STOP_FIRE_IN_RANGE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 1.5f);
			}
			*iParam0 = 2;
			iLocal_50 = 0;
			iLocal_58 = 0;
			break;
		
		case 2:
			switch (iLocal_50)
			{
				case 0:
					if (iLocal_55 == 1 && !Local_41.f_1A)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
					}
					if (func_75(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0) != AUDIO::_0x0626A247D2405330())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_41.f_1A)
					{
						if (iLocal_56 == 0)
						{
							if (func_60(iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, true, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_58 = 0;
									iLocal_56 = 1;
									iLocal_55 = 0;
								}
							}
						}
						if (func_58(AUDIO::_0x0626A247D2405330(), Local_41.f_E, 0) < 3f)
						{
							func_55(&iLocal_44);
						}
						if (func_58(AUDIO::_0x0626A247D2405330(), Local_41, 0) > (15f + 5f))
						{
							func_83(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_56 = 0;
							iLocal_55 = 0;
							iLocal_58 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_41) && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							func_83(&Local_41, 2);
							Local_41.f_4 = 3;
							iLocal_58 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_41.f_1A && !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0)) && PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()))
					{
						if (iLocal_58 == 0)
						{
							iLocal_58 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_58) > 500)
						{
							if (iLocal_55 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_54("EPS_DROP_MESS", 4294967295);
								iLocal_55 = 1;
								iLocal_56 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_57(var uParam0)//Position - 0x2F81
{
	return (!uParam0->f_1A && !MISC::IS_POSITION_OCCUPIED(uParam0->f_E, 6.2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_58(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x2FAA
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

void func_59(char* sParam0, int iParam1, int iParam2)//Position - 0x2FE4
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_60(int iParam0)//Position - 0x2FFD
{
	if (func_61(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x3027
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

void func_62(int iParam0)//Position - 0x3048
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(iLocal_44))
			{
				iLocal_44 = HUD::ADD_BLIP_FOR_COORD(vLocal_40);
				if (HUD::DOES_BLIP_EXIST(iLocal_44))
				{
					HUD::SET_BLIP_SPRITE(iLocal_44, 206);
					HUD::SET_BLIP_COLOUR(iLocal_44, 42);
				}
			}
			*iParam0 = 2;
			iLocal_50 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
			}
			if (func_75(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0) != AUDIO::_0x0626A247D2405330())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(AUDIO::_0x0626A247D2405330(), Local_41, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_76(2);
			break;
	}
}

void func_63(int iParam0)//Position - 0x313E
{
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_44);
			if (iLocal_57 == 0)
			{
				func_54("EPS_DROP_WANTED", 4294967295);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				if (iLocal_57 == 0)
				{
					func_54("EPS_DROP_ESCAPE", 4294967295);
				}
				func_76(2);
			}
			iLocal_57 = 1;
			break;
	}
}

void func_64(int iParam0)//Position - 0x31B9
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_53 = 0;
			iLocal_55 = 0;
			func_55(&iLocal_44);
			break;
		
		case 2:
			if (func_61(AUDIO::_0x0626A247D2405330()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), Local_41.f_6[0 /*3*/], Local_41.f_6[1 /*3*/], Local_41.f_6.f_7, 0, true, 0) && func_43(&Local_41))
				{
					ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), 200.7367f);
				}
			}
			if (func_58(AUDIO::_0x0626A247D2405330(), Local_41, 0) > (15f + 5f))
			{
				func_83(&Local_41, 2);
				if (Local_41.f_4 != 2)
				{
					Local_41.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_53 == 0 && func_61(AUDIO::_0x0626A247D2405330()))
			{
				if (iLocal_63 != PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1))
				{
					iLocal_63 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
					func_54("EPS_DROP_HELP", 4294967295);
					iLocal_53 = 1;
				}
			}
			iLocal_54 = 0;
			func_76(1);
			break;
	}
}

void func_65()//Position - 0x32E6
{
	func_67();
	while (MISC::GET_MISSION_FLAG() || func_70() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_66();
}

void func_66()//Position - 0x3311
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_75(AUDIO::_0x0626A247D2405330()))
	{
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar1);
	iLocal_64 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar0, vVar1, 0, 1, 1, 1);
	iLocal_51 = Global_19E56.f_2725.f_67;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (func_11(2) == 4294967295)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()//Position - 0x33B5
{
	if (HUD::DOES_BLIP_EXIST(iLocal_44))
	{
		func_55(&iLocal_44);
		iLocal_44 = 0;
	}
	Global_19E56.f_2725.f_67 = iLocal_51;
	func_55(&iLocal_44);
	func_77(0);
	func_69();
	func_68(&Local_41);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_64, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8.25f, 1);
}

void func_68(var uParam0)//Position - 0x3436
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_69()//Position - 0x3462
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43[iVar0]);
		iVar0++;
	}
}

int func_70()//Position - 0x3489
{
	func_71();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_71()//Position - 0x34A2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_74(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_73(AUDIO::_0x0626A247D2405330());
			if (func_72(iVar0) && (!func_29(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_72(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_72(int iParam0)//Position - 0x359F
{
	return iParam0 < 3;
}

int func_73(int iParam0)//Position - 0x35AB
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)//Position - 0x35E8
{
	if (func_72(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_75(int iParam0)//Position - 0x3612
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_76(int iParam0)//Position - 0x3630
{
	iLocal_46 = iParam0;
	iLocal_45 = 1;
}

void func_77(bool bParam0)//Position - 0x363F
{
	func_78(44, bParam0);
	func_78(45, bParam0);
	func_78(46, bParam0);
	func_78(47, bParam0);
	func_78(48, bParam0);
	func_78(49, bParam0);
	func_78(50, bParam0);
}

void func_78(int iParam0, bool bParam1)//Position - 0x367F
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_80(iParam0, 0))
		{
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_79(iParam0, 0, 0);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x36DC
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

bool func_80(int iParam0, int iParam1)//Position - 0x3717
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_81(vector3 vParam0, float fParam1, var uParam2, var uParam3)//Position - 0x373A
{
	vector3 vVar0;
	
	vVar0 = { fParam1, fParam1, fParam1 };
	*uParam2 = { vParam0 - vVar0 };
	*uParam3 = { vParam0 + vVar0 };
}

void func_82(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x3766
{
	*(uParam0[0 /*3*/]) = { vParam1 };
	*(uParam0[1 /*3*/]) = { vParam2 };
	uParam0->f_7 = fParam3;
}

void func_83(var uParam0, int iParam1)//Position - 0x378A
{
	uParam0->f_5 = iParam1;
}

void func_84(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, float fParam6, vector3 vParam7, vector3 vParam8)//Position - 0x3798
{
	uParam0->f_3 = iParam1;
	*uParam0 = { vParam2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_13[0 /*3*/] = { vParam7 };
	uParam0->f_13[1 /*3*/] = { vParam8 };
	uParam0->f_E = { vParam3 };
	func_82(&(uParam0->f_6), vParam4, vParam5, fParam6);
}

int func_85(int iParam0)//Position - 0x37EE
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

bool func_86()//Position - 0x3848
{
	return func_3() == 5;
}

void func_87()//Position - 0x3856
{
	iLocal_43[0] = joaat("VACCA");
	iLocal_43[1] = joaat("SURANO");
	iLocal_43[2] = joaat("TORNADO2");
	iLocal_43[3] = joaat("SUPERD");
	iLocal_43[4] = joaat("DOUBLE");
	vLocal_42[0 /*3*/] = 1;
	vLocal_42[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_42[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_42[1 /*3*/] = 2;
	vLocal_42[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_42[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_42[2 /*3*/] = 3;
	vLocal_42[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_42[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_42[3 /*3*/] = 4;
	vLocal_42[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_42[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_42[4 /*3*/] = 5;
	vLocal_42[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_42[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()//Position - 0x391C
{
	int iVar0;
	
	iLocal_51 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MISC::SET_BIT(&iLocal_51, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)//Position - 0x3941
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_90()//Position - 0x396E
{
	int iVar0;
	
	func_55(&iLocal_44);
	func_77(0);
	func_69();
	func_68(&Local_41);
	Global_19E56.f_2725.f_67 = iLocal_51;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_61[0 /*3*/], vLocal_61[1 /*3*/], 8.25f, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_64, 0);
	if (iLocal_230 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_230);
		iLocal_230 = 0;
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, 4294967295);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_91(int iParam0)//Position - 0x3A4B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iVar0], iVar1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)//Position - 0x3AA5
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_3A[iParam0] = iParam1;
}

