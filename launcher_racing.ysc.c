#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
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
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_65[3] = { 0f, 0f, 0f };
	vector3 vLocal_66[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = 4294967295;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	iLocal_72 = joaat("FELTZER2");
	iLocal_75 = 1;
	vLocal_83 = { 0f, 0f, 0f };
	vLocal_84 = { 1f, 1f, 1f };
	vLocal_85 = { 0f, 0f, 0f };
	vLocal_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0x80BDE252D8D954BC(1);
	vLocal_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_210(0);
	}
	func_207();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!func_206(0, 8))
			{
				func_210(0);
			}
			if (!func_205(Local_43))
			{
				func_210(0);
			}
			break;
		
		case 3:
			if (!func_206(0, 7))
			{
				func_210(0);
			}
			break;
		
		case 0:
			func_210(0);
			break;
	}
	func_199();
	if (!func_175())
	{
		func_210(0);
	}
	func_169();
	while (true)
	{
		func_166(&uLocal_90);
		if (func_175())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					
					case 1:
						func_157();
						func_126();
						break;
					
					case 2:
						func_61();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_210(0);
			}
		}
		else
		{
			func_210(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19F
{
	if (!bLocal_53)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B8
{
	func_8(4294967295);
	func_7(0);
	func_6(vLocal_44);
	func_5();
	Global_14065C = 1;
	Global_14065C.f_1 = Local_43;
	StringCopy(&(Global_14065C.f_2), func_4(), 24);
	StringCopy(&(Global_14065C.f_8), func_3(Local_43), 32);
	Global_14065C.f_10 = { vLocal_44 };
	Global_14085C = 1;
	func_210(1);
}

char* func_3(int iParam0)//Position - 0x213
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()//Position - 0x4EF
{
	char* sVar0;
	
	if (MISC::IS_PS3_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_XBOX360_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		sVar0 = "2535285330962926";
	}
	else if (MISC::IS_PC_VERSION())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()//Position - 0x54F
{
	MISC::SET_BIT(&Global_1406A7, 0);
}

void func_6(vector3 vParam0)//Position - 0x560
{
	Global_1406A7.f_6 = { vParam0 };
}

void func_7(int iParam0)//Position - 0x574
{
	Global_1406A7.f_2 = iParam0;
}

void func_8(int iParam0)//Position - 0x584
{
	Global_1406A7.f_1 = iParam0;
}

void func_9()//Position - 0x594
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_43.f_2 = 4294967295;
	if (func_60(AUDIO::_0x0626A247D2405330()))
	{
		if (!PED::IS_PED_WEARING_HELMET(AUDIO::_0x0626A247D2405330()))
		{
			PED::SET_PED_HELMET(AUDIO::_0x0626A247D2405330(), 0);
		}
	}
	while (!func_54())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_43.f_1 != 3)
	{
		func_16(func_49(), 1, Local_43.f_3);
		iVar0 = MISC::GET_GAME_TIMER() + 1500;
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || MISC::GET_GAME_TIMER() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		iVar2 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar2))
		{
			PLAYER::SET_PLAYER_CONTROL(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()//Position - 0x643
{
	if (!func_11(0))
	{
		SCRIPT::REQUEST_SCRIPT("mission_Race");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_Race"))
		{
			SCRIPT::REQUEST_SCRIPT("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_43, 6, 25000);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_Race");
	func_210(1);
}

bool func_11(bool bParam0)//Position - 0x697
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6C2
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_13(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_1D) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)//Position - 0x851
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

int func_14(int iParam0)//Position - 0x87D
{
	if (func_15(iParam0))
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

int func_15(int iParam0)//Position - 0x8A7
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

int func_16(int iParam0, int iParam1, int iParam2)//Position - 0x8C8
{
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_17(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x911
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
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
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_26(5))
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
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_26(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
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
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_26(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_25(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
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
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
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
	func_19(iParam0);
	if (Global_8D15 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)//Position - 0xF10
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

void func_19(int iParam0)//Position - 0x1192
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

void func_20(int iParam0)//Position - 0x11EC
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_23(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_23(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_23(137, 0, 4294967295, 1);
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
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_22() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_22() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_21(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)//Position - 0x12FF
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

int func_22()//Position - 0x13AE
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x13BB
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
		iParam2 = func_24();
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

int func_24()//Position - 0x1923
{
	return Global_1407E0;
}

void func_25(int iParam0)//Position - 0x192F
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_26(int iParam0)//Position - 0x194F
{
	if (iParam0 == 8)
	{
		return func_27(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_27(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_27(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_27(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_22() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_27(int iParam0, int iParam1, int iParam2)//Position - 0x19D3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_24();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)//Position - 0x1A10
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

int func_29(int iParam0, int iParam1)//Position - 0x1D28
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_24();
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

int func_30(bool bParam0)//Position - 0x2020
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
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)//Position - 0x20D7
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)//Position - 0x20F2
{
	if (func_44(14) && !func_43(iParam0))
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
	if (func_42(&Global_412216))
	{
		if (func_40(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_412216, iParam0))
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

int func_33(var uParam0, int iParam1)//Position - 0x218F
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)//Position - 0x2240
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)//Position - 0x22BB
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)//Position - 0x22CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_412215 - 0.5f));
}

void func_37(var uParam0, int iParam1)//Position - 0x2300
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)//Position - 0x2310
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

float func_39(var uParam0)//Position - 0x232D
{
	return uParam0->f_50;
}

bool func_40(var uParam0, int iParam1)//Position - 0x2339
{
	return func_41(uParam0, iParam1) != 4294967295;
}

int func_41(var uParam0, int iParam1)//Position - 0x234B
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

bool func_42(var uParam0)//Position - 0x2378
{
	return uParam0->f_4F == 1;
}

int func_43(int iParam0)//Position - 0x2386
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

bool func_44(int iParam0)//Position - 0x23D6
{
	return Global_8D15 == iParam0;
}

int func_45(int iParam0, int iParam1)//Position - 0x23E4
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

void func_46(int iParam0, int iParam1)//Position - 0x2435
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)//Position - 0x2458
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

void func_48()//Position - 0x24B5
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

int func_49()//Position - 0x252A
{
	func_50();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_50()//Position - 0x2543
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_53(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_52(AUDIO::_0x0626A247D2405330());
			if (func_51(iVar0) && (!func_44(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_51(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_51(int iParam0)//Position - 0x2640
{
	return iParam0 < 3;
}

int func_52(int iParam0)//Position - 0x264C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)//Position - 0x2689
{
	if (func_51(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_54()//Position - 0x26B3
{
	int iVar0;
	
	iVar0 = func_55(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_55(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x26D7
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
		if (func_59(0))
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *uParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*uParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *uParam0)
		{
			return 1;
		}
		*uParam0 = 4294967295;
	}
	if (*uParam0 == 4294967295)
	{
		if (!func_57(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*uParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_56(uParam0, iParam4);
		}
	}
	return 2;
}

void func_56(var uParam0, int iParam1)//Position - 0x280E
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

bool func_57(int iParam0)//Position - 0x285D
{
	return func_58(iParam0, Global_8D15);
}

int func_58(int iParam0, int iParam1)//Position - 0x286E
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

int func_59(int iParam0)//Position - 0x2A4F
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)//Position - 0x2A71
{
	if (func_15(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()//Position - 0x2A91
{
	int iVar0;
	
	switch (iLocal_49)
	{
		case 0:
			if (func_124(0, 4294967295, 0))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				func_112();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (func_74())
			{
				iLocal_49 = 2;
			}
			break;
		
		case 2:
			iVar0 = PLAYER::GET_PLAYER_INDEX();
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
			PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
			func_65(0, 1, 1, 0, 0);
			func_62(1, 4294967295);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
				iLocal_42 = 1;
			}
			break;
	}
}

void func_62(bool bParam0, int iParam1)//Position - 0x2B23
{
	int iVar0;
	
	if (!func_64(&iVar0, 0, iParam1))
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
		func_63(&(Global_43D7.f_161A[iVar0 /*10*/]));
		Global_43D7.f_1657[iVar0] = 0;
	}
	else
	{
		Global_43D7.f_1657[iVar0] = 0;
	}
}

void func_63(int iParam0)//Position - 0x2BE1
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

int func_64(var uParam0, bool bParam1, int iParam2)//Position - 0x2C0A
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

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2CA7
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_73(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_72())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_71(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_73(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_71(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_69(CAM::_0xDC9DA9E8789F5246())) && !func_67(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_66()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_69(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_66()//Position - 0x2DD0
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_67(int iParam0, int iParam1)//Position - 0x2DED
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_68(4294967295, 0) == 8;
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

int func_68(int iParam0, bool bParam1)//Position - 0x2E38
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_24();
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

int func_69(int iParam0)//Position - 0x2E79
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_70())
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

bool func_70()//Position - 0x2EBB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_71(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2ECC
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

int func_72()//Position - 0x2EFF
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)//Position - 0x2F26
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

int func_74()//Position - 0x2F49
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_111(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	if (iLocal_51 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > 4294967232 && iVar1 < 64) && iVar0 > 4294967232) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < 4294967232 || PAD::IS_CONTROL_JUST_PRESSED(2, 188));
	bVar5 = (iVar1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar7 = PAD::IS_CONTROL_JUST_PRESSED(2, 202);
	bVar8 = (iVar1 < 4294967232 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_51 = 1;
			}
			func_110(iLocal_50, 1, 1);
		}
	}
	func_75(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
	return 0;
}

void func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x30A5
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
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_107(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43D7)
	{
		if (func_105(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_104())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_104())
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
					StringCopy(&cVar64, func_103(29), 64);
					StringCopy(&cVar65, func_100(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
					{
						func_99(Global_43D4, Global_43D5, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_99(Global_43D4, (Global_43D5 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43D5 + fVar56) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_43D7.f_1)) != 0)
				{
					func_98();
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
						func_98();
						func_96((((Global_43D4 + fParam5) - 0.00390625f) - func_97("CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663)), ((Global_43D5 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43D7.f_1664, Global_43D7.f_1663);
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
				func_99(Global_43D4, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_105(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar40);
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
				func_99(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_95(fVar40);
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
					func_105(Global_43D7.f_129E, 1, 1, &fVar36, &fVar37, bParam7);
					func_94(Global_43D7.f_129E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_129E), func_100(Global_43D7.f_129E, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_105(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43D4 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_95(fVar40);
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
				func_99(Global_43D4, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_95(fVar40);
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
					func_105(Global_411BEA.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_94(Global_411BEA.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_103(Global_411BEA.f_43), func_100(Global_411BEA.f_43, 1), ((Global_43D4 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
													if (func_105(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
													if (func_105(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_105(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_94(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[(iVar22 + iVar28)]), func_100(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[(iVar22 + iVar28)]), func_100(Global_43D7.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
													if (func_105(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_105(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_94(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43D7.f_1151[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[(iVar22 + iVar14)]), func_100(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (Global_43D4 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43D7.f_13D9[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[(iVar22 + iVar14)]), func_100(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[(iVar22 + iVar14)]), func_100(Global_43D7.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_105(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43D7.f_13D9[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										if (func_105(Global_43D7.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_105(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43D7.f_13D9[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_94(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_103(26), func_100(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_105(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_105(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_94(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_103(27), func_100(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_105(Global_43D7.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_94(Global_43D7.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_103(Global_43D7.f_1151[iVar22]), func_100(Global_43D7.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_82(Global_43D7.f_1151[iVar22])), (fVar37 * func_82(Global_43D7.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_105(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_77(0);
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
		func_76(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_76(int iParam0)//Position - 0x5D0C
{
	Global_14E696.f_437 = iParam0;
}

void func_77(int iParam0)//Position - 0x5D1D
{
	if (func_81())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_80(0))
		{
			func_78(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_78(int iParam0)//Position - 0x5D50
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
	if (!func_72())
	{
		Global_38B1.f_1 = 3;
	}
}

void func_79(bool bParam0, bool bParam1)//Position - 0x5DCA
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

int func_80(int iParam0)//Position - 0x5E3E
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

bool func_81()//Position - 0x5E98
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

float func_82(int iParam0)//Position - 0x5EAA
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

void func_83(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x5F19
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_84(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5F38
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_85()//Position - 0x5F56
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

void func_86(bool bParam0)//Position - 0x5F67
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

void func_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5FAD
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

void func_88(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x615B
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

void func_89(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x63E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_107(bParam4, bParam8))
	{
		return;
	}
	if (func_92())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_67(CAM::_0xDC9DA9E8789F5246(), 0))
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

void func_90(char* sParam0)//Position - 0x68ED
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_91(char* sParam0)//Position - 0x68FF
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_92()//Position - 0x690D
{
	vector3 vVar0;
	
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	if (func_93())
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

int func_93()//Position - 0x697B
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6995
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

void func_95(float fParam0)//Position - 0x6A84
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

void func_96(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6AE3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_97(char* sParam0, int iParam1, int iParam2)//Position - 0x6B06
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
	func_98();
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_98()//Position - 0x6B48
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

void func_99(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6BD2
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_100(int iParam0, bool bParam1)//Position - 0x6C01
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1ACF[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_102(CAM::_0xDC9DA9E8789F5246()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_101(&uVar1);
			}
		}
		else
		{
			return func_101(&(Global_43D7.f_1ACF[iParam0 /*16*/]));
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

var func_101(var uParam0)//Position - 0x706E
{
	return uParam0;
}

struct<13> func_102(int iParam0)//Position - 0x7078
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_103(int iParam0)//Position - 0x708F
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_177E[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_177E[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_102(CAM::_0xDC9DA9E8789F5246()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_101(&uVar0);
		}
		else
		{
			return func_101(&(Global_43D7.f_177E[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_104()//Position - 0x7104
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

int func_105(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x7136
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_103(iParam0), 64);
	StringCopy(&cVar1, func_100(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_104())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_104())
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
		vVar7.x = (vVar7.x * (func_106(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_106(iParam0) / fVar4));
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

float func_106(int iParam0)//Position - 0x72E7
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

int func_107(bool bParam0, bool bParam1)//Position - 0x7386
{
	if (Global_252F9E.f_761.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_109(8, 4294967295) && func_108() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_11729) || Global_43D7.f_1F9A) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_16C64.f_571)
	{
		return 0;
	}
	return 1;
}

int func_108()//Position - 0x7423
{
	return Global_140818;
}

bool func_109(int iParam0, int iParam1)//Position - 0x742F
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

void func_110(int iParam0, bool bParam1, int iParam2)//Position - 0x746A
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

void func_111(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x75BC
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_112()//Position - 0x7691
{
	func_123(0, 0);
	func_122(1, 0, 0, 0, 0);
	func_121(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		func_120("SEA_MENU");
	}
	else
	{
		func_120("STREET_MENU");
	}
	func_116(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_116(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_115(201, "ITEM_SELECT", 4294967295);
	func_115(202, "ITEM_EXIT", 4294967295);
	func_114(11, "ITEM_SCROLL", 4294967295);
	func_113(0);
	func_110(0, 1, 1);
	iLocal_50 = 0;
}

void func_113(int iParam0)//Position - 0x7716
{
	Global_43D7.f_1665 = iParam0;
}

void func_114(int iParam0, char* sParam1, int iParam2)//Position - 0x7726
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

void func_115(int iParam0, char* sParam1, int iParam2)//Position - 0x77D6
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

void func_116(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x7885
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
		func_119(Global_43D7.f_1460, 1);
	}
	else
	{
		func_119(Global_43D7.f_1460, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_118(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
		if (Global_43D7.f_13D1[Global_43D7.f_1461])
		{
			func_105(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_117(&(Global_43D7.f_49[Global_43D7.f_1462 /*6*/]));
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

float func_117(char* sParam0)//Position - 0x7A91
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_118(char* sParam0)//Position - 0x7AAD
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

void func_119(int iParam0, bool bParam1)//Position - 0x7AEA
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

void func_120(char* sParam0)//Position - 0x7B36
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

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7B81
{
	Global_43D7.f_13D9[0] = iParam0;
	Global_43D7.f_13D9[1] = iParam1;
	Global_43D7.f_13D9[2] = iParam2;
	Global_43D7.f_13D9[3] = iParam3;
	Global_43D7.f_13D9[4] = iParam4;
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7BC0
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

void func_123(bool bParam0, bool bParam1)//Position - 0x7C6A
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

bool func_124(char* sParam0, int iParam1, bool bParam2)//Position - 0x814E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_64(&iVar0, 1, iParam1))
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
	bVar2 = func_125(&(Global_43D7.f_161A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_125(var uParam0)//Position - 0x8244
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

void func_126()//Position - 0x82E6
{
	int iVar0;
	
	if (func_156())
	{
		if (func_139())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_137(iVar0);
			if (func_60(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3))
					{
						BRAIN::STOP_ANIM_TASK(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3238002688);
					}
					func_128(iVar0);
				}
			}
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (PAD::IS_CONTROL_JUST_RELEASED(0, 51))
			{
				iLocal_76 = 1;
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_127();
		if (!iLocal_46)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
			iLocal_46 = 1;
		}
	}
}

void func_127()//Position - 0x8397
{
	if (iLocal_45 && MISC::GET_GAME_TIMER() > iLocal_48)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		iLocal_45 = 0;
	}
}

void func_128(int iParam0)//Position - 0x83B8
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iParam0], 0) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		switch (iLocal_77)
		{
			case 0:
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(iLocal_56[iParam0], true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			
			case 1:
				BRAIN::OPEN_SEQUENCE_TASK(&iVar0);
				BRAIN::TASK_LOOK_AT_ENTITY(0, AUDIO::_0x0626A247D2405330(), 4294967295, 0, 2);
				BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(0, AUDIO::_0x0626A247D2405330(), 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iVar0);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_56[iParam0], iVar0);
				BRAIN::CLEAR_SEQUENCE_TASK(&iVar0);
				iLocal_77 = 2;
				break;
			
			case 2:
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_56[iParam0], 242628503) != 1 || PED::IS_PED_FACING_PED(iLocal_56[iParam0], AUDIO::_0x0626A247D2405330(), 20f))
				{
					BRAIN::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_56[iParam0], AUDIO::_0x0626A247D2405330(), 4294967295);
					if (!iLocal_79)
					{
						func_135(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_135(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_56[iParam0]))
				{
					func_133(&iLocal_80);
					BRAIN::TASK_PLAY_ANIM(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, 4294967295, 9, 0, 0, 0, 0);
					iLocal_77 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(iLocal_56[iParam0], true), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (func_129(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (func_129(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_129(int iParam0)//Position - 0x857F
{
	if (func_132(iParam0))
	{
		if (func_131(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_130(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_130(bool bParam0)//Position - 0x85BE
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

bool func_131(var uParam0)//Position - 0x8616
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_132(var uParam0)//Position - 0x8626
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_133(int iParam0)//Position - 0x8636
{
	func_134(iParam0, 0f);
}

void func_134(int iParam0, float fParam1)//Position - 0x8645
{
	iParam0->f_1 = (func_130(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_135(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x8673
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_136(iParam3), 0);
}

int func_136(int iParam0)//Position - 0x868C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_137(int iParam0)//Position - 0x8881
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && !func_138())
	{
		if (func_60(iLocal_56[iParam0]))
		{
			if (iLocal_46 && ENTITY::GET_ENTITY_SPEED(AUDIO::_0x0626A247D2405330()) < 20f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_56[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_138()//Position - 0x88DE
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_139()//Position - 0x88F7
{
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (func_155())
		{
			return 0;
		}
		if (func_154(func_49()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_151("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_151("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			func_150(&iLocal_0);
			iLocal_0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
			if (!func_145())
			{
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if ((ENTITY::GET_ENTITY_HEALTH(iLocal_0) <= 200 || FIRE::IS_ENTITY_ON_FIRE(iLocal_0)) || func_144())
			{
				func_143("RACE_VehDmg");
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				return 0;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_0, 4294967295, 0) != AUDIO::_0x0626A247D2405330())
			{
				func_140();
				return 0;
			}
			else
			{
				if (func_80(0) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
				{
					func_127();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_151("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 2:
						func_151("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 3:
						func_143("SEA_PLAY");
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else
		{
			func_150(&iLocal_0);
			func_140();
			return 0;
		}
	}
	return 0;
}

void func_140()//Position - 0x8A69
{
	char* sVar0;
	
	if (Local_43.f_1 == 3)
	{
		if (func_14(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_142(sVar0))
		{
			func_141(sVar0);
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!func_142("STREET_NA_BIKE"))
		{
			func_141("STREET_NA_BIKE");
			iLocal_45 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (!func_142("STREET_NA_CAR"))
	{
		func_141("STREET_NA_CAR");
		iLocal_45 = 1;
		iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
	}
}

void func_141(char* sParam0)//Position - 0x8AFB
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_142(char* sParam0)//Position - 0x8B11
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_143(char* sParam0)//Position - 0x8B24
{
	if (!func_142(sParam0))
	{
		func_141(sParam0);
	}
}

int func_144()//Position - 0x8B3C
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 6, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_145()//Position - 0x8BB8
{
	int iVar0;
	char* sVar1;
	
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_149();
			if (iVar0 == 1)
			{
				func_143("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_143("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_147();
			if (iVar0 == 1)
			{
				func_143("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_143("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_146())
			{
				if (func_14(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_143(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_146()//Position - 0x8C69
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("SEASHARK") || iVar0 == joaat("SEASHARK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147()//Position - 0x8CAB
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (func_148(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("POLICE4") || iVar0 == joaat("POLICEOLD1")) || iVar0 == joaat("POLICEOLD2")) || iVar0 == joaat("FBI")) || iVar0 == joaat("FBI2")) || iVar0 == joaat("LGUARD")) || iVar0 == joaat("SHERIFF")) || iVar0 == joaat("SHERIFF2")) || iVar0 == joaat("PRANGER")) || iVar0 == joaat("AMBULANCE")) || iVar0 == joaat("FIRETRUK"))
			{
				return 1;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("AMBULANCE");
			iVar2[1] = joaat("BENSON");
			iVar2[2] = joaat("BIFF");
			iVar2[3] = joaat("BUS");
			iVar2[4] = joaat("FIRETRUK");
			iVar2[5] = joaat("FORKLIFT");
			iVar2[6] = joaat("MULE");
			iVar2[7] = joaat("MULE2");
			iVar2[8] = joaat("PACKER");
			iVar2[9] = joaat("PHANTOM");
			iVar2[10] = joaat("MOWER");
			iVar2[11] = joaat("STOCKADE");
			iVar2[12] = joaat("SQUALO");
			iVar2[13] = joaat("MAVERICK");
			iVar2[14] = joaat("POLMAV");
			iVar2[15] = joaat("AIRTUG");
			iVar2[16] = joaat("BOXVILLE3");
			iVar2[17] = joaat("ANNIHILATOR");
			iVar2[18] = joaat("DINGHY");
			iVar2[19] = 0;
			iVar2[20] = joaat("RIPLEY");
			iVar2[21] = joaat("TRASH");
			iVar2[22] = joaat("BURRITO");
			iVar2[23] = joaat("PONY");
			iVar2[24] = joaat("SPEEDO");
			iVar2[25] = joaat("MARQUIS");
			iVar2[26] = joaat("SANCHEZ");
			iVar2[27] = joaat("AIRTUG");
			iVar2[28] = joaat("TACO");
			iVar2[29] = joaat("BARRACKS");
			iVar2[30] = joaat("ROMERO");
			iVar2[31] = joaat("BLAZER");
			iVar2[32] = joaat("BLAZER2");
			iVar2[33] = joaat("BODHI2");
			iVar2[34] = joaat("BOXVILLE2");
			iVar2[35] = joaat("BULLDOZER");
			iVar2[36] = joaat("CADDY");
			iVar2[37] = joaat("CADDY2");
			iVar2[38] = joaat("CAMPER");
			iVar2[39] = joaat("TIPTRUCK");
			iVar2[40] = joaat("TOURBUS");
			iVar2[41] = joaat("TOWTRUCK");
			iVar2[42] = joaat("TOWTRUCK2");
			iVar2[43] = joaat("TRACTOR");
			iVar2[44] = joaat("TRACTOR2");
			iVar2[45] = joaat("UTILLITRUCK");
			iVar2[46] = joaat("UTILLITRUCK2");
			iVar2[47] = joaat("UTILLITRUCK3");
			iVar2[48] = joaat("RATLOADER");
			iVar2[49] = joaat("DLOADER");
			iVar2[50] = joaat("DOCKTUG");
			iVar2[51] = joaat("DUMP");
			iVar2[52] = joaat("GBURRITO");
			iVar2[53] = joaat("HANDLER");
			iVar2[54] = joaat("HAULER");
			iVar2[55] = joaat("JOURNEY");
			iVar2[56] = joaat("RENTALBUS");
			iVar2[57] = joaat("MIXER");
			iVar2[58] = joaat("RHINO");
			iVar2[59] = joaat("CUTTER");
			iVar2[60] = joaat("POUNDER");
			iVar2[61] = joaat("TIPTRUCK2");
			iVar2[62] = joaat("MIXER2");
			iVar2[63] = joaat("RUBBLE");
			iVar2[64] = joaat("SCRAP");
			iVar2[65] = joaat("ARMYTANKER");
			iVar2[66] = joaat("BARRACKS2");
			iVar2[67] = joaat("AIRBUS");
			iVar2[68] = joaat("COACH");
			iVar2[69] = joaat("PBUS");
			iVar2[70] = joaat("RIOT");
			iVar2[71] = 0;
			iVar2[72] = joaat("STOCKADE3");
			iVar2[73] = joaat("FLATBED");
			iVar2[74] = joaat("BOXVILLE");
			iVar2[75] = joaat("BURRITO2");
			iVar2[76] = joaat("BURRITO3");
			iVar2[77] = joaat("BURRITO4");
			iVar2[78] = joaat("RUMPO");
			iVar2[79] = joaat("SPEEDO2");
			iVar2[80] = 0;
			iVar2[81] = joaat("BLIMP");
			iVar2[82] = joaat("BLIMP2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x914E
{
	switch (iParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return 1;
			break;
	}
	return 0;
}

int func_149()//Position - 0x91A7
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_0);
			if (iVar0 == joaat("POLICEB"))
			{
				return 1;
			}
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_150(int iParam0)//Position - 0x91F3
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_151(char* sParam0, int iParam1)//Position - 0x922B
{
	if (!func_153(sParam0, iParam1))
	{
		func_152(sParam0, iParam1);
	}
}

void func_152(char* sParam0, int iParam1)//Position - 0x9247
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

int func_153(char* sParam0, int iParam1)//Position - 0x9263
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_154(int iParam0)//Position - 0x927C
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

int func_155()//Position - 0x92D4
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
			if (func_15(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					if (Local_43.f_1 == 3 && ENTITY::IS_ENTITY_IN_WATER(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_156()//Position - 0x9333
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_44, true) < IntToFloat(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_157()//Position - 0x9383
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_162(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_159())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71) && STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(1) && PED::CAN_CREATE_RANDOM_DRIVER())
						{
							iLocal_58 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_57, 1);
							BRAIN::TASK_VEHICLE_TEMP_ACTION(iLocal_58, iLocal_57, 1, 99999999);
							ENTITY::SET_ENTITY_HEALTH(iLocal_58, true);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57, 1084227584);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, true, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_57, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_57, 1);
						AUDIO::_0x774BD811F656A122(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_57, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_57, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_72))
					{
						iLocal_61 = VEHICLE::CREATE_VEHICLE(iLocal_72, vLocal_62, fLocal_63, true, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_61, false, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_61, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_61, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_61, 1084227584);
						AUDIO::_0x774BD811F656A122(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_61, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_61, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72);
						SYSTEM::WAIT(0);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar0]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iVar0], 0) && !func_158(iLocal_56[iVar0], 2277090178))
								{
									BRAIN::TASK_PLAY_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, 4294967295, 1, 0, 0, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_56[iVar0], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = PED::CREATE_PED(25, iLocal_70[iVar0], vLocal_66[iVar0 /*3*/], fLocal_67[iVar0], 1, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_56[iVar0], vLocal_66[iVar0 /*3*/], 0, 0, 1);
								ENTITY::SET_ENTITY_HEALTH(iLocal_56[iVar0], true);
								BRAIN::TASK_PLAY_ANIM(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, 4294967295, 1, 0, 0, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4])) && func_60(iLocal_56[5])) && func_60(iLocal_56[6])) && func_14(iLocal_57)) && func_14(iLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_159())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (PED::CAN_CREATE_RANDOM_PED(0) && PED::CAN_CREATE_RANDOM_BIKE_RIDER())
						{
							iLocal_58 = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_57, 1);
							BRAIN::TASK_VEHICLE_TEMP_ACTION(iLocal_58, iLocal_57, 1, 99999999);
							ENTITY::SET_ENTITY_HEALTH(iLocal_58, true);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, true, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_57, true);
						AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_57, 1);
						AUDIO::_0x774BD811F656A122(AUDIO::GET_RADIO_STATION_NAME(10), 1);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_57, AUDIO::GET_RADIO_STATION_NAME(10));
						VEHICLE::_0xAB04325045427AAE(iLocal_57, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[iVar1], 0) && !func_158(iLocal_56[iVar1], 2277090178))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_56[iVar1], vLocal_66[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										BRAIN::TASK_PLAY_ANIM(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, 4294967295, 1, 0, 0, 0, 0);
									}
									else
									{
										BRAIN::TASK_PLAY_ANIM(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, 4294967295, 1, 0.5f, 0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(iLocal_56[iVar1], true);
								}
							}
							else if (STREAMING::HAS_MODEL_LOADED(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = PED::CREATE_PED(25, iLocal_70[iVar1], vLocal_66[iVar1 /*3*/], fLocal_67[iVar1], 1, true);
								ENTITY::SET_ENTITY_HEALTH(iLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4]))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iLocal_56[4], AUDIO::_0x0626A247D2405330(), 4294967295, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_159())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_57 = VEHICLE::CREATE_VEHICLE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_57, 1084227584);
						VEHICLE::_0xE842A9398079BD82(iLocal_57, 0f);
						VEHICLE::_0xE3EBAAE484798530(iLocal_57, 0);
						unk_0xBCD39DE97BFBDA77(iLocal_57, 0);
						if (VEHICLE::_GET_BOAT_ANCHOR(iLocal_57))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_57, true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_57, false, true, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar2]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_69[iVar2]))
						{
							if (!PED::IS_PED_INJURED(iLocal_69[iVar2]) && func_14(iLocal_68[iVar2]))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_68[iVar2], 4294967295, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_69[iVar2], iLocal_68[iVar2], 4294967295);
								}
							}
						}
						else if (func_14(iLocal_68[iVar2]) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_68[iVar2], 25, joaat("a_m_y_jetski_01"), 4294967295, 1, true);
							PED::SET_PED_DIES_IN_WATER(iLocal_69[iVar2], 0);
							ENTITY::SET_ENTITY_HEALTH(iLocal_69[iVar2], true);
						}
					}
					else if (STREAMING::HAS_MODEL_LOADED(iLocal_71))
					{
						iLocal_68[iVar2] = VEHICLE::CREATE_VEHICLE(iLocal_71, vLocal_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68[iVar2], 1084227584);
						VEHICLE::_0xE842A9398079BD82(iLocal_68[iVar2], 0f);
						VEHICLE::_0xE3EBAAE484798530(iLocal_68[iVar2], 1);
						unk_0xBCD39DE97BFBDA77(iLocal_68[iVar2], 1);
						if (VEHICLE::_GET_BOAT_ANCHOR(iLocal_68[iVar2]))
						{
							VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar2], true);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_68[iVar2], false, true, 0);
					}
					iVar2++;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_71);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_69[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_69[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_69[2]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_jetski_01"));
				}
				PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 170, true);
			}
		}
	}
}

int func_158(int iParam0, int iParam1)//Position - 0x9AA8
{
	if (func_60(iParam0))
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()//Position - 0x9ADB
{
	if (!func_161())
	{
		return 0;
	}
	if (func_60(AUDIO::_0x0626A247D2405330()))
	{
		if (!func_160(AUDIO::_0x0626A247D2405330(), vLocal_59, 100f) || CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

bool func_160(int iParam0, vector3 vParam1, float fParam2)//Position - 0x9B1E
{
	return SYSTEM::VDIST2(unk_0x8000C77B5F336760(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

int func_161()//Position - 0x9B3B
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
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

int func_162(var uParam0)//Position - 0x9B89
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_163(var uParam0)//Position - 0x9BEB
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, int iParam2)//Position - 0x9C02
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 30))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return BRAIN::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 27), 4294967295);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x9CF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_166(var uParam0)//Position - 0x9D22
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_92 + uParam0->f_93) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 2)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C30.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 29))
					{
						func_167(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_167(int iParam0)//Position - 0x9DAC
{
	func_168(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_168(int iParam0, char* sParam1, int iParam2)//Position - 0x9DC2
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 30))
	{
		switch (func_165(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				unk_0xE2BBD32891C18569(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 27), 4294967295);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_169()//Position - 0x9E9C
{
	int iVar0;
	
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43)
		{
			case 0:
				vLocal_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				vLocal_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				vLocal_83 = { -68.87878f, -1818.903f, 24.55311f };
				vLocal_84 = { -56.0098f, -1807.029f, 27.85417f };
				vLocal_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				vLocal_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				vLocal_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				vLocal_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				vLocal_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				vLocal_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				vLocal_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			
			case 1:
				vLocal_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				vLocal_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				vLocal_83 = { -523.5497f, 262.2986f, 80.01991f };
				vLocal_84 = { -509.1013f, 272.478f, 86.17713f };
				vLocal_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				vLocal_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				vLocal_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				vLocal_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				vLocal_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				vLocal_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				vLocal_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			
			case 2:
				vLocal_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				vLocal_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				vLocal_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				vLocal_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				vLocal_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				vLocal_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				vLocal_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				vLocal_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			
			case 3:
				vLocal_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				vLocal_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				vLocal_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				vLocal_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				vLocal_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				vLocal_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				vLocal_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				vLocal_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			
			case 4:
				vLocal_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				vLocal_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				vLocal_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				vLocal_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				vLocal_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				vLocal_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				vLocal_83 = { -1265.744f, -1057.199f, 5.410841f };
				vLocal_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_174(Local_43, &vLocal_85, &vLocal_86, &fLocal_87);
		iLocal_70[0] = joaat("a_f_y_hipster_02");
		iLocal_70[1] = joaat("a_m_y_hipster_02");
		iLocal_70[2] = joaat("a_m_y_hipster_02");
		iLocal_70[3] = joaat("a_f_y_hipster_02");
		iLocal_70[4] = joaat("a_m_y_hipster_02");
		iLocal_70[5] = joaat("a_m_y_hipster_02");
		iLocal_70[6] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 1)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			func_173(&uLocal_90, iLocal_72);
		}
		iLocal_71 = func_172(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			func_173(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_173(&uLocal_90, iLocal_71);
		func_170(&uLocal_90, cLocal_73);
		PATHFIND::SET_PED_PATHS_IN_AREA(vLocal_83, vLocal_84, false, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(vLocal_85, vLocal_86, fLocal_87, 0, false, 1);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43)
		{
			case 5:
				vLocal_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				vLocal_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				vLocal_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				vLocal_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			
			case 6:
				vLocal_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				vLocal_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				vLocal_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				vLocal_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			
			case 7:
				vLocal_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				vLocal_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				vLocal_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				vLocal_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			
			case 8:
				vLocal_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				vLocal_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				vLocal_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				vLocal_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		iLocal_71 = joaat("SEASHARK");
		func_173(&uLocal_90, iLocal_71);
		func_173(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_170(var uParam0, char* sParam1)//Position - 0xA827
{
	func_171(uParam0, 1, 4294967295, sParam1, 0);
}

void func_171(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA83A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 4294967295)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_172(int iParam0)//Position - 0xA922
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("BATI");
			break;
		
		case 2:
			iVar0 = joaat("NINEF");
			break;
		
		case 3:
			iVar0 = joaat("SEASHARK");
			break;
	}
	return iVar0;
}

void func_173(var uParam0, int iParam1)//Position - 0xA963
{
	func_171(uParam0, 0, iParam1, "NULL", 0);
}

void func_174(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0xA977
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_175()//Position - 0xAA99
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_59(9))
	{
		return 0;
	}
	if (func_44(6) || func_44(7))
	{
		return 0;
	}
	if (Global_DB6F)
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && func_49() != 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (func_60(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (((func_14(iVar0) && PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0)) && !func_197(AUDIO::_0x0626A247D2405330(), iVar0, 4294967295)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("TAXI"))
		{
			return 0;
		}
	}
	switch (Local_43)
	{
		case 0:
			if (Global_19E3C[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_19E3C[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_19E3C[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_19E3C[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_19E3C[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_19E32[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_19E32[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_19E32[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_19E32[3])
			{
				return 0;
			}
			break;
	}
	if (!func_161())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar1]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iVar2);
				BRAIN::TASK_PAUSE(0, iVar1 * 100);
				BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iVar2);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_60(iLocal_69[iVar1]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iVar2);
				BRAIN::TASK_PAUSE(0, iVar1 * 110);
				if (func_14(iLocal_68[iVar1]) && PED::IS_PED_IN_VEHICLE(iLocal_69[iVar1], iLocal_68[iVar1], 0))
				{
					BRAIN::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					BRAIN::TASK_WANDER_STANDARD(0, 1193033728, 0);
				}
				CUTSCENE::_0x8D9DF6ECA8768583(iVar2);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_57, 0))
			{
				BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 30f, 786597);
			}
			else
			{
				BRAIN::TASK_WANDER_STANDARD(iLocal_58, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_177())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar4]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
				BRAIN::TASK_PAUSE(0, iVar4 * 50);
				BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 0);
				CUTSCENE::_0x8D9DF6ECA8768583(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_176(iLocal_56[iVar4], 1);
				}
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_14(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar4], false);
			}
			if (func_60(iLocal_69[iVar4]))
			{
				BRAIN::OPEN_SEQUENCE_TASK(&iVar3);
				BRAIN::TASK_PAUSE(0, iVar4 * 60);
				if (func_14(iLocal_68[iVar4]) && PED::IS_PED_IN_VEHICLE(iLocal_69[iVar4], iLocal_68[iVar4], 0))
				{
					BRAIN::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					BRAIN::TASK_SMART_FLEE_PED(0, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 0);
				}
				CUTSCENE::_0x8D9DF6ECA8768583(iVar3);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_176(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_57) && Local_43.f_1 == 3)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_57, false);
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_57, 0))
			{
				BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 50f, 786468);
			}
			else
			{
				BRAIN::TASK_SMART_FLEE_PED(iLocal_58, AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 0);
			}
		}
		switch (Local_43)
		{
			case 0:
				Global_19E3C[0] = 1;
				Global_19E42[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 1:
				Global_19E3C[1] = 1;
				Global_19E42[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 2:
				Global_19E3C[2] = 1;
				Global_19E42[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 3:
				Global_19E3C[3] = 1;
				Global_19E42[3] = MISC::GET_GAME_TIMER();
				break;
			
			case 4:
				Global_19E3C[4] = 1;
				Global_19E42[4] = MISC::GET_GAME_TIMER();
				break;
			
			case 5:
				Global_19E32[0] = 1;
				Global_19E37[0] = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				Global_19E32[1] = 1;
				Global_19E37[1] = MISC::GET_GAME_TIMER();
				break;
			
			case 7:
				Global_19E32[2] = 1;
				Global_19E37[2] = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				Global_19E32[3] = 1;
				Global_19E37[3] = MISC::GET_GAME_TIMER();
				break;
		}
		return 0;
	}
	return 1;
}

void func_176(int iParam0, bool bParam1)//Position - 0xAFED
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(iParam0))
		{
			func_135(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_135(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_177()//Position - 0xB05E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_69[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_178(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_BEING_JACKED(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar0], 0))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], AUDIO::_0x0626A247D2405330(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_57, 0))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, AUDIO::_0x0626A247D2405330(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_160(AUDIO::_0x0626A247D2405330(), vLocal_44, 50f) && PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (PED::IS_PED_INJURED(iLocal_58))
		{
			return 1;
		}
		else if (func_178(iLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_BEING_JACKED(iLocal_58))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, false);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_57, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_57, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, AUDIO::_0x0626A247D2405330(), 1))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_61, 0))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_61, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, AUDIO::_0x0626A247D2405330(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_178(iLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xB2B0
{
	vector3 vVar0;
	
	if (func_15(AUDIO::_0x0626A247D2405330()) && func_15(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, AUDIO::_0x0626A247D2405330(), 1))
		{
			return 1;
		}
		if (func_192(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
			{
				vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) - unk_0x8000C77B5F336760(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_191(AUDIO::_0x0626A247D2405330(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_179(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_179(int iParam0, float fParam1)//Position - 0xB36B
{
	float fVar0;
	
	if (func_15(AUDIO::_0x0626A247D2405330()) && func_15(iParam0))
	{
		if (func_190(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_180(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_180(int iParam0, float fParam1)//Position - 0xB3E1
{
	return func_181(iParam0, AUDIO::_0x0626A247D2405330(), fParam1, 1, 250, 7);
}

bool func_181(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB3F9
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_189(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar2 != 4294967295)
		{
			func_188(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_185(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == 4294967295)
	{
		iVar2 = func_184();
		if (iVar2 == 4294967295)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_182(&(Local_40[iVar2 /*4*/]), vVar1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_182(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xB4BA
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_15(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_183(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		func_15(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, unk_0x8000C77B5F336760(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_15(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, 0))
			{
				if (bLocal_41)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, unk_0x8000C77B5F336760(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)//Position - 0xB5E6
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x8000C77B5F336760(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x8000C77B5F336760(iParam0, true);
}

int func_184()//Position - 0xB6AB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_185(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xB6F5
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_187(unk_0x8000C77B5F336760(iParam1, true) - unk_0x8000C77B5F336760(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_187(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_186(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_186(vector3 vParam0, vector3 vParam1)//Position - 0xB786
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_187(vector3 vParam0)//Position - 0xB7A7
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

void func_188(var uParam0)//Position - 0xB7E6
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_189(int iParam0, int iParam1)//Position - 0xB801
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_190(int iParam0)//Position - 0xB840
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0) && WEAPON::IS_PED_ARMED(AUDIO::_0x0626A247D2405330(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1, float fParam2)//Position - 0xB868
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar1 = { unk_0x8000C77B5F336760(iParam1, true) - unk_0x8000C77B5F336760(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_192(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB8AF
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_15(AUDIO::_0x0626A247D2405330()) && func_15(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_196(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_193(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
				{
					if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_196(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_193(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_193(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xB9AA
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(unk_0x8000C77B5F336760(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_194(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_194(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0, float fParam1)//Position - 0xBAB6
{
	var uVar0;
	vector3 vVar1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_195(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xBB4B
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_187(vParam1 - unk_0x8000C77B5F336760(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_187(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_186(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xBBD9
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(AUDIO::_0x0626A247D2405330()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(unk_0x8000C77B5F336760(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0xBC21
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_198()//Position - 0xBC5F
{
	switch (Local_43)
	{
		case 5:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6174.f_2, 0);
			break;
		
		case 6:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6174.f_2, 1);
			break;
		
		case 7:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6174.f_2, 2);
			break;
		
		case 8:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6174.f_2, 3);
			break;
		
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_3, 0);
			break;
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_3, 1);
			break;
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_3, 2);
			break;
		
		case 3:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_3, 3);
			break;
		
		case 4:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_3, 4);
			break;
	}
	return 0;
}

void func_199()//Position - 0xBD59
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_201(1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_43 == 1)
	{
		iLocal_89 = func_200(374.0083f, 279.5919f, 102.3306f, 40f);
		MISC::CLEAR_AREA_OF_VEHICLES(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = func_200(vLocal_44, 60f);
	}
}

int func_200(vector3 vParam0, float fParam1)//Position - 0xBDEF
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return PED::ADD_SCENARIO_BLOCKING_AREA(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_201(bool bParam0)//Position - 0xBE21
{
	if (bParam0)
	{
		switch (Local_43)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_173(&uLocal_90, joaat("BANSHEE"));
				func_173(&uLocal_90, joaat("FELTZER2"));
				func_173(&uLocal_90, joaat("SENTINEL"));
				break;
			
			case 4:
				func_173(&uLocal_90, joaat("BATI"));
				func_173(&uLocal_90, joaat("RUFFIAN"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_173(&uLocal_90, joaat("SEASHARK"));
				break;
		}
	}
	else
	{
		func_202(&uLocal_90);
	}
}

void func_202(var uParam0)//Position - 0xBEBF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((*uParam0)[iVar0 /*18*/], 30))
		{
			func_203(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_203(var uParam0)//Position - 0xBEF8
{
	func_204(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_204(int iParam0, char* sParam1, int iParam2)//Position - 0xBF0F
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				BRAIN::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_205(int iParam0)//Position - 0xBFCF
{
	switch (iParam0)
	{
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_1, 0);
			break;
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_1, 1);
			break;
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_1, 2);
			break;
		
		case 3:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_1, 3);
			break;
		
		case 4:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6177.f_1, 4);
			break;
	}
	return 0;
}

bool func_206(int iParam0, int iParam1)//Position - 0xC064
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

void func_207()//Position - 0xC0B1
{
	if (func_208(func_209(86, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (func_208(func_209(87, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (func_208(func_209(88, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (func_208(func_209(89, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (func_208(func_209(90, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (func_208(func_209(82, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (func_208(func_209(83, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (func_208(func_209(84, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (func_208(func_209(85, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_210(0);
	}
}

int func_208(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xC249
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

Vector3 func_209(int iParam0, int iParam1)//Position - 0xC2C4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_64EA[iVar0 /*23*/][iParam1 /*3*/];
}

void func_210(bool bParam0)//Position - 0xC302
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_46)
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(iLocal_56[iVar0]))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_56[iVar0]);
			BRAIN::TASK_WANDER_STANDARD(iLocal_56[iVar0], 1193033728, 0);
			ENTITY::SET_ENTITY_HEALTH(iLocal_56[iVar0], false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_69[iVar0]))
		{
			if (func_15(iLocal_68[iVar0]))
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_69[iVar0]);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_68[iVar0])))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_68[iVar0], false);
				}
				BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_69[iVar0], true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_69[iVar0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_69[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_58))
	{
		if (func_15(iLocal_57))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_58);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 1, true);
			BRAIN::TASK_VEHICLE_DRIVE_WANDER(iLocal_58, iLocal_57, 15f, 786599);
			PED::SET_PED_KEEP_TASK(iLocal_58, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, false);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_57);
		}
	}
	if (func_15(iLocal_61))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	switch (Local_43)
	{
		case 5:
			func_213(82, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6174.f_2), 0);
			break;
		
		case 6:
			func_213(83, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6174.f_2), 1);
			break;
		
		case 7:
			func_213(84, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6174.f_2), 2);
			break;
		
		case 8:
			func_213(85, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6174.f_2), 3);
			break;
		
		case 0:
			func_213(86, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6177.f_3), 0);
			break;
		
		case 1:
			func_213(87, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6177.f_3), 1);
			break;
		
		case 2:
			func_213(88, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6177.f_3), 2);
			break;
		
		case 3:
			func_213(89, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6177.f_3), 3);
			break;
		
		case 4:
			func_213(90, 0, 0);
			MISC::SET_BIT(&(Global_19E56.f_6177.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
	AUDIO::_0x774BD811F656A122(AUDIO::GET_RADIO_STATION_NAME(10), 0);
	if (iLocal_54)
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = PLAYER::GET_PLAYER_INDEX();
		if (PLAYER::IS_PLAYER_PLAYING(iVar1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(iVar1))
			{
				PLAYER::SET_PLAYER_CONTROL(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_201(0);
	}
	if (iLocal_47)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vLocal_83, vLocal_84, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_85, vLocal_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	BRAIN::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_43 == 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_89, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_88, 0);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 170, false);
	}
	func_211(&uLocal_90, 0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_211(var uParam0, bool bParam1)//Position - 0xC649
{
	int iVar0;
	
	if (!bParam1)
	{
		func_202(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_212(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 4294967295;
}

void func_212(var uParam0)//Position - 0xC684
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_213(int iParam0, bool bParam1, bool bParam2)//Position - 0xC69D
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

